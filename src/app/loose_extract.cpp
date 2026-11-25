#include <windows.h>
#include <bcrypt.h>
#include <filesystem>
#include <fstream>
#include <iterator>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <cwchar>
#include "miniz.h"
#include "app/loose_extract.h"
#include "app/nightcrawler_comic.h"
namespace fs=std::filesystem;
using Bytes=std::vector<unsigned char>;
namespace {
uint32_t word(const Bytes& b,size_t at) {
    if(at>b.size() || b.size()-at<4)throw std::runtime_error("Truncated FB length");
    return b[at]|(uint32_t(b[at+1])<<8)|(uint32_t(b[at+2])<<16)|(uint32_t(b[at+3])<<24);
}
void append(Bytes& b,uint32_t n) {for(int i=0;i<4;++i)b.push_back((unsigned char)(n>>(8*i)));}
std::string lower(std::string s) {for(char& c:s){if(c>='A'&&c<='Z')c+=32;if(c=='\\')c='/';}return s;}
std::string safe(std::string s) {
    s=lower(s);
    if(s.empty()||s.front()=='/'||s.find(':')!=s.npos)throw std::runtime_error("Unsafe asset path: "+s);
    size_t at=0;
    do {
        size_t end=s.find('/',at);std::string part=s.substr(at,end==s.npos?end:end-at);
        if(part.empty()||part=="."||part==".."||part.back()=='.'||part.back()==' ')
            throw std::runtime_error("Unsafe asset path: "+s);
        for(unsigned char c:part)if(c<32 || c=='<'||c=='>'||c=='|'||c=='?'||c=='*')throw std::runtime_error("Unsafe asset path: "+s);
        std::string base=part.substr(0,part.find('.'));
        if(base=="con"||base=="prn"||base=="aux"||base=="nul"||
           (base.size()==4&&(base.substr(0,3)=="com"||base.substr(0,3)=="lpt")&&base[3]>='1'&&base[3]<='9'))
            throw std::runtime_error("Reserved asset filename: "+s);
        if(end==s.npos)break;at=end+1;
    } while(true);
    return s;
}
std::string hash(const Bytes& b) {
    unsigned char digest[32];
    if(b.size()>ULONG_MAX||BCryptHash(BCRYPT_SHA256_ALG_HANDLE,nullptr,0,const_cast<PUCHAR>(b.data()),(ULONG)b.size(),digest,32)<0)
        throw std::runtime_error("SHA256 failed");
    std::string s;for(unsigned char c:digest){s+="0123456789abcdef"[c>>4];s+="0123456789abcdef"[c&15];}return s;
}
void write(const fs::path& p,const Bytes& b) {
    if(fs::exists(p))throw std::runtime_error("Extraction output collision: "+p.u8string());
    fs::create_directories(p.parent_path());
    std::ofstream f(p,std::ios::binary);if(!f)throw std::runtime_error("Cannot create "+p.u8string());
    f.write(reinterpret_cast<const char*>(b.data()),b.size());f.close();
    if(!f)throw std::runtime_error("Cannot finish "+p.u8string());
}
struct Resource {std::string kind,name;};
Bytes package(const std::vector<Resource>& resources) {
    if(resources.size()>(UINT32_MAX-24)/24)throw std::runtime_error("PKGB too large");
    uint32_t pool_at=24+(uint32_t)resources.size()*24;Bytes pool,records;
    std::map<std::string,uint32_t> strings;
    auto intern=[&](const std::string& s) {
        auto found=strings.find(s);if(found!=strings.end())return found->second;
        uint32_t at=pool_at+(uint32_t)pool.size();strings[s]=at;
        pool.insert(pool.end(),s.begin(),s.end());pool.push_back(0);return at;
    };
    append(records,0x11b1);append(records,1);append(records,intern("packagedef"));append(records,UINT32_MAX);
    append(records,resources.empty()?UINT32_MAX:24);append(records,0);
    for(size_t i=0;i<resources.size();++i) {
        uint32_t kind=intern(resources[i].kind),key=intern("filename"),name=intern(resources[i].name);
        append(records,kind);append(records,i+1<resources.size()?24+(uint32_t)(i+1)*24:UINT32_MAX);
        append(records,UINT32_MAX);append(records,1);append(records,key);append(records,name);
    }
    records.insert(records.end(),pool.begin(),pool.end());return records;
}
std::string logical(std::string name,const std::string& kind) {
    static const std::set<std::string> kinds={"actorskin","actoranimdb","model","effect","texture","fightstyle","xml","combat_is","script","motionpath","characters","zonexml","nav","xml_resident"};
    if(!kinds.count(kind))throw std::runtime_error("Unsupported FB resource type: "+kind);
    if(kind=="combat_is") {if(name!="on"&&name!="off")throw std::runtime_error("Invalid combat control");return name;}
    name=safe(name);std::string prefix;
    if(kind=="actorskin"||kind=="actoranimdb")prefix="actors/";
    if(kind=="effect")prefix="effects/";if(kind=="motionpath")prefix="motionpaths/";
    if(name.compare(0,prefix.size(),prefix))throw std::runtime_error("Resource outside expected directory: "+name);
    name.erase(0,prefix.size());
    size_t dot=name.rfind('.');
    if(dot==name.npos||name.find('/',dot)!=name.npos)throw std::runtime_error("Resource extension missing: "+name);
    return name.substr(0,dot);
}
// If a fresh install already has a loose override, leave that map alone.
bool absent_or_same(const fs::path& path, const Bytes& expected) {
    const DWORD attrs=GetFileAttributesW(path.c_str());
    if(attrs==INVALID_FILE_ATTRIBUTES)
        return GetLastError()==ERROR_FILE_NOT_FOUND || GetLastError()==ERROR_PATH_NOT_FOUND;
    if(attrs&(FILE_ATTRIBUTE_DIRECTORY|FILE_ATTRIBUTE_REPARSE_POINT))return false;
    if(fs::file_size(path)!=expected.size())return false;
    std::ifstream file(path,std::ios::binary);
    return file && Bytes(std::istreambuf_iterator<char>(file),{})==expected && !file.bad();
}
struct Zip {
    mz_zip_archive zip{};FILE *file=nullptr;
    explicit Zip(const wchar_t *path) {
        file=_wfopen(path,L"rb");if(!file)throw std::runtime_error("Cannot open assetsfb.zip");
        if(!mz_zip_reader_init_cfile(&zip,file,0,0)) {fclose(file);file=nullptr;throw std::runtime_error("Invalid assetsfb.zip");}
    }
    ~Zip(){mz_zip_reader_end(&zip);if(file)fclose(file);}
    Bytes read(unsigned i) {
        mz_zip_archive_file_stat stat{};if(!mz_zip_reader_file_stat(&zip,i,&stat)||stat.m_uncomp_size>512ull*1024*1024)
            throw std::runtime_error("Invalid or oversized ZIP entry");
        Bytes b((size_t)stat.m_uncomp_size);
        if(!mz_zip_reader_extract_to_mem(&zip,i,b.data(),b.size(),0))throw std::runtime_error("ZIP decompression/CRC failed: "+std::string(stat.m_filename));
        return b;
    }
};
}
static int extract_loose(const wchar_t *archive,const wchar_t *destination,const wchar_t *game_root,
                         Xml1ExtractProgress progress,void *context,char *error,unsigned error_size) {
    try {
        fs::path dest(destination);if(fs::exists(dest))throw std::runtime_error("Extraction destination already exists");
        Zip zip(archive);fs::create_directories(dest);
        struct Entry {unsigned index;std::string name;bool fb;};std::vector<Entry> entries;std::set<std::string> paths;
        unsigned count=mz_zip_reader_get_num_files(&zip.zip);
        for(unsigned i=0;i<count;++i) {
            if(mz_zip_reader_is_file_a_directory(&zip.zip,i))continue;
            unsigned size=mz_zip_reader_get_filename(&zip.zip,i,nullptr,0);
            if(size<2||size>4096)throw std::runtime_error("Invalid ZIP filename length");
            std::vector<char> name(size);mz_zip_reader_get_filename(&zip.zip,i,name.data(),size);
            std::string p=safe(name.data());if(!paths.insert(p).second)throw std::runtime_error("Duplicate ZIP path: "+p);
            entries.push_back({i,p,p.size()>3&&p.substr(p.size()-3)==".fb"});
        }
        std::map<std::string,std::string> assets;
        auto put=[&](const std::string& original,const Bytes& bytes) {
            std::string name=safe(original),digest=hash(bytes);
            auto previous=assets.find(name);
            if(previous!=assets.end() && previous->second==digest)return name;
            fs::path path=dest/fs::u8path(name);
            // This is a new, owned extraction tree. Standard FB extraction
            // replaces earlier copies at their original resource filename.
            fs::create_directories(path.parent_path());
            std::ofstream file(path,std::ios::binary|std::ios::trunc);
            if(!file)throw std::runtime_error("Cannot create "+path.u8string());
            file.write(reinterpret_cast<const char*>(bytes.data()),bytes.size());file.close();
            if(!file)throw std::runtime_error("Cannot finish "+path.u8string());
            assets[name]=digest;return name;
        };
        struct MapPackage {fs::path path;std::vector<Resource> resources;};
        std::vector<MapPackage> comic_packages;
        const auto is_comic_zone=[](const Resource& r) {
            return r.kind=="zonexml" && r.name==xml1::nightcrawler_zone;
        };
        unsigned done=0;
        for(int pass=0;pass<2;++pass)for(const Entry& entry:entries) {
            if(entry.fb!=(pass==1))continue;
            if(progress&&!progress(context,done,(unsigned)entries.size(),entry.name.c_str()))throw std::runtime_error("Extraction cancelled");
            Bytes b=zip.read(entry.index);
            if(!entry.fb)put(entry.name,b);
            else {
                std::vector<Resource> resources;std::set<std::pair<std::string,std::string>> localized;
                struct Record {std::string name,kind;Bytes payload;};std::vector<Record> records;
                size_t at=0;
                while(at<b.size()) {
                    if(b.size()-at<196)throw std::runtime_error("Truncated FB header: "+entry.name);
                    auto field=[&](size_t off,size_t len) {const char *p=(const char*)b.data()+at+off;const char *end=(const char*)memchr(p,0,len);if(!end)throw std::runtime_error("Unterminated FB field");return std::string(p,end);};
                    std::string name=field(0,128),kind=field(128,64);uint32_t length=word(b,at+192);
                    if(length>b.size()-at-196)throw std::runtime_error("Truncated FB payload: "+name);
                    Bytes payload(b.begin()+at+196,b.begin()+at+196+length);at+=196+length;
                    if(kind=="combat_is"&&!payload.empty())throw std::runtime_error("Unexpected control payload");
                    records.push_back({name,kind,std::move(payload)});
                }
                static const std::set<std::string> languages={".eng",".fre",".ger",".ita",".spa",".pol",".rus"};
                for(const auto& record:records) {
                    const auto& name=record.name;const auto& kind=record.kind;
                    std::string output=kind=="combat_is"?name:put(name,record.payload),key=logical(output,kind);
                    std::string suffix=lower(fs::path(name).extension().string());
                    if(languages.count(suffix)&&!localized.insert({kind,key}).second)continue;
                    resources.push_back({kind,key});
                }
                fs::path p(entry.name);p.replace_extension(".pkgb");
                if(game_root && std::any_of(resources.begin(),resources.end(),is_comic_zone))
                    comic_packages.push_back({p,std::move(resources)});
                else write(dest/p,package(resources));
            }
            ++done;
        }
        // The model may come from another FB, so decide after all FBs have
        // been unpacked, still inside the installer's private extraction tree.
        if(!comic_packages.empty() && assets.count(xml1::nightcrawler_source) &&
           !assets.count(xml1::nightcrawler_binary) &&
           assets.count(std::string(xml1::comic_model)+".igb")) {
            const fs::path root(game_root);
            std::ifstream input(dest/xml1::nightcrawler_source,std::ios::binary);
            if(!input)throw std::runtime_error("Cannot read extracted 10th Avenue config");
            const std::string stock(std::istreambuf_iterator<char>(input),{});
            auto fixed=xml1::nightcrawler_comic_fix(stock);
            if(!fixed.empty() &&
               absent_or_same(root/xml1::nightcrawler_source,Bytes(stock.begin(),stock.end())) &&
               absent_or_same(root/xml1::nightcrawler_binary,fixed)) {
                auto updated=comic_packages;
                for(auto& map:updated) {
                    const auto model=std::find_if(map.resources.begin(),map.resources.end(),[](const Resource& r) {
                        return r.kind=="model" && r.name==xml1::comic_model;
                    });
                    const auto zone=std::find_if(map.resources.begin(),map.resources.end(),is_comic_zone);
                    if(model==map.resources.end())map.resources.insert(zone,{"model",xml1::comic_model});
                }
                const bool preserve_overrides=std::all_of(updated.begin(),updated.end(),[&](const MapPackage& map) {
                    return absent_or_same(root/map.path,package(map.resources));
                });
                if(preserve_overrides) {
                    write(dest/xml1::nightcrawler_binary,fixed);
                    comic_packages=std::move(updated);
                }
            }
        }
        for(const auto& map:comic_packages)write(dest/map.path,package(map.resources));
        if(progress&&!progress(context,done,(unsigned)entries.size(),"Validation complete"))throw std::runtime_error("Extraction cancelled");
        return 1;
    } catch(const std::exception& e) {
        if(error_size)snprintf(error,error_size,"%s",e.what());return 0;
    }
}

extern "C" int xml1_extract_loose(const wchar_t *archive,const wchar_t *destination,
    Xml1ExtractProgress progress,void *context,char *error,unsigned error_size) {
    return extract_loose(archive,destination,nullptr,progress,context,error,error_size);
}
extern "C" int xml1_extract_loose_for_install(const wchar_t *archive,const wchar_t *destination,
    const wchar_t *game_root,Xml1ExtractProgress progress,void *context,char *error,unsigned error_size) {
    return extract_loose(archive,destination,game_root,progress,context,error,error_size);
}
