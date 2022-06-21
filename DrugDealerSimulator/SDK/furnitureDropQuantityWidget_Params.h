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
	 * Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.getMaxQuantity
	 */
	struct UfurnitureDropQuantityWidget_C_getMaxQuantity_Params
	{
	public:
		class FString                                              targetString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    sourceQuan;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FinventoryItemStruct                                Data;                                                    // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		int32_t                                                    maxQuantity;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.PreConstruct
	 */
	struct UfurnitureDropQuantityWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.Construct
	 */
	struct UfurnitureDropQuantityWidget_C_Construct_Params
	{	};

	/**
	 * Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UfurnitureDropQuantityWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.Setup
	 */
	struct UfurnitureDropQuantityWidget_C_Setup_Params
	{
	public:
		class FString                                              targetString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    QuanMax;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAppManageList_C*                                    ManageList;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UfurnitureDropQuantityWidget_C_BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UfurnitureDropQuantityWidget_C_BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.ExecuteUbergraph_furnitureDropQuantityWidget
	 */
	struct UfurnitureDropQuantityWidget_C_ExecuteUbergraph_furnitureDropQuantityWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
