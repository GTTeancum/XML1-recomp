#include "game/xml1/costume_catalog.h"
#include "engine/resources/xmlb.h"
#include <array>
#include <filesystem>
#include <fstream>
#include <stdexcept>
#include <string>

extern "C" void fixture_guest_outfits(void);

namespace fs=std::filesystem;
static void check(bool test,const char* message) {
    if (!test) throw std::runtime_error(message);
}
static void write(const fs::path& p,const xml1::BinaryXml& data) {
    fs::create_directories(p.parent_path());
    std::ofstream f(p,std::ios::binary);
    f.write(reinterpret_cast<const char*>(data.data()),data.size());
    check(bool(f),"write fixture");
}
static xml1::BinaryXml fixture_igb() {
    // Synthetic framing fixture for the XML1 Alchemy v6 header layout.
    xml1::BinaryXml b(112);
    auto word=[&](unsigned pos,unsigned value) {
        for (unsigned i=0;i<4;++i) b[pos+i]=static_cast<unsigned char>(value>>(i*8));
    };
    word(0,8);word(4,1);word(8,24);word(12,1);word(16,8);
    word(32,12);word(36,1);word(40,0xfada);word(44,6);
    word(60,4);word(96,8);
    return b;
}
int main(int argc,char** argv) {
    check(argc==2,"pass a new scratch directory");
    const auto root=fs::u8path(argv[1]);
    check(!fs::exists(root),"scratch directory already exists");
    struct Cleanup {fs::path path;~Cleanup(){std::error_code e;fs::remove_all(path,e);}} cleanup{root};
    const auto herostat=xml1::compile_xmlb(
        R"(<characters><stats name="Hero" playable="true" skin="0503" skin_ultimate="05" skin_aoa="09" skin_90s="28" skin_default="03" skin_astonishing="05"/><stats name="NPC" playable="false" skin="0601"/></characters>)");
    const auto installed=fixture_igb();
    write(root/"data/herostat.engb",herostat);
    auto pkg=[&](unsigned id,const char* suffix) {
        const std::string skin="05"+(id<10?std::string("0"):std::string())+std::to_string(id);
        return root/"packages/generated/characters"/("hero_"+skin+suffix+".pkgb");
    };
    auto install=[&](unsigned id) {
        const std::string skin="05"+(id<10?std::string("0"):std::string())+std::to_string(id);
        const auto package=xml1::compile_xmlb("<packagedef><actorskin filename=\""+skin+"\"/></packagedef>");
        write(root/"actors"/(skin+".igb"),installed);
        write(pkg(id,""),package);
        write(pkg(id,"_nc"),package);
    };
    auto boot=[&]() {
        char error[256]{};
        if (!xml1_costumes_init(root.u8string().c_str(),"eng",error,sizeof(error)))
            throw std::runtime_error(error);
    };
    install(3);install(5);install(9);install(28);
    fs::remove(pkg(9,"_nc"));
    auto truncated=installed;truncated.resize(110);
    write(root/"actors/0528.igb",truncated);
    boot();
    check(xml1_costumes_active(),"boot scanned roster");
    check(xml1_costume_next("HERO",5,3)==5,"registered installed outfit visible");
    check(xml1_costume_next("Hero",5,5)==3,"missing/corrupt and duplicate entries skipped");
    check(xml1_costume_fallback("Hero",5,9)==3,"missing saved outfit falls back to authored default");
    check(xml1_costume_fallback("Hero",5,28)==3,"truncated outfit falls back");
    check(xml1_costume_fallback("Hero",5,5)==5,"valid save choice retained");
    check(xml1_costume_fallback("Hero",5,250)==3,"unregistered or out-of-range choice rejected");
    check(xml1_costume_fallback("NPC",6,24)==0,"NPC routing not touched");
    check(xml1_costume_fallback("Hero",6,24)==0,"different family not redirected");
    fixture_guest_outfits();
    install(9);install(28);install(99);
    check(xml1_costume_next("Hero",5,5)==3,"outfits had not been rescanned mid-session");
    boot();
    check(xml1_costume_next("Hero",5,5)==9 && xml1_costume_next("Hero",5,9)==28 &&
          xml1_costume_next("Hero",5,28)==3,"upgrades discovered next boot, no unregistered file");
    write(pkg(5,""),{1,2,3});
    fs::remove(root/"actors/0509.igb");
    boot();
    check(xml1_costume_fallback("Hero",5,5)==3,"invalid package rejected on boot");
    check(xml1_costume_next("Hero",5,3)==28,"removed model no longer selectable");
    fs::remove(root/"actors/0503.igb");
    boot();
    check(xml1_costume_fallback("Hero",5,3)==28,"when default is invalid, use an installed alternative");
    fs::remove(root/"actors/0528.igb");
    char error[256]{};
    check(!xml1_costumes_init(root.u8string().c_str(),"eng",error,sizeof(error)) &&
          !xml1_costumes_active(),"no broken outfit is advertised when no safe fallback exists");
}
