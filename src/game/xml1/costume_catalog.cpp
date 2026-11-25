#include "game/xml1/costume_catalog.h"
#include "engine/resources/xmlb.h"

#include <array>
#include <cstdio>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <map>
#include <stdexcept>
#include <string_view>
#include <vector>

namespace {
namespace fs = std::filesystem;
struct OutfitSet {
    unsigned family = 0, base = 0;
    std::array<bool,100> available{};
};
std::map<std::string,OutfitSet> catalog;
constexpr size_t xml_limit = 16 * 1024 * 1024;

std::string lower(std::string s) {
    for (char& c : s) if (c >= 'A' && c <= 'Z') c += 'a' - 'A';
    return s;
}
bool identifier(std::string_view name) {
    if (name.empty()) return false;
    for (char c : name)
        if (!((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || c == '_' || c == '-')) return false;
    return true;
}
bool logical_path(std::string_view name) {
    while (true) {
        const auto slash=name.find('/');
        auto part=name.substr(0,slash);
        if (slash==name.npos && part.size()>4 && part.substr(part.size()-4)==".igb") part.remove_suffix(4);
        if (!identifier(part)) return false;
        if (slash==name.npos) return true;
        name.remove_prefix(slash+1);
    }
}
unsigned decimal(std::string_view s) {
    if (s.empty() || s.size() > 3) return 0;
    unsigned n=0;
    for (char c : s) {
        if (c < '0' || c > '9') return 0;
        n=n*10+unsigned(c-'0');
    }
    return n;
}
std::string attr(const xml1::XmlNode& node, std::string_view name) {
    for (const auto& row : node.attrs) if (lower(row.first)==name) return row.second;
    return {};
}
std::vector<char> read_xml(const fs::path& path) {
    std::error_code ec;
    const auto n=fs::file_size(path,ec);
    if (ec || !n || n>xml_limit) return {};
    std::ifstream f(path,std::ios::binary);
    std::vector<char> data(static_cast<size_t>(n));
    if (!f.read(data.data(),static_cast<std::streamsize>(n))) return {};
    return data;
}
uint32_t le32(const unsigned char* p) {
    return p[0] | (uint32_t(p[1])<<8) | (uint32_t(p[2])<<16) | (uint32_t(p[3])<<24);
}
bool valid_igb(const fs::path& path) {
    // Bounds for XML1's Xbox Alchemy v6 stream (see inspect-menu-igb.py).
    // Validate section framing before the guest can load a missing/truncated model.
    std::error_code ec;
    const uint64_t size=fs::file_size(path,ec);
    if (ec || size<48) return false;
    std::ifstream f(path,std::ios::binary);
    unsigned char header[48];
    if (!f.read(reinterpret_cast<char*>(header),sizeof(header))) return false;
    uint32_t h[12];
    for (unsigned i=0; i<12; ++i) h[i]=le32(header+i*4);
    if (h[10]!=0xfada || (h[11]&0xffff)!=6 || !h[1] || !h[3] || !h[4] ||
        uint64_t(h[9])*12>h[8] || uint64_t(h[3])*24>h[2] || uint64_t(h[1])*8>h[0])
        return false;
    uint64_t at=48ull+h[8];
    auto skip_sized=[&](unsigned min) {
        if (at>size || size-at<4) return false;
        unsigned char bytes[4];
        f.seekg(static_cast<std::streamoff>(at));
        if (!f.read(reinterpret_cast<char*>(bytes),4)) return false;
        const auto n=le32(bytes);
        if (n<min || n>size-at) return false;
        at+=n;
        return true;
    };
    if (!skip_sized(4)) return false;
    at+=h[2];
    for (uint32_t flag : {0x40000000u,0x10000000u})
        if ((h[11]&flag) && !skip_sized(4)) return false;
    at+=h[0];
    if (!skip_sized(8)) return false;
    if (h[11]&0x80000000u) at+=4;
    return at<=size && h[4]<=size-at;
}

struct Scanner {
    fs::path root;
    std::string lang;
    std::map<std::string,bool> igb;
    bool model(const std::string& path) {
        const auto [it,inserted]=igb.try_emplace(path,false);
        if (inserted) it->second=valid_igb(root/path);
        return it->second;
    }
    bool package(const std::string& name, const std::string& skin) {
        const auto b=read_xml(root/("packages/generated/characters/"+name+".pkgb"));
        if (b.empty()) return false;
        std::vector<xml1::XmlNode> nodes;
        try { nodes=xml1::parse_xmlb(b.data(),static_cast<unsigned>(b.size())); }
        catch (const std::runtime_error&) { return false; }
        if (nodes.size()!=1 || nodes[0].name!="packagedef" || !nodes[0].attrs.empty() || nodes[0].children.empty()) return false;
        for (const auto& n : nodes[0].children) {
            const auto type=lower(n.name);
            const auto asset=lower(attr(n,"filename"));
            if (n.attrs.size()!=1 || !n.children.empty() || !logical_path(asset)) return false;
            if (type=="actorskin" || type=="actoranimdb") {
                if (!model("actors/"+asset+".igb")) return false;
            } else if (type=="model" || type=="texture" || type=="motionpath") {
                const auto physical=(type=="motionpath"?"motionpaths/":"")+asset;
                const auto already=physical.size()>=4 && physical.substr(physical.size()-4)==".igb";
                if (!model(physical+(already?"":".igb"))) return false;
            }
        }
        // Some packages reference common dependencies rather than repeating
        // the actor skin declaration. The authoritative physical IGB is still required.
        return model("actors/"+skin+".igb");
    }
};

const OutfitSet* find(const char* name,unsigned family) {
    if (!name) return nullptr;
    size_t length=0;
    while (length<32 && name[length]) ++length;
    if (!length || length==32) return nullptr;
    auto it=catalog.find(lower(std::string(name,length)));
    return it!=catalog.end() && it->second.family==family ? &it->second : nullptr;
}
}

extern "C" int xml1_costumes_init(const char* root,const char* language,char* error,unsigned error_size) {
    catalog.clear();
    try {
        if (!root || !language || !identifier(language)) throw std::runtime_error("Invalid outfit scan root/language");
        Scanner scanner{fs::u8path(root),language,{}};
        const std::string stem="data/herostat."+scanner.lang;
        const auto bytes=read_xml(scanner.root/(stem+"b"));
        if (bytes.empty()) {
            if (fs::exists(scanner.root/(stem+"b")) || fs::exists(scanner.root/stem))
                throw std::runtime_error("Cannot read compiled herostat for outfit scan");
            return 1; // No roster in tool fixtures; keep the native path.
        }
        const auto roster=xml1::parse_xmlb(bytes.data(),static_cast<unsigned>(bytes.size()));
        if (roster.size()!=1) throw std::runtime_error("Invalid herostat root for outfit scan");
        std::map<std::string,OutfitSet> next;
        for (const auto& row : roster[0].children) {
            if (lower(row.name)!="stats" || lower(attr(row,"playable"))!="true") continue;
            const auto name=lower(attr(row,"name"));
            const auto skin=attr(row,"skin");
            if (!identifier(name) || skin.size()<3 || skin.size()>5)
                throw std::runtime_error("Invalid playable outfit registration: "+name);
            const auto prefix=skin.substr(0,skin.size()-2);
            const unsigned family=decimal(prefix),base=decimal(std::string_view(skin).substr(prefix.size()));
            if (!family || family>255 || !base)
                throw std::runtime_error("Invalid playable skin ID: "+name);
            OutfitSet entry;
            entry.family=family;
            std::array<bool,100> registered{};
            registered[base]=true;
            for (const auto& field : row.attrs)
                if (lower(field.first).compare(0,5,"skin_")==0) {
                    const unsigned id=decimal(field.second);
                    if (id>0 && id<100) registered[id]=true;
                }
            for (unsigned id=1; id<100; ++id) {
                if (!registered[id]) continue;
                const auto physical=prefix+(id<10?"0":"")+std::to_string(id);
                const auto package=name+"_"+physical;
                entry.available[id]=scanner.package(package,physical) && scanner.package(package+"_nc",physical);
            }
            entry.base=base;
            if (!entry.available[base]) {
                for (entry.base=1; entry.base<100 && !entry.available[entry.base]; ++entry.base) {}
                if (entry.base==100) throw std::runtime_error("No loadable outfit for "+name+"; restore its default model and packages");
            }
            if (!next.emplace(name,entry).second) throw std::runtime_error("Duplicate playable entry: "+name);
        }
        catalog.swap(next);
        return 1;
    } catch (const std::exception& e) {
        if (error && error_size) std::snprintf(error,error_size,"%s",e.what());
        return 0;
    }
}
extern "C" int xml1_costumes_active(void) { return !catalog.empty(); }
extern "C" unsigned xml1_costume_next(const char* name,unsigned family,unsigned current) {
    const auto* row=find(name,family);
    if (!row) return 0;
    if (current>=100 || !row->available[current]) return row->base;
    for (unsigned step=1; step<100; ++step) {
        const unsigned candidate=(current+step)%100;
        if (row->available[candidate]) return candidate;
    }
    return current;
}
extern "C" unsigned xml1_costume_fallback(const char* name,unsigned family,unsigned requested) {
    const auto* row=find(name,family);
    if (!row) return 0;
    return requested<100 && row->available[requested] ? requested : row->base;
}
