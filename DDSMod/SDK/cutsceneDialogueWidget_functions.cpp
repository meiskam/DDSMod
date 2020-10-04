
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

// Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Speaker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OptionA                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   OptionB                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 functionOptionA                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 FunctionOptionB                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UcutsceneDialogueWidget_C::setup(class AActor* Speaker, const struct FText& OptionA, const struct FText& OptionB, const struct FString& functionOptionA, const struct FString& FunctionOptionB)
{
	static auto fn = UObject::FindObject<UFunction>("Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.setup");

	UcutsceneDialogueWidget_C_setup_Params params;
	params.Speaker = Speaker;
	params.OptionA = OptionA;
	params.OptionB = OptionB;
	params.functionOptionA = functionOptionA;
	params.FunctionOptionB = FunctionOptionB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.ActivateA
// (BlueprintCallable, BlueprintEvent)

void UcutsceneDialogueWidget_C::ActivateA()
{
	static auto fn = UObject::FindObject<UFunction>("Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.ActivateA");

	UcutsceneDialogueWidget_C_ActivateA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.ActivateB
// (BlueprintCallable, BlueprintEvent)

void UcutsceneDialogueWidget_C::ActivateB()
{
	static auto fn = UObject::FindObject<UFunction>("Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.ActivateB");

	UcutsceneDialogueWidget_C_ActivateB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.killWidget
// (BlueprintCallable, BlueprintEvent)

void UcutsceneDialogueWidget_C::killWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.killWidget");

	UcutsceneDialogueWidget_C_killWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.ExecuteUbergraph_cutsceneDialogueWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcutsceneDialogueWidget_C::ExecuteUbergraph_cutsceneDialogueWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.ExecuteUbergraph_cutsceneDialogueWidget");

	UcutsceneDialogueWidget_C_ExecuteUbergraph_cutsceneDialogueWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
