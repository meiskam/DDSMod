#pragma once

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct inventoryItemStruct.inventoryItemStruct
// 0x0108
struct FinventoryItemStruct
{
	struct FText                                       Name_2_DE72969C475DA33FA2F65892697C784C;                  // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Desc_15_C67A089C4E33FD18F2A111BA47FD6ACE;                 // 0x0018(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  icon_12_A68CA86446F5D56467E879BBDDF79CD6;                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Size_6_4944B52D4D792BAD9BB279A37D23B78A;                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Wieght_8_4A5B2F4A44DC71DC37992A9C578CEACC;                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass_19_92D5E7B44B81759034AE35B07C0EC14A;           // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<EitemCategories>                       Category_23_0F75A19C496A045546393F8BBCFE4526;             // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               canStack_25_6E7A78DA43FCB6665D916FA42A34E301;             // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	int                                                quantity_28_03E582D645680161A02BA0940CD2DFCA;             // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                gramsPerItem_41_2D06C0444B174D68EEA26ABA1D1150E5;         // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FdrugData                                   drugData_44_1C3318D649872F1B32D87B862C858C98;             // 0x0058(0x00B0) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
