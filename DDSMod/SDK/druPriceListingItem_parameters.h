#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function druPriceListingItem.druPriceListingItem_C.setup
struct UdruPriceListingItem_C_setup_Params
{
	struct FdrugData                                   drugData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              BuyPrice;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurSellPrice;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DrugIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AmainComputer_C*                             computerRef;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               firstLocked;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function druPriceListingItem.druPriceListingItem_C.BndEvt__btnPriceLower_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UdruPriceListingItem_C_BndEvt__btnPriceLower_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function druPriceListingItem.druPriceListingItem_C.BndEvt__btnDisableEnable_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UdruPriceListingItem_C_BndEvt__btnDisableEnable_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function druPriceListingItem.druPriceListingItem_C.BndEvt__btnUnlockDrug_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UdruPriceListingItem_C_BndEvt__btnUnlockDrug_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function druPriceListingItem.druPriceListingItem_C.ExecuteUbergraph_druPriceListingItem
struct UdruPriceListingItem_C_ExecuteUbergraph_druPriceListingItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
