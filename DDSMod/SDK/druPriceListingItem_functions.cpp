
#include "SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function druPriceListingItem.druPriceListingItem_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FdrugData               drugData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          BuyPrice                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CurSellPrice                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            drugIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AmainComputer_C*         computerRef                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           firstLocked                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdruPriceListingItem_C::setup(const struct FdrugData& drugData, float BuyPrice, float CurSellPrice, int drugIndex, class AmainComputer_C* computerRef, bool firstLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function druPriceListingItem.druPriceListingItem_C.setup");

	UdruPriceListingItem_C_setup_Params params;
	params.drugData = drugData;
	params.BuyPrice = BuyPrice;
	params.CurSellPrice = CurSellPrice;
	params.drugIndex = drugIndex;
	params.computerRef = computerRef;
	params.firstLocked = firstLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function druPriceListingItem.druPriceListingItem_C.BndEvt__btnPriceLower_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdruPriceListingItem_C::BndEvt__btnPriceLower_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function druPriceListingItem.druPriceListingItem_C.BndEvt__btnPriceLower_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UdruPriceListingItem_C_BndEvt__btnPriceLower_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function druPriceListingItem.druPriceListingItem_C.BndEvt__btnDisableEnable_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdruPriceListingItem_C::BndEvt__btnDisableEnable_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function druPriceListingItem.druPriceListingItem_C.BndEvt__btnDisableEnable_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UdruPriceListingItem_C_BndEvt__btnDisableEnable_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function druPriceListingItem.druPriceListingItem_C.BndEvt__btnUnlockDrug_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdruPriceListingItem_C::BndEvt__btnUnlockDrug_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function druPriceListingItem.druPriceListingItem_C.BndEvt__btnUnlockDrug_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UdruPriceListingItem_C_BndEvt__btnUnlockDrug_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function druPriceListingItem.druPriceListingItem_C.ExecuteUbergraph_druPriceListingItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdruPriceListingItem_C::ExecuteUbergraph_druPriceListingItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function druPriceListingItem.druPriceListingItem_C.ExecuteUbergraph_druPriceListingItem");

	UdruPriceListingItem_C_ExecuteUbergraph_druPriceListingItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
