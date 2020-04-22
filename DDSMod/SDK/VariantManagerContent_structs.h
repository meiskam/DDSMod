#pragma once

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8_t
{
	EPropertyValueCategory__Generic = 0,
	EPropertyValueCategory__RelativeLocation = 1,
	EPropertyValueCategory__RelativeRotation = 2,
	EPropertyValueCategory__RelativeScale3D = 3,
	EPropertyValueCategory__bVisible = 4,
	EPropertyValueCategory__Material = 5,
	EPropertyValueCategory__EPropertyValueCategory_MAX = 6
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
