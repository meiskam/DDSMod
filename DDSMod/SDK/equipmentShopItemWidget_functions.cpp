
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

// Function equipmentShopItemWidget.equipmentShopItemWidget_C.Get_mainHolder_ToolTipWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UequipmentShopItemWidget_C::Get_mainHolder_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentShopItemWidget.equipmentShopItemWidget_C.Get_mainHolder_ToolTipWidget_1");

	UequipmentShopItemWidget_C_Get_mainHolder_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function equipmentShopItemWidget.equipmentShopItemWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UEquipmentShopInterfaceWidget_C* parentRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           checkedOut                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WaitBoost                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UequipmentShopItemWidget_C::setup(const struct FText& Name, float Price, int Quantity, class UTexture2D* Icon, int Index, class UEquipmentShopInterfaceWidget_C* parentRef, const struct FText& Description, bool checkedOut, int WaitBoost)
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentShopItemWidget.equipmentShopItemWidget_C.setup");

	UequipmentShopItemWidget_C_setup_Params params;
	params.Name = Name;
	params.Price = Price;
	params.Quantity = Quantity;
	params.Icon = Icon;
	params.Index = Index;
	params.parentRef = parentRef;
	params.Description = Description;
	params.checkedOut = checkedOut;
	params.WaitBoost = WaitBoost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function equipmentShopItemWidget.equipmentShopItemWidget_C.BndEvt__btnItemBuy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UequipmentShopItemWidget_C::BndEvt__btnItemBuy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentShopItemWidget.equipmentShopItemWidget_C.BndEvt__btnItemBuy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UequipmentShopItemWidget_C_BndEvt__btnItemBuy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function equipmentShopItemWidget.equipmentShopItemWidget_C.ExecuteUbergraph_equipmentShopItemWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UequipmentShopItemWidget_C::ExecuteUbergraph_equipmentShopItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentShopItemWidget.equipmentShopItemWidget_C.ExecuteUbergraph_equipmentShopItemWidget");

	UequipmentShopItemWidget_C_ExecuteUbergraph_equipmentShopItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
