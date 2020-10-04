#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function drugPickupItem.drugPickupItem_C.makeAdditiveTypeModel
struct AdrugPickupItem_C_makeAdditiveTypeModel_Params
{
	struct FdrugData                                   drugData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               BigPackage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 OutModel;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function drugPickupItem.drugPickupItem_C.makePackageTypeModel
struct AdrugPickupItem_C_makePackageTypeModel_Params
{
	struct FdrugData                                   drugData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               BigPackage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 OutModel;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function drugPickupItem.drugPickupItem_C.UserConstructionScript
struct AdrugPickupItem_C_UserConstructionScript_Params
{
};

// Function drugPickupItem.drugPickupItem_C.ReceiveBeginPlay
struct AdrugPickupItem_C_ReceiveBeginPlay_Params
{
};

// Function drugPickupItem.drugPickupItem_C.configPackage
struct AdrugPickupItem_C_configPackage_Params
{
};

// Function drugPickupItem.drugPickupItem_C.objectPickup
struct AdrugPickupItem_C_objectPickup_Params
{
};

// Function drugPickupItem.drugPickupItem_C.verifyCorrectNaming
struct AdrugPickupItem_C_verifyCorrectNaming_Params
{
};

// Function drugPickupItem.drugPickupItem_C.selectPackToggle
struct AdrugPickupItem_C_selectPackToggle_Params
{
};

// Function drugPickupItem.drugPickupItem_C.ExecuteUbergraph_drugPickupItem
struct AdrugPickupItem_C_ExecuteUbergraph_drugPickupItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
