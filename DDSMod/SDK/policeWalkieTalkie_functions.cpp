
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

// Function policeWalkieTalkie.policeWalkieTalkie_C.checkDisplayWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Display                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ApoliceWalkieTalkie_C::checkDisplayWidget(class AplayerCharacterBP_C* playerRef, bool* Display)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeWalkieTalkie.policeWalkieTalkie_C.checkDisplayWidget");

	ApoliceWalkieTalkie_C_checkDisplayWidget_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Display != nullptr)
		*Display = params.Display;
}


// Function policeWalkieTalkie.policeWalkieTalkie_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApoliceWalkieTalkie_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeWalkieTalkie.policeWalkieTalkie_C.UserConstructionScript");

	ApoliceWalkieTalkie_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeWalkieTalkie.policeWalkieTalkie_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ApoliceWalkieTalkie_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeWalkieTalkie.policeWalkieTalkie_C.ReceiveBeginPlay");

	ApoliceWalkieTalkie_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeWalkieTalkie.policeWalkieTalkie_C.playRadio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApoliceWalkieTalkie_C::playRadio(class USoundBase* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeWalkieTalkie.policeWalkieTalkie_C.playRadio");

	ApoliceWalkieTalkie_C_playRadio_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeWalkieTalkie.policeWalkieTalkie_C.checkReasonToLive
// (BlueprintCallable, BlueprintEvent)

void ApoliceWalkieTalkie_C::checkReasonToLive()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeWalkieTalkie.policeWalkieTalkie_C.checkReasonToLive");

	ApoliceWalkieTalkie_C_checkReasonToLive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeWalkieTalkie.policeWalkieTalkie_C.checkPlayerMoving
// (BlueprintCallable, BlueprintEvent)

void ApoliceWalkieTalkie_C::checkPlayerMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeWalkieTalkie.policeWalkieTalkie_C.checkPlayerMoving");

	ApoliceWalkieTalkie_C_checkPlayerMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeWalkieTalkie.policeWalkieTalkie_C.ExecuteUbergraph_policeWalkieTalkie
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApoliceWalkieTalkie_C::ExecuteUbergraph_policeWalkieTalkie(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeWalkieTalkie.policeWalkieTalkie_C.ExecuteUbergraph_policeWalkieTalkie");

	ApoliceWalkieTalkie_C_ExecuteUbergraph_policeWalkieTalkie_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
