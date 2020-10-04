
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

// Function keijiMoneyDialogueInstance.keijiMoneyDialogueInstance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AkeijiMoneyDialogueInstance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiMoneyDialogueInstance.keijiMoneyDialogueInstance_C.UserConstructionScript");

	AkeijiMoneyDialogueInstance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiMoneyDialogueInstance.keijiMoneyDialogueInstance_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AkeijiMoneyDialogueInstance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiMoneyDialogueInstance.keijiMoneyDialogueInstance_C.ReceiveBeginPlay");

	AkeijiMoneyDialogueInstance_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiMoneyDialogueInstance.keijiMoneyDialogueInstance_C.ExecuteUbergraph_keijiMoneyDialogueInstance
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AkeijiMoneyDialogueInstance_C::ExecuteUbergraph_keijiMoneyDialogueInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiMoneyDialogueInstance.keijiMoneyDialogueInstance_C.ExecuteUbergraph_keijiMoneyDialogueInstance");

	AkeijiMoneyDialogueInstance_C_ExecuteUbergraph_keijiMoneyDialogueInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
