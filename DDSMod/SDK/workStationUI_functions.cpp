
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

// Function workStationUI.workStationUI_C.getSubstanceName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AworkStationEquipmentBase_C* Eq                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (Parm, OutParm)

void UworkStationUI_C::getSubstanceName(class AworkStationEquipmentBase_C* Eq, struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.getSubstanceName");

	UworkStationUI_C_getSubstanceName_Params params;
	params.Eq = Eq;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function workStationUI.workStationUI_C.calcPrecisionText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AworkStationEquipmentBase_C* EquipmentRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UworkStationUI_C::calcPrecisionText(class AworkStationEquipmentBase_C* EquipmentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.calcPrecisionText");

	UworkStationUI_C_calcPrecisionText_Params params;
	params.EquipmentRef = EquipmentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationUI.workStationUI_C.scrollEqUp
// (Public, BlueprintCallable, BlueprintEvent)

void UworkStationUI_C::scrollEqUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.scrollEqUp");

	UworkStationUI_C_scrollEqUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationUI.workStationUI_C.scrollEqDown
// (Public, BlueprintCallable, BlueprintEvent)

void UworkStationUI_C::scrollEqDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.scrollEqDown");

	UworkStationUI_C_scrollEqDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationUI.workStationUI_C.renderEquipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UworkStationUI_C::renderEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.renderEquipment");

	UworkStationUI_C_renderEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationUI.workStationUI_C.scrollDrugsUp
// (Public, BlueprintCallable, BlueprintEvent)

void UworkStationUI_C::scrollDrugsUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.scrollDrugsUp");

	UworkStationUI_C_scrollDrugsUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationUI.workStationUI_C.scrollDrugsDown
// (Public, BlueprintCallable, BlueprintEvent)

void UworkStationUI_C::scrollDrugsDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.scrollDrugsDown");

	UworkStationUI_C_scrollDrugsDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationUI.workStationUI_C.renderInventoryDrugs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UworkStationUI_C::renderInventoryDrugs()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.renderInventoryDrugs");

	UworkStationUI_C_renderInventoryDrugs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationUI.workStationUI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UworkStationUI_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.PreConstruct");

	UworkStationUI_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationUI.workStationUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UworkStationUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.Construct");

	UworkStationUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationUI.workStationUI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UworkStationUI_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.Tick");

	UworkStationUI_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationUI.workStationUI_C.reInitialise
// (BlueprintCallable, BlueprintEvent)

void UworkStationUI_C::reInitialise()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.reInitialise");

	UworkStationUI_C_reInitialise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationUI.workStationUI_C.popRing
// (BlueprintCallable, BlueprintEvent)

void UworkStationUI_C::popRing()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.popRing");

	UworkStationUI_C_popRing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationUI.workStationUI_C.ManualToggle
// (BlueprintCallable, BlueprintEvent)

void UworkStationUI_C::ManualToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.ManualToggle");

	UworkStationUI_C_ManualToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationUI.workStationUI_C.BndEvt__btnCloseManual_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UworkStationUI_C::BndEvt__btnCloseManual_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.BndEvt__btnCloseManual_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UworkStationUI_C_BndEvt__btnCloseManual_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationUI.workStationUI_C.BndEvt__btnManEquipment_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UworkStationUI_C::BndEvt__btnManEquipment_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.BndEvt__btnManEquipment_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UworkStationUI_C_BndEvt__btnManEquipment_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationUI.workStationUI_C.BndEvt__btnManModes_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UworkStationUI_C::BndEvt__btnManModes_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.BndEvt__btnManModes_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UworkStationUI_C_BndEvt__btnManModes_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationUI.workStationUI_C.BndEvt__btnManFunctions_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UworkStationUI_C::BndEvt__btnManFunctions_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.BndEvt__btnManFunctions_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UworkStationUI_C_BndEvt__btnManFunctions_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationUI.workStationUI_C.BndEvt__btnManChemistry_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UworkStationUI_C::BndEvt__btnManChemistry_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.BndEvt__btnManChemistry_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UworkStationUI_C_BndEvt__btnManChemistry_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationUI.workStationUI_C.ExecuteUbergraph_workStationUI
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UworkStationUI_C::ExecuteUbergraph_workStationUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationUI.workStationUI_C.ExecuteUbergraph_workStationUI");

	UworkStationUI_C_ExecuteUbergraph_workStationUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
