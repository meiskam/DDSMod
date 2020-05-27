#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function saleAreaManager.saleAreaManager_C.onLoadScripts
struct AsaleAreaManager_C_onLoadScripts_Params
{
};

// Function saleAreaManager.saleAreaManager_C.adaptDifficulty
struct AsaleAreaManager_C_adaptDifficulty_Params
{
};

// Function saleAreaManager.saleAreaManager_C.checkSectorBAreas
struct AsaleAreaManager_C_checkSectorBAreas_Params
{
	bool                                               _3Unlocked;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function saleAreaManager.saleAreaManager_C.checkAreaRespect
struct AsaleAreaManager_C_checkAreaRespect_Params
{
	bool                                               LowRespect;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function saleAreaManager.saleAreaManager_C.displayExposure
struct AsaleAreaManager_C_displayExposure_Params
{
};

// Function saleAreaManager.saleAreaManager_C.returnAvailableAreas
struct AsaleAreaManager_C_returnAvailableAreas_Params
{
	TArray<struct FString>                             AreaList;                                                 // (Parm, OutParm, ZeroConstructor)
	int                                                NumAreas;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AreaClientsMax;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function saleAreaManager.saleAreaManager_C.addAreaExposure
struct AsaleAreaManager_C_addAreaExposure_Params
{
	struct FString                                     stringnam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function saleAreaManager.saleAreaManager_C.dropExposure
struct AsaleAreaManager_C_dropExposure_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function saleAreaManager.saleAreaManager_C.UserConstructionScript
struct AsaleAreaManager_C_UserConstructionScript_Params
{
};

// Function saleAreaManager.saleAreaManager_C.ReceiveBeginPlay
struct AsaleAreaManager_C_ReceiveBeginPlay_Params
{
};

// Function saleAreaManager.saleAreaManager_C.ReceiveTick
struct AsaleAreaManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function saleAreaManager.saleAreaManager_C.updateExpoStatus
struct AsaleAreaManager_C_updateExpoStatus_Params
{
};

// Function saleAreaManager.saleAreaManager_C.newAreaUnlocked
struct AsaleAreaManager_C_newAreaUnlocked_Params
{
};

// Function saleAreaManager.saleAreaManager_C.checkAreaStatuses
struct AsaleAreaManager_C_checkAreaStatuses_Params
{
};

// Function saleAreaManager.saleAreaManager_C.checkAreaAvailability
struct AsaleAreaManager_C_checkAreaAvailability_Params
{
};

// Function saleAreaManager.saleAreaManager_C.ExecuteUbergraph_saleAreaManager
struct AsaleAreaManager_C_ExecuteUbergraph_saleAreaManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
