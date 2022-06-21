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
	 * Function labelEditWidget.labelEditWidget_C.GetColorAndOpacity_1
	 */
	struct UlabelEditWidget_C_GetColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function labelEditWidget.labelEditWidget_C.Construct
	 */
	struct UlabelEditWidget_C_Construct_Params
	{	};

	/**
	 * Function labelEditWidget.labelEditWidget_C.Tick
	 */
	struct UlabelEditWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function labelEditWidget.labelEditWidget_C.Setup
	 */
	struct UlabelEditWidget_C_Setup_Params
	{
	public:
		class AadditiveContainerBase_C*                            ParentContainer;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                DefaultName;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       DisableCancel;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function labelEditWidget.labelEditWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UlabelEditWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function labelEditWidget.labelEditWidget_C.BndEvt__btnSave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UlabelEditWidget_C_BndEvt__btnSave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function labelEditWidget.labelEditWidget_C.killMe
	 */
	struct UlabelEditWidget_C_killMe_Params
	{	};

	/**
	 * Function labelEditWidget.labelEditWidget_C.ExecuteUbergraph_labelEditWidget
	 */
	struct UlabelEditWidget_C_ExecuteUbergraph_labelEditWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
