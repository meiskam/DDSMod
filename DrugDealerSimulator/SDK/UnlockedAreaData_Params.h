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
	 * Function UnlockedAreaData.UnlockedAreaData_C.Get_reqPanel_ToolTipWidget_1
	 */
	struct UUnlockedAreaData_C_Get_reqPanel_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UnlockedAreaData.UnlockedAreaData_C.Get_reqPanel_ToolTipText_1
	 */
	struct UUnlockedAreaData_C_Get_reqPanel_ToolTipText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UnlockedAreaData.UnlockedAreaData_C.Get_reqPanel_Visibility_1
	 */
	struct UUnlockedAreaData_C_Get_reqPanel_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UnlockedAreaData.UnlockedAreaData_C.GetToolTipWidget_2
	 */
	struct UUnlockedAreaData_C_GetToolTipWidget_2_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UnlockedAreaData.UnlockedAreaData_C.GetToolTipWidget_1
	 */
	struct UUnlockedAreaData_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UnlockedAreaData.UnlockedAreaData_C.Get_progUnlock_ToolTipWidget_1
	 */
	struct UUnlockedAreaData_C_Get_progUnlock_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UnlockedAreaData.UnlockedAreaData_C.Get_respectBarsPanel_ToolTipWidget_1
	 */
	struct UUnlockedAreaData_C_Get_respectBarsPanel_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UnlockedAreaData.UnlockedAreaData_C.Construct
	 */
	struct UUnlockedAreaData_C_Construct_Params
	{	};

	/**
	 * Function UnlockedAreaData.UnlockedAreaData_C.Setup
	 */
	struct UUnlockedAreaData_C_Setup_Params
	{
	public:
		class FText                                                AreaNam;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      ExpVal;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ExpClamp;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ExpMax;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AreaUnlocked;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AreaAvailable;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              AreaString;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                reqArea;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      reqRespect;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    reqLevel;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReqAreaExp;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UnlockedAreaData.UnlockedAreaData_C.BndEvt__btnUnlock_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUnlockedAreaData_C_BndEvt__btnUnlock_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UnlockedAreaData.UnlockedAreaData_C.updateExposureBar
	 */
	struct UUnlockedAreaData_C_updateExposureBar_Params
	{	};

	/**
	 * Function UnlockedAreaData.UnlockedAreaData_C.ExecuteUbergraph_UnlockedAreaData
	 */
	struct UUnlockedAreaData_C_ExecuteUbergraph_UnlockedAreaData_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
