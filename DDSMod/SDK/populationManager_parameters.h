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

// Function populationManager.populationManager_C.chooseNpcClass
struct ApopulationManager_C_chooseNpcClass_Params
{
	class UClass*                                      Class;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function populationManager.populationManager_C.UserConstructionScript
struct ApopulationManager_C_UserConstructionScript_Params
{
};

// Function populationManager.populationManager_C.ReceiveBeginPlay
struct ApopulationManager_C_ReceiveBeginPlay_Params
{
};

// Function populationManager.populationManager_C.refreshCitizenStatus
struct ApopulationManager_C_refreshCitizenStatus_Params
{
};

// Function populationManager.populationManager_C.personGotHome
struct ApopulationManager_C_personGotHome_Params
{
	class AbaseNPC_C*                                  Person;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function populationManager.populationManager_C.burstMothafuckers
struct ApopulationManager_C_burstMothafuckers_Params
{
};

// Function populationManager.populationManager_C.populationTimeLapse
struct ApopulationManager_C_populationTimeLapse_Params
{
	float                                              endHour;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function populationManager.populationManager_C.ExecuteUbergraph_populationManager
struct ApopulationManager_C_ExecuteUbergraph_populationManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
