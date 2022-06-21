#pragma once

/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.checkAvailableApartments
	 */
	struct UEquipmentShopInterfaceWidget_C_checkAvailableApartments_Params
	{
	public:
		bool                                                       ok;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.updateBalance
	 */
	struct UEquipmentShopInterfaceWidget_C_updateBalance_Params
	{	};

	/**
	 * Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.checkPlayerHasApartments
	 */
	struct UEquipmentShopInterfaceWidget_C_checkPlayerHasApartments_Params
	{
	public:
		bool                                                       hasApartments;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.renderAppartments
	 */
	struct UEquipmentShopInterfaceWidget_C_renderAppartments_Params
	{	};

	/**
	 * Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.renderMainList
	 */
	struct UEquipmentShopInterfaceWidget_C_renderMainList_Params
	{	};

	/**
	 * Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.renderCheckoutItems
	 */
	struct UEquipmentShopInterfaceWidget_C_renderCheckoutItems_Params
	{	};

	/**
	 * Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.recalcCheckout
	 */
	struct UEquipmentShopInterfaceWidget_C_recalcCheckout_Params
	{	};

	/**
	 * Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.AddListItem
	 */
	struct UEquipmentShopInterfaceWidget_C_AddListItem_Params
	{
	public:
		class FName                                                ItemID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Price;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UequipmentShopItemWidget_C*                          ItemRef;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.Construct
	 */
	struct UEquipmentShopInterfaceWidget_C_Construct_Params
	{	};

	/**
	 * Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.Setup
	 */
	struct UEquipmentShopInterfaceWidget_C_Setup_Params
	{
	public:
		TArray<struct FappartmentEquipment>                        baseEq;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<float>                                              basePrices;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class AequipmentShop_C*                                    ParentShopRef;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<bool>                                               Unlocked;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEquipmentShopInterfaceWidget_C_BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEquipmentShopInterfaceWidget_C_BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnConfirmAddress_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEquipmentShopInterfaceWidget_C_BndEvt__btnConfirmAddress_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEquipmentShopInterfaceWidget_C_BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnShowAll_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEquipmentShopInterfaceWidget_C_BndEvt__btnShowAll_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnShowFunctional_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEquipmentShopInterfaceWidget_C_BndEvt__btnShowFunctional_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnShowDeco_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEquipmentShopInterfaceWidget_C_BndEvt__btnShowDeco_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.ExecuteUbergraph_EquipmentShopInterfaceWidget
	 */
	struct UEquipmentShopInterfaceWidget_C_ExecuteUbergraph_EquipmentShopInterfaceWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
