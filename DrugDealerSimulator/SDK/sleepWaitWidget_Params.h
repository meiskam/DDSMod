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
	 * Function sleepWaitWidget.sleepWaitWidget_C.Construct
	 */
	struct UsleepWaitWidget_C_Construct_Params
	{	};

	/**
	 * Function sleepWaitWidget.sleepWaitWidget_C.Tick
	 */
	struct UsleepWaitWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function sleepWaitWidget.sleepWaitWidget_C.changeHour
	 */
	struct UsleepWaitWidget_C_changeHour_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function sleepWaitWidget.sleepWaitWidget_C.changeMinute
	 */
	struct UsleepWaitWidget_C_changeMinute_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnSubHour_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UsleepWaitWidget_C_BndEvt__btnSubHour_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnAddHour_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UsleepWaitWidget_C_BndEvt__btnAddHour_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnSubMin_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UsleepWaitWidget_C_BndEvt__btnSubMin_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnAddMin_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UsleepWaitWidget_C_BndEvt__btnAddMin_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnSleep_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UsleepWaitWidget_C_BndEvt__btnSleep_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function sleepWaitWidget.sleepWaitWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UsleepWaitWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function sleepWaitWidget.sleepWaitWidget_C.Setup
	 */
	struct UsleepWaitWidget_C_Setup_Params
	{
	public:
		bool                                                       Sleep;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function sleepWaitWidget.sleepWaitWidget_C.Destruct
	 */
	struct UsleepWaitWidget_C_Destruct_Params
	{	};

	/**
	 * Function sleepWaitWidget.sleepWaitWidget_C.ExecuteUbergraph_sleepWaitWidget
	 */
	struct UsleepWaitWidget_C_ExecuteUbergraph_sleepWaitWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
