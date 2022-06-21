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
	 * Function itemDropQuantityWidget.itemDropQuantityWidget_C.getMaxQuantity
	 */
	struct UitemDropQuantityWidget_C_getMaxQuantity_Params
	{
	public:
		class FString                                              targetString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    sourceQuan;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FinventoryItemStruct                                Data;                                                    // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		int32_t                                                    maxQuantity;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function itemDropQuantityWidget.itemDropQuantityWidget_C.PreConstruct
	 */
	struct UitemDropQuantityWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function itemDropQuantityWidget.itemDropQuantityWidget_C.Construct
	 */
	struct UitemDropQuantityWidget_C_Construct_Params
	{	};

	/**
	 * Function itemDropQuantityWidget.itemDropQuantityWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UitemDropQuantityWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function itemDropQuantityWidget.itemDropQuantityWidget_C.Setup
	 */
	struct UitemDropQuantityWidget_C_Setup_Params
	{
	public:
		class FString                                              targetString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    QuanMax;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUserWidget*                                         TargetWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UinventoryItemWidget_C*                              Payload;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function itemDropQuantityWidget.itemDropQuantityWidget_C.BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UitemDropQuantityWidget_C_BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function itemDropQuantityWidget.itemDropQuantityWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UitemDropQuantityWidget_C_BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function itemDropQuantityWidget.itemDropQuantityWidget_C.BreakPriceLoop
	 */
	struct UitemDropQuantityWidget_C_BreakPriceLoop_Params
	{	};

	/**
	 * Function itemDropQuantityWidget.itemDropQuantityWidget_C.ExecuteUbergraph_itemDropQuantityWidget
	 */
	struct UitemDropQuantityWidget_C_ExecuteUbergraph_itemDropQuantityWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
