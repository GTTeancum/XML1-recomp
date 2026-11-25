#pragma once
#include "engine/resources/xmlb.h"
#include <filesystem>

namespace xml1 {
// Only the auto-compiled loose map roster is eligible. No side effects on
// stock archives, source text, another mission, or separately installed mods.
inline constexpr char shadow_king_roster[] = "maps/astral/savepx/final_astral.chrb";
BinaryXml shadow_king_roster_fix(const std::filesystem::path& root, const std::string& language);
}
