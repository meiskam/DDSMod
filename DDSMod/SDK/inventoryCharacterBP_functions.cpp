
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

// Function inventoryCharacterBP.inventoryCharacterBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AinventoryCharacterBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryCharacterBP.inventoryCharacterBP_C.UserConstructionScript");

	AinventoryCharacterBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryCharacterBP.inventoryCharacterBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AinventoryCharacterBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryCharacterBP.inventoryCharacterBP_C.ReceiveBeginPlay");

	AinventoryCharacterBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryCharacterBP.inventoryCharacterBP_C.testTime
// (BlueprintCallable, BlueprintEvent)

void AinventoryCharacterBP_C::testTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryCharacterBP.inventoryCharacterBP_C.testTime");

	AinventoryCharacterBP_C_testTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryCharacterBP.inventoryCharacterBP_C.toggleCharacterEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AinventoryCharacterBP_C::toggleCharacterEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryCharacterBP.inventoryCharacterBP_C.toggleCharacterEnabled");

	AinventoryCharacterBP_C_toggleCharacterEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryCharacterBP.inventoryCharacterBP_C.ExecuteUbergraph_inventoryCharacterBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AinventoryCharacterBP_C::ExecuteUbergraph_inventoryCharacterBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryCharacterBP.inventoryCharacterBP_C.ExecuteUbergraph_inventoryCharacterBP");

	AinventoryCharacterBP_C_ExecuteUbergraph_inventoryCharacterBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
