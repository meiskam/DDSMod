
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

// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.checkAvailableApartments
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEquipmentShopInterfaceWidget_C::checkAvailableApartments(bool* ok)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.checkAvailableApartments");

	UEquipmentShopInterfaceWidget_C_checkAvailableApartments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ok != nullptr)
		*ok = params.ok;
}


// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.updateBalance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEquipmentShopInterfaceWidget_C::updateBalance()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.updateBalance");

	UEquipmentShopInterfaceWidget_C_updateBalance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.checkPlayerHasApartments
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           hasApartments                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEquipmentShopInterfaceWidget_C::checkPlayerHasApartments(bool* hasApartments)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.checkPlayerHasApartments");

	UEquipmentShopInterfaceWidget_C_checkPlayerHasApartments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hasApartments != nullptr)
		*hasApartments = params.hasApartments;
}


// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.renderAppartments
// (Public, BlueprintCallable, BlueprintEvent)

void UEquipmentShopInterfaceWidget_C::renderAppartments()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.renderAppartments");

	UEquipmentShopInterfaceWidget_C_renderAppartments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.renderMainList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEquipmentShopInterfaceWidget_C::renderMainList()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.renderMainList");

	UEquipmentShopInterfaceWidget_C_renderMainList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.renderCheckoutItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEquipmentShopInterfaceWidget_C::renderCheckoutItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.renderCheckoutItems");

	UEquipmentShopInterfaceWidget_C_renderCheckoutItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.recalcCheckout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEquipmentShopInterfaceWidget_C::recalcCheckout()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.recalcCheckout");

	UEquipmentShopInterfaceWidget_C_recalcCheckout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.addListItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FappartmentEquipment    Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UequipmentShopItemWidget_C* ItemRef                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEquipmentShopInterfaceWidget_C::addListItem(const struct FText& Name, float Price, int Quantity, int Index, class UTexture2D* Icon, const struct FappartmentEquipment& Data, const struct FText& Description, class UequipmentShopItemWidget_C** ItemRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.addListItem");

	UEquipmentShopInterfaceWidget_C_addListItem_Params params;
	params.Name = Name;
	params.Price = Price;
	params.Quantity = Quantity;
	params.Index = Index;
	params.Icon = Icon;
	params.Data = Data;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemRef != nullptr)
		*ItemRef = params.ItemRef;
}


// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEquipmentShopInterfaceWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.Construct");

	UEquipmentShopInterfaceWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.setup
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FappartmentEquipment> baseEq                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  basePrices                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    baseDay                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    curQuantity                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AequipmentShop_C*        ParentShopRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEquipmentShopInterfaceWidget_C::setup(TArray<struct FappartmentEquipment> baseEq, TArray<float> basePrices, TArray<int> baseDay, TArray<int> curQuantity, class AequipmentShop_C* ParentShopRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.setup");

	UEquipmentShopInterfaceWidget_C_setup_Params params;
	params.baseEq = baseEq;
	params.basePrices = basePrices;
	params.baseDay = baseDay;
	params.curQuantity = curQuantity;
	params.ParentShopRef = ParentShopRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEquipmentShopInterfaceWidget_C::BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UEquipmentShopInterfaceWidget_C_BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEquipmentShopInterfaceWidget_C::BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UEquipmentShopInterfaceWidget_C_BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnConfirmAddress_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEquipmentShopInterfaceWidget_C::BndEvt__btnConfirmAddress_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnConfirmAddress_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UEquipmentShopInterfaceWidget_C_BndEvt__btnConfirmAddress_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEquipmentShopInterfaceWidget_C::BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UEquipmentShopInterfaceWidget_C_BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnShowAll_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEquipmentShopInterfaceWidget_C::BndEvt__btnShowAll_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnShowAll_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UEquipmentShopInterfaceWidget_C_BndEvt__btnShowAll_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnShowFunctional_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEquipmentShopInterfaceWidget_C::BndEvt__btnShowFunctional_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnShowFunctional_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UEquipmentShopInterfaceWidget_C_BndEvt__btnShowFunctional_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnShowDeco_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEquipmentShopInterfaceWidget_C::BndEvt__btnShowDeco_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnShowDeco_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UEquipmentShopInterfaceWidget_C_BndEvt__btnShowDeco_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.ExecuteUbergraph_EquipmentShopInterfaceWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEquipmentShopInterfaceWidget_C::ExecuteUbergraph_EquipmentShopInterfaceWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.ExecuteUbergraph_EquipmentShopInterfaceWidget");

	UEquipmentShopInterfaceWidget_C_ExecuteUbergraph_EquipmentShopInterfaceWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
