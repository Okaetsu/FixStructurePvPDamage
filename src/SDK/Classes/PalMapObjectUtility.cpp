#include <Unreal/UObjectGlobals.hpp>
#include <SDK/Classes/PalMapObjectUtility.h>

using namespace RC;
using namespace RC::Unreal;

namespace Palworld {
	auto UPalMapObjectUtility::GetDefault() -> UPalMapObjectUtility*
	{
		static auto DefaultObj = UObjectGlobals::StaticFindObject<UPalMapObjectUtility*>(nullptr, nullptr, STR("/Script/Pal.Default__PalMapObjectUtility"));
		return DefaultObj;
	}
}