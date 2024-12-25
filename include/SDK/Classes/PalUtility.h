#pragma once

#include <Unreal/UObject.hpp>

namespace RC::Unreal {
    class UScriptStruct;
}

namespace Palworld {
    class UPalUtility : public RC::Unreal::UObject {
    public:
        static auto GetDefault() -> UPalUtility*;

        static auto GetOptionSubsystem(RC::Unreal::UObject* WorldContextObject) -> RC::Unreal::UObject*;
    private:
        static inline UPalUtility* Self = nullptr;
    };
}
