#pragma once

#include <Unreal/UObject.hpp>

namespace Palworld {
	class UPalMapObjectUtility : public RC::Unreal::UObject {
	public:
		static auto GetDefault() -> UPalMapObjectUtility*;

		typedef float(__cdecl* TYPE_GetWorkSuitabilityDamageRate)(uint8_t, uint8_t, uint8_t*);
		static inline TYPE_GetWorkSuitabilityDamageRate GetWorkSuitabilityDamageRate_Internal;
	};
}