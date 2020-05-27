
#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.setPackageIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EdrugForm>         Form                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quan                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Original                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EitemCategories>   Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              OutIcon                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UworkStationSubstanceAddWidget_C::setPackageIcon(TEnumAsByte<EdrugForm> Form, int Quan, class UTexture2D* Original, TEnumAsByte<EitemCategories> Category, class UTexture2D** OutIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.setPackageIcon");

	UworkStationSubstanceAddWidget_C_setPackageIcon_Params params;
	params.Form = Form;
	params.Quan = Quan;
	params.Original = Original;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIcon != nullptr)
		*OutIcon = params.OutIcon;
}


// Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.addToEquipment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DontChangeInput                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UworkStationSubstanceAddWidget_C::addToEquipment(bool* DontChangeInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.addToEquipment");

	UworkStationSubstanceAddWidget_C_addToEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DontChangeInput != nullptr)
		*DontChangeInput = params.DontChangeInput;
}


// Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UworkStationSubstanceAddWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.Construct");

	UworkStationSubstanceAddWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AinteractiveBaseObject_C* SelectedSubstance              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AworkStationEquipmentBase_C* equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UworkStationSubstanceAddWidget_C::setup(class AinteractiveBaseObject_C* SelectedSubstance, class AworkStationEquipmentBase_C* equipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.setup");

	UworkStationSubstanceAddWidget_C_setup_Params params;
	params.SelectedSubstance = SelectedSubstance;
	params.equipment = equipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UworkStationSubstanceAddWidget_C::BndEvt__btnAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UworkStationSubstanceAddWidget_C_BndEvt__btnAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UworkStationSubstanceAddWidget_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UworkStationSubstanceAddWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.killWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DontChangeInput                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UworkStationSubstanceAddWidget_C::killWidget(bool DontChangeInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.killWidget");

	UworkStationSubstanceAddWidget_C_killWidget_Params params;
	params.DontChangeInput = DontChangeInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UworkStationSubstanceAddWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.Tick");

	UworkStationSubstanceAddWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.ExecuteUbergraph_workStationSubstanceAddWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UworkStationSubstanceAddWidget_C::ExecuteUbergraph_workStationSubstanceAddWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.ExecuteUbergraph_workStationSubstanceAddWidget");

	UworkStationSubstanceAddWidget_C_ExecuteUbergraph_workStationSubstanceAddWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
