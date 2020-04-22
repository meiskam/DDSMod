
#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.selectFillBottle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChosenBottleQuantity           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AinteractiveWaterSinkBP_C::selectFillBottle(int* ChosenBottleQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.selectFillBottle");

	AinteractiveWaterSinkBP_C_selectFillBottle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChosenBottleQuantity != nullptr)
		*ChosenBottleQuantity = params.ChosenBottleQuantity;
}


// Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.fillOneBottle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AinteractiveWaterSinkBP_C::fillOneBottle()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.fillOneBottle");

	AinteractiveWaterSinkBP_C_fillOneBottle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AinteractiveWaterSinkBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.UserConstructionScript");

	AinteractiveWaterSinkBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AinteractiveWaterSinkBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.ReceiveTick");

	AinteractiveWaterSinkBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.sinkActionHeld
// (BlueprintCallable, BlueprintEvent)

void AinteractiveWaterSinkBP_C::sinkActionHeld()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.sinkActionHeld");

	AinteractiveWaterSinkBP_C_sinkActionHeld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.sinkActionRelease
// (BlueprintCallable, BlueprintEvent)

void AinteractiveWaterSinkBP_C::sinkActionRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.sinkActionRelease");

	AinteractiveWaterSinkBP_C_sinkActionRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.showWaterFillDialogue
// (BlueprintCallable, BlueprintEvent)

void AinteractiveWaterSinkBP_C::showWaterFillDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.showWaterFillDialogue");

	AinteractiveWaterSinkBP_C_showWaterFillDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.hideWaterFillDialogue
// (BlueprintCallable, BlueprintEvent)

void AinteractiveWaterSinkBP_C::hideWaterFillDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.hideWaterFillDialogue");

	AinteractiveWaterSinkBP_C_hideWaterFillDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.ExecuteUbergraph_interactiveWaterSinkBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AinteractiveWaterSinkBP_C::ExecuteUbergraph_interactiveWaterSinkBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.ExecuteUbergraph_interactiveWaterSinkBP");

	AinteractiveWaterSinkBP_C_ExecuteUbergraph_interactiveWaterSinkBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
