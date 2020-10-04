
#include "SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function furnitureDoorFixer.furnitureDoorFixer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AfurnitureDoorFixer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function furnitureDoorFixer.furnitureDoorFixer_C.UserConstructionScript");

	AfurnitureDoorFixer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function furnitureDoorFixer.furnitureDoorFixer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AfurnitureDoorFixer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function furnitureDoorFixer.furnitureDoorFixer_C.ReceiveBeginPlay");

	AfurnitureDoorFixer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function furnitureDoorFixer.furnitureDoorFixer_C.testDoorOpen
// (BlueprintCallable, BlueprintEvent)

void AfurnitureDoorFixer_C::testDoorOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function furnitureDoorFixer.furnitureDoorFixer_C.testDoorOpen");

	AfurnitureDoorFixer_C_testDoorOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function furnitureDoorFixer.furnitureDoorFixer_C.ExecuteUbergraph_furnitureDoorFixer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AfurnitureDoorFixer_C::ExecuteUbergraph_furnitureDoorFixer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function furnitureDoorFixer.furnitureDoorFixer_C.ExecuteUbergraph_furnitureDoorFixer");

	AfurnitureDoorFixer_C_ExecuteUbergraph_furnitureDoorFixer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
