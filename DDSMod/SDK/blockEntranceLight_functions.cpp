
#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function blockEntranceLight.blockEntranceLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AblockEntranceLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function blockEntranceLight.blockEntranceLight_C.UserConstructionScript");

	AblockEntranceLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function blockEntranceLight.blockEntranceLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AblockEntranceLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function blockEntranceLight.blockEntranceLight_C.ReceiveBeginPlay");

	AblockEntranceLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function blockEntranceLight.blockEntranceLight_C.turnLightOn
// (BlueprintCallable, BlueprintEvent)

void AblockEntranceLight_C::turnLightOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function blockEntranceLight.blockEntranceLight_C.turnLightOn");

	AblockEntranceLight_C_turnLightOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function blockEntranceLight.blockEntranceLight_C.turnLightOff
// (BlueprintCallable, BlueprintEvent)

void AblockEntranceLight_C::turnLightOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function blockEntranceLight.blockEntranceLight_C.turnLightOff");

	AblockEntranceLight_C_turnLightOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function blockEntranceLight.blockEntranceLight_C.testDistance
// (BlueprintCallable, BlueprintEvent)

void AblockEntranceLight_C::testDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function blockEntranceLight.blockEntranceLight_C.testDistance");

	AblockEntranceLight_C_testDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function blockEntranceLight.blockEntranceLight_C.ExecuteUbergraph_blockEntranceLight
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AblockEntranceLight_C::ExecuteUbergraph_blockEntranceLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function blockEntranceLight.blockEntranceLight_C.ExecuteUbergraph_blockEntranceLight");

	AblockEntranceLight_C_ExecuteUbergraph_blockEntranceLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
