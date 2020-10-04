
#include "SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function keijiDeadDrop.keijiDeadDrop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AkeijiDeadDrop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiDeadDrop.keijiDeadDrop_C.UserConstructionScript");

	AkeijiDeadDrop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiDeadDrop.keijiDeadDrop_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AkeijiDeadDrop_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiDeadDrop.keijiDeadDrop_C.ReceiveBeginPlay");

	AkeijiDeadDrop_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiDeadDrop.keijiDeadDrop_C.ExecuteUbergraph_keijiDeadDrop
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AkeijiDeadDrop_C::ExecuteUbergraph_keijiDeadDrop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiDeadDrop.keijiDeadDrop_C.ExecuteUbergraph_keijiDeadDrop");

	AkeijiDeadDrop_C_ExecuteUbergraph_keijiDeadDrop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
