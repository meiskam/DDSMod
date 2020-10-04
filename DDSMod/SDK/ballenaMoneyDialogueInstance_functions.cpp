
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

// Function ballenaMoneyDialogueInstance.ballenaMoneyDialogueInstance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AballenaMoneyDialogueInstance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ballenaMoneyDialogueInstance.ballenaMoneyDialogueInstance_C.UserConstructionScript");

	AballenaMoneyDialogueInstance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ballenaMoneyDialogueInstance.ballenaMoneyDialogueInstance_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AballenaMoneyDialogueInstance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ballenaMoneyDialogueInstance.ballenaMoneyDialogueInstance_C.ReceiveBeginPlay");

	AballenaMoneyDialogueInstance_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ballenaMoneyDialogueInstance.ballenaMoneyDialogueInstance_C.ExecuteUbergraph_ballenaMoneyDialogueInstance
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AballenaMoneyDialogueInstance_C::ExecuteUbergraph_ballenaMoneyDialogueInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ballenaMoneyDialogueInstance.ballenaMoneyDialogueInstance_C.ExecuteUbergraph_ballenaMoneyDialogueInstance");

	AballenaMoneyDialogueInstance_C_ExecuteUbergraph_ballenaMoneyDialogueInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
