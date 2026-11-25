#include "app/shadow_king_roster.h"
#include <fstream>
#include <set>
#include <stdexcept>
#ifdef _WIN32
#include <windows.h>
#endif

namespace fs=std::filesystem;
namespace xml1 {
namespace {
std::string lower(std::string s) {
    for (char& c:s) if(c>='A' && c<='Z') c+=32;
    return s;
}

// Bound the small, optional assets and never follow a modified install's
// links/junctions on the way to a file we might later replace.
std::string read_asset(const fs::path& root,const fs::path& relative) {
    fs::path path=root;
    for(const auto& component:relative) {
        path/=component;
#ifdef _WIN32
        auto attr=GetFileAttributesW(path.c_str());
        if(attr==INVALID_FILE_ATTRIBUTES || (attr&FILE_ATTRIBUTE_REPARSE_POINT))return {};
#else
        std::error_code ec;
        if(fs::is_symlink(fs::symlink_status(path,ec)) || ec)return {};
#endif
    }
    std::error_code ec;
    if(!fs::is_regular_file(path,ec))return {};
    auto n=fs::file_size(path,ec);
    if(ec || !n || n>64*1024)return {};
    std::ifstream f(path,std::ios::binary);
    std::string bytes(static_cast<size_t>(n),'\0');
    if(!f.read(bytes.data(),static_cast<std::streamsize>(n)) || f.peek()!=std::char_traits<char>::eof())return {};
    return bytes;
}
bool attribute_is(const XmlNode& n,const char *key,const char *value) {
    const std::string *found=nullptr;
    for(const auto& pair:n.attrs)if(lower(pair.first)==key) {
        if(found)return false;
        found=&pair.second;
    }
    return found && lower(*found)==value;
}
bool needs_gladiator(const std::string& mission) {
    if(mission.empty())return false;
    auto roots=parse_xmlb(mission.data(),static_cast<unsigned>(mission.size()));
    if(roots.size()!=1 || lower(roots.front().name)!="mission" ||
       !attribute_is(roots.front(),"mapload","astral/savepx/final_astral"))return false;
    bool found=false;
    for(const auto& child:roots.front().children)if(lower(child.name)=="requiredhero") {
        if(found || !attribute_is(child,"name","profxgladiator"))return false;
        found=true;
    }
    return found;
}
}

BinaryXml shadow_king_roster_fix(const fs::path& root,const std::string& language) {
    if(language.size()!=3 || language.find_first_not_of("abcdefghijklmnopqrstuvwxyz")!=language.npos)return {};
    try {
        const auto active=read_asset(root,shadow_king_roster);
        if(active.empty())return {};
        auto roots=parse_xmlb(active.data(),static_cast<unsigned>(active.size()));
        if(roots.size()!=1 || lower(roots.front().name)!="characters" ||
           !roots.front().attrs.empty() || roots.front().children.size()!=3)return {};

        // Issue #36's corrected list contains the three Shadow King actors
        // and the mission's required hero. Do not guess at other rosters.
        auto& rows=roots.front().children;
        std::set<std::string> wanted={"shadowkingtwo","shadowking","shadesking"};
        for(const auto& row:rows) {
            if(lower(row.name)!="character" || !row.children.empty() || row.attrs.size()!=1 ||
               lower(row.attrs.front().first)!="name" || !wanted.erase(lower(row.attrs.front().second)))return {};
        }
        if(!needs_gladiator(read_asset(root,"data/missions/astral_sk."+language+"b")))return {};

        // A separately supplied CHRB wins, even if it happens to be another
        // encoding of this roster. Only migrate our own generated counterpart.
        auto source_path=fs::path(shadow_king_roster).replace_extension(".chr");
        const auto source=read_asset(root,source_path);
        if(source.empty() || compile_xmlb(source)!=BinaryXml(active.begin(),active.end()))return {};

        rows.push_back({rows.front().name,{{rows.front().attrs.front().first,"profxgladiator"}},{}});
        return compile_xmlb(write_xml_nodes(roots));
    } catch(const std::runtime_error&) {
        // Invalid/custom XML(B) is not a match. Leave it to the normal
        // loader/installer diagnostics rather than changing unknown content.
        return {};
    }
}
}
