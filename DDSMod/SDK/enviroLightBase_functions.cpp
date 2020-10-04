
#include "SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function enviroLightBase.enviroLightBase_C.checkDayTime
// (Public, BlueprintCallable, BlueprintEvent)

void AenviroLightBase_C::checkDayTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.checkDayTime");

	AenviroLightBase_C_checkDayTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function enviroLightBase.enviroLightBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AenviroLightBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.UserConstructionScript");

	AenviroLightBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function enviroLightBase.enviroLightBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AenviroLightBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.ReceiveBeginPlay");

	AenviroLightBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function enviroLightBase.enviroLightBase_C.turnLightOn
// (BlueprintCallable, BlueprintEvent)

void AenviroLightBase_C::turnLightOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.turnLightOn");

	AenviroLightBase_C_turnLightOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function enviroLightBase.enviroLightBase_C.turnLightOff
// (BlueprintCallable, BlueprintEvent)

void AenviroLightBase_C::turnLightOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.turnLightOff");

	AenviroLightBase_C_turnLightOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function enviroLightBase.enviroLightBase_C.farPlayerCheck
// (BlueprintCallable, BlueprintEvent)

void AenviroLightBase_C::farPlayerCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.farPlayerCheck");

	AenviroLightBase_C_farPlayerCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function enviroLightBase.enviroLightBase_C.closeDistanceCheck
// (BlueprintCallable, BlueprintEvent)

void AenviroLightBase_C::closeDistanceCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.closeDistanceCheck");

	AenviroLightBase_C_closeDistanceCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function enviroLightBase.enviroLightBase_C.updateLightAffectPlayer
// (BlueprintCallable, BlueprintEvent)

void AenviroLightBase_C::updateLightAffectPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.updateLightAffectPlayer");

	AenviroLightBase_C_updateLightAffectPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function enviroLightBase.enviroLightBase_C.openOutLightRange
// (BlueprintCallable, BlueprintEvent)

void AenviroLightBase_C::openOutLightRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.openOutLightRange");

	AenviroLightBase_C_openOutLightRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function enviroLightBase.enviroLightBase_C.ExecuteUbergraph_enviroLightBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AenviroLightBase_C::ExecuteUbergraph_enviroLightBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function enviroLightBase.enviroLightBase_C.ExecuteUbergraph_enviroLightBase");

	AenviroLightBase_C_ExecuteUbergraph_enviroLightBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
