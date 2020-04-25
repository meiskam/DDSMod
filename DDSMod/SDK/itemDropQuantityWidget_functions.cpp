
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

// Function itemDropQuantityWidget.itemDropQuantityWidget_C.getMaxQuantity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TargetString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            sourceQuan                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FinventoryItemStruct    Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            MaxQuantity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UitemDropQuantityWidget_C::getMaxQuantity(const struct FString& TargetString, class UUserWidget* Widget, int sourceQuan, const struct FinventoryItemStruct& Data, int* MaxQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function itemDropQuantityWidget.itemDropQuantityWidget_C.getMaxQuantity");

	UitemDropQuantityWidget_C_getMaxQuantity_Params params;
	params.TargetString = TargetString;
	params.Widget = Widget;
	params.sourceQuan = sourceQuan;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxQuantity != nullptr)
		*MaxQuantity = params.MaxQuantity;
}


// Function itemDropQuantityWidget.itemDropQuantityWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UitemDropQuantityWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function itemDropQuantityWidget.itemDropQuantityWidget_C.PreConstruct");

	UitemDropQuantityWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function itemDropQuantityWidget.itemDropQuantityWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UitemDropQuantityWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function itemDropQuantityWidget.itemDropQuantityWidget_C.Construct");

	UitemDropQuantityWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function itemDropQuantityWidget.itemDropQuantityWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UitemDropQuantityWidget_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function itemDropQuantityWidget.itemDropQuantityWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UitemDropQuantityWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function itemDropQuantityWidget.itemDropQuantityWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TargetString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            QuanMax                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             TargetWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UinventoryItemWidget_C*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UitemDropQuantityWidget_C::setup(const struct FString& TargetString, int QuanMax, class UUserWidget* TargetWidget, class UinventoryItemWidget_C* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function itemDropQuantityWidget.itemDropQuantityWidget_C.setup");

	UitemDropQuantityWidget_C_setup_Params params;
	params.TargetString = TargetString;
	params.QuanMax = QuanMax;
	params.TargetWidget = TargetWidget;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function itemDropQuantityWidget.itemDropQuantityWidget_C.BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UitemDropQuantityWidget_C::BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function itemDropQuantityWidget.itemDropQuantityWidget_C.BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");

	UitemDropQuantityWidget_C_BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function itemDropQuantityWidget.itemDropQuantityWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UitemDropQuantityWidget_C::BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function itemDropQuantityWidget.itemDropQuantityWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UitemDropQuantityWidget_C_BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function itemDropQuantityWidget.itemDropQuantityWidget_C.ExecuteUbergraph_itemDropQuantityWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UitemDropQuantityWidget_C::ExecuteUbergraph_itemDropQuantityWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function itemDropQuantityWidget.itemDropQuantityWidget_C.ExecuteUbergraph_itemDropQuantityWidget");

	UitemDropQuantityWidget_C_ExecuteUbergraph_itemDropQuantityWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
