#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function garageDoorBase.garageDoorBase_C.getGarageOptions
struct AgarageDoorBase_C_getGarageOptions_Params
{
	TArray<struct FText>                               ReturnNames;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<struct FString>                             Actions;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function garageDoorBase.garageDoorBase_C.UserConstructionScript
struct AgarageDoorBase_C_UserConstructionScript_Params
{
};

// Function garageDoorBase.garageDoorBase_C.openClose__FinishedFunc
struct AgarageDoorBase_C_openClose__FinishedFunc_Params
{
};

// Function garageDoorBase.garageDoorBase_C.openClose__UpdateFunc
struct AgarageDoorBase_C_openClose__UpdateFunc_Params
{
};

// Function garageDoorBase.garageDoorBase_C.ReceiveBeginPlay
struct AgarageDoorBase_C_ReceiveBeginPlay_Params
{
};

// Function garageDoorBase.garageDoorBase_C.toggleGarageDoor
struct AgarageDoorBase_C_toggleGarageDoor_Params
{
};

// Function garageDoorBase.garageDoorBase_C.executeGarageOption
struct AgarageDoorBase_C_executeGarageOption_Params
{
	struct FString                                     optionString;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function garageDoorBase.garageDoorBase_C.ExecuteUbergraph_garageDoorBase
struct AgarageDoorBase_C_ExecuteUbergraph_garageDoorBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
