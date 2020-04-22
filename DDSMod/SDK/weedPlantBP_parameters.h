#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function weedPlantBP.weedPlantBP_C.generateDrugIcon
struct AweedPlantBP_C_generateDrugIcon_Params
{
	int                                                Quan;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EdrugForm>                             Form;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  IconOut;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function weedPlantBP.weedPlantBP_C.calculateHarvest
struct AweedPlantBP_C_calculateHarvest_Params
{
};

// Function weedPlantBP.weedPlantBP_C.getPlantOptions
struct AweedPlantBP_C_getPlantOptions_Params
{
	TArray<struct FText>                               Names;                                                    // (Parm, OutParm, ZeroConstructor)
	TArray<struct FString>                             functions;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function weedPlantBP.weedPlantBP_C.useWater
struct AweedPlantBP_C_useWater_Params
{
	float                                              waterToUse;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weedPlantBP.weedPlantBP_C.UserConstructionScript
struct AweedPlantBP_C_UserConstructionScript_Params
{
};

// Function weedPlantBP.weedPlantBP_C.ReceiveBeginPlay
struct AweedPlantBP_C_ReceiveBeginPlay_Params
{
};

// Function weedPlantBP.weedPlantBP_C.ReceiveTick
struct AweedPlantBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weedPlantBP.weedPlantBP_C.updateGrowth
struct AweedPlantBP_C_updateGrowth_Params
{
};

// Function weedPlantBP.weedPlantBP_C.harvestPlant
struct AweedPlantBP_C_harvestPlant_Params
{
};

// Function weedPlantBP.weedPlantBP_C.activateMe
struct AweedPlantBP_C_activateMe_Params
{
};

// Function weedPlantBP.weedPlantBP_C.hydratePlant
struct AweedPlantBP_C_hydratePlant_Params
{
};

// Function weedPlantBP.weedPlantBP_C.fertilisePlant
struct AweedPlantBP_C_fertilisePlant_Params
{
};

// Function weedPlantBP.weedPlantBP_C.removePlant
struct AweedPlantBP_C_removePlant_Params
{
};

// Function weedPlantBP.weedPlantBP_C.showDetails
struct AweedPlantBP_C_showDetails_Params
{
};

// Function weedPlantBP.weedPlantBP_C.hideDetails
struct AweedPlantBP_C_hideDetails_Params
{
};

// Function weedPlantBP.weedPlantBP_C.PlantDied
struct AweedPlantBP_C_PlantDied_Params
{
};

// Function weedPlantBP.weedPlantBP_C.forceLastUpdate
struct AweedPlantBP_C_forceLastUpdate_Params
{
};

// Function weedPlantBP.weedPlantBP_C.ExecuteUbergraph_weedPlantBP
struct AweedPlantBP_C_ExecuteUbergraph_weedPlantBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
