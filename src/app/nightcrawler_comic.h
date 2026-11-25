#pragma once
#include <algorithm>
#include <iterator>
#include <string>
#include <stdexcept>
#include "engine/resources/xmlb.h"

namespace xml1 {
inline constexpr char nightcrawler_zone[] = "maps/nyc/fb/nyc_fb4";
inline constexpr char nightcrawler_source[] = "maps/nyc/fb/nyc_fb4.eng";
inline constexpr char nightcrawler_binary[] = "maps/nyc/fb/nyc_fb4.engb";
inline constexpr char comic_model[] = "models/pickups/pickup_comicbook";

// Only the two pickup nodes are carried over from PS2's nyc_fb4.eng.
// Compile them into the extracted Xbox world; never swap in the PS2 world,
// scripts or model. The English asset's original source remains untouched.
inline BinaryXml nightcrawler_comic_fix(const std::string& stock) {
    const auto baseline = compile_xmlb(stock);
    auto roots = parse_xmlb(baseline.data(), static_cast<unsigned>(baseline.size()));
    if (roots.size() != 1 || roots.front().name != "world") return {};
    auto& nodes = roots.front().children;
    const auto attr_is = [](const XmlNode& node, const char* key, const char* value) {
        return std::any_of(node.attrs.begin(), node.attrs.end(), [&](const auto& attr) {
            auto actual = attr.second;
            for (char& c : actual) if (c >= 'A' && c <= 'Z') c += 'a' - 'A';
            return attr.first == key && actual == value;
        });
    };
    const auto mission = std::find_if(nodes.begin(), nodes.end(), [&](const XmlNode& n) {
        return n.name == "entity" && attr_is(n, "name", "world") && attr_is(n, "mission", "sent_fb");
    });
    if (mission == nodes.end()) return {};
    for (const auto& n : nodes) {
        if (attr_is(n, "name", "comic_nightcrawler") || attr_is(n, "type", "comic_nightcrawler") ||
            std::any_of(n.children.begin(), n.children.end(), [&](const XmlNode& child) {
                return attr_is(child, "name", "comic_nightcrawler");
            })) return {}; // Already present (or partly customized); do not duplicate it.
    }
    const auto first_instance = std::find_if(nodes.begin(), nodes.end(), [](const XmlNode& n) {
        return n.name == "entinst";
    });
    if (first_instance == nodes.end()) return {};
    const auto fragment = compile_xmlb(R"pickup(
<entity name="comic_nightcrawler" classname="gameent" quickuse="true" spinpossible="false" animstarton="true" nocollide="true" model="pickups/pickup_comicbook" ignoreactorsonmove="true" team="hero" actmatchteam="true" actcountremove="1" description="Comic Book" actonuse="true" actsound="common/game/pickup_item" acteffect="pickups/item_pickup" fxlevel="1" loopfx="pickups/item_sparkle" loopfxstarton="true" gravitymod="0.8" structure="10" actscript="waittimed(0.5)\n\rimageViewer('textures/comic/night_cov.png')"/>
<entinst type="comic_nightcrawler"><inst name="comic_nightcrawler" pos="925.941 2619.81 244.444"/></entinst>
)pickup");
    const auto pickup = parse_xmlb(fragment.data(), static_cast<unsigned>(fragment.size()));
    nodes.insert(first_instance, pickup[0]);
    const auto preceding_instance = std::find_if(nodes.begin(), nodes.end(), [&](const XmlNode& n) {
        return n.name == "entinst" && attr_is(n, "type", "sp_civilianmalebusiness01");
    });
    const auto last_instance = std::find_if(nodes.rbegin(), nodes.rend(), [](const XmlNode& n) {
        return n.name == "entinst";
    });
    nodes.insert(preceding_instance == nodes.end() ? last_instance.base() : std::next(preceding_instance), pickup[1]);
    const auto fixed = compile_xmlb(write_xml_nodes(roots));
    if (compile_xmlb(decode_xmlb(fixed.data(), static_cast<unsigned>(fixed.size()))) != fixed)
        throw std::runtime_error("Nightcrawler comic XMLB round-trip failed");
    return fixed;
}
}
