
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

// Function shopAmyGasStaion.shopAmyGasStaion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AshopAmyGasStaion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function shopAmyGasStaion.shopAmyGasStaion_C.UserConstructionScript");

	AshopAmyGasStaion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shopAmyGasStaion.shopAmyGasStaion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AshopAmyGasStaion_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function shopAmyGasStaion.shopAmyGasStaion_C.ReceiveBeginPlay");

	AshopAmyGasStaion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shopAmyGasStaion.shopAmyGasStaion_C.scriptResupplyEvent
// (BlueprintCallable, BlueprintEvent)

void AshopAmyGasStaion_C::scriptResupplyEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function shopAmyGasStaion.shopAmyGasStaion_C.scriptResupplyEvent");

	AshopAmyGasStaion_C_scriptResupplyEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shopAmyGasStaion.shopAmyGasStaion_C.ExecuteUbergraph_shopAmyGasStaion
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AshopAmyGasStaion_C::ExecuteUbergraph_shopAmyGasStaion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function shopAmyGasStaion.shopAmyGasStaion_C.ExecuteUbergraph_shopAmyGasStaion");

	AshopAmyGasStaion_C_ExecuteUbergraph_shopAmyGasStaion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
