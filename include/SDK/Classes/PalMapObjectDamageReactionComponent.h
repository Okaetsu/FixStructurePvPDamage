#pragma once

#include <UObject.hpp>

namespace Palworld {
    class UPalMapObjectDamageReactionComponent : public RC::Unreal::UObject {
    public:
        typedef bool(__thiscall* TYPE_CanProcessDamage)(UPalMapObjectDamageReactionComponent*, uint8_t*);
        static inline TYPE_CanProcessDamage CanProcessDamage_Internal;
    };
}
