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
	 * Function skillLevelWidget.skillLevelWidget_C.GetToolTipWidget_1
	 */
	struct UskillLevelWidget_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function skillLevelWidget.skillLevelWidget_C.updateActivity
	 */
	struct UskillLevelWidget_C_updateActivity_Params
	{	};

	/**
	 * Function skillLevelWidget.skillLevelWidget_C.Construct
	 */
	struct UskillLevelWidget_C_Construct_Params
	{	};

	/**
	 * Function skillLevelWidget.skillLevelWidget_C.Tick
	 */
	struct UskillLevelWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function skillLevelWidget.skillLevelWidget_C.SetValues
	 */
	struct UskillLevelWidget_C_SetValues_Params
	{
	public:
		float                                                      skillLevel;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SkillMax;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function skillLevelWidget.skillLevelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UskillLevelWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function skillLevelWidget.skillLevelWidget_C.ExecuteUbergraph_skillLevelWidget
	 */
	struct UskillLevelWidget_C_ExecuteUbergraph_skillLevelWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
