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

// Function ballenaClubManager.ballenaClubManager_C.UserConstructionScript
struct AballenaClubManager_C_UserConstructionScript_Params
{
};

// Function ballenaClubManager.ballenaClubManager_C.openClub
struct AballenaClubManager_C_openClub_Params
{
	bool                                               allowEnter;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ballenaClubManager.ballenaClubManager_C.closeClub
struct AballenaClubManager_C_closeClub_Params
{
};

// Function ballenaClubManager.ballenaClubManager_C.ExecuteUbergraph_ballenaClubManager
struct AballenaClubManager_C_ExecuteUbergraph_ballenaClubManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
