#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BTService_Bird_DisableAvoidance_NearPerch.BTService_Bird_DisableAvoidance_NearPerch_C.ReceiveTickAI
struct UBTService_Bird_DisableAvoidance_NearPerch_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTService_Bird_DisableAvoidance_NearPerch.BTService_Bird_DisableAvoidance_NearPerch_C.ExecuteUbergraph_BTService_Bird_DisableAvoidance_NearPerch
struct UBTService_Bird_DisableAvoidance_NearPerch_C_ExecuteUbergraph_BTService_Bird_DisableAvoidance_NearPerch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
