
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

// Function additiveContainerBase.additiveContainerBase_C.changeLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           setEmpty                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   NewLabel                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AadditiveContainerBase_C::changeLabel(bool setEmpty, const struct FText& NewLabel, const struct FLinearColor& NewColor, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.changeLabel");

	AadditiveContainerBase_C_changeLabel_Params params;
	params.setEmpty = setEmpty;
	params.NewLabel = NewLabel;
	params.NewColor = NewColor;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function additiveContainerBase.additiveContainerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AadditiveContainerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.UserConstructionScript");

	AadditiveContainerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function additiveContainerBase.additiveContainerBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AadditiveContainerBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.ReceiveBeginPlay");

	AadditiveContainerBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function additiveContainerBase.additiveContainerBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AadditiveContainerBase_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.ReceiveTick");

	AadditiveContainerBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function additiveContainerBase.additiveContainerBase_C.addSubstance
// (BlueprintCallable, BlueprintEvent)

void AadditiveContainerBase_C::addSubstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.addSubstance");

	AadditiveContainerBase_C_addSubstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function additiveContainerBase.additiveContainerBase_C.setLabel
// (BlueprintCallable, BlueprintEvent)

void AadditiveContainerBase_C::setLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.setLabel");

	AadditiveContainerBase_C_setLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function additiveContainerBase.additiveContainerBase_C.showLabel
// (BlueprintCallable, BlueprintEvent)

void AadditiveContainerBase_C::showLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.showLabel");

	AadditiveContainerBase_C_showLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function additiveContainerBase.additiveContainerBase_C.hideLabel
// (BlueprintCallable, BlueprintEvent)

void AadditiveContainerBase_C::hideLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.hideLabel");

	AadditiveContainerBase_C_hideLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function additiveContainerBase.additiveContainerBase_C.customiseLabel
// (BlueprintCallable, BlueprintEvent)

void AadditiveContainerBase_C::customiseLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.customiseLabel");

	AadditiveContainerBase_C_customiseLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function additiveContainerBase.additiveContainerBase_C.tryAddSubstance
// (Public, BlueprintCallable, BlueprintEvent)

void AadditiveContainerBase_C::tryAddSubstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.tryAddSubstance");

	AadditiveContainerBase_C_tryAddSubstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function additiveContainerBase.additiveContainerBase_C.ExecuteUbergraph_additiveContainerBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AadditiveContainerBase_C::ExecuteUbergraph_additiveContainerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.ExecuteUbergraph_additiveContainerBase");

	AadditiveContainerBase_C_ExecuteUbergraph_additiveContainerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
