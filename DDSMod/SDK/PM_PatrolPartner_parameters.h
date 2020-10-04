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

// Function PM_PatrolPartner.PM_PatrolPartner_C.UserConstructionScript
struct APM_PatrolPartner_C_UserConstructionScript_Params
{
};

// Function PM_PatrolPartner.PM_PatrolPartner_C.ReceiveBeginPlay
struct APM_PatrolPartner_C_ReceiveBeginPlay_Params
{
};

// Function PM_PatrolPartner.PM_PatrolPartner_C.SetupPartner
struct APM_PatrolPartner_C_SetupPartner_Params
{
	class APM_PatrolLead_C*                            LeadRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PM_PatrolPartner.PM_PatrolPartner_C.EngageSuspect
struct APM_PatrolPartner_C_EngageSuspect_Params
{
};

// Function PM_PatrolPartner.PM_PatrolPartner_C.SyncWithPartner
struct APM_PatrolPartner_C_SyncWithPartner_Params
{
};

// Function PM_PatrolPartner.PM_PatrolPartner_C.ExecuteUbergraph_PM_PatrolPartner
struct APM_PatrolPartner_C_ExecuteUbergraph_PM_PatrolPartner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
