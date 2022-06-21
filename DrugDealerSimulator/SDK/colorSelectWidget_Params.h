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
	 * Function colorSelectWidget.colorSelectWidget_C.Tick
	 */
	struct UcolorSelectWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function colorSelectWidget.colorSelectWidget_C.BndEvt__sliderREd_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UcolorSelectWidget_C_BndEvt__sliderREd_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function colorSelectWidget.colorSelectWidget_C.BndEvt__sliderGreen_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UcolorSelectWidget_C_BndEvt__sliderGreen_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function colorSelectWidget.colorSelectWidget_C.BndEvt__sliderBlue_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UcolorSelectWidget_C_BndEvt__sliderBlue_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function colorSelectWidget.colorSelectWidget_C.Setup
	 */
	struct UcolorSelectWidget_C_Setup_Params
	{
	public:
		struct FSlateColor                                         SlateColor;                                              // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UsettingsWidget_C*                                   settingsWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function colorSelectWidget.colorSelectWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UcolorSelectWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function colorSelectWidget.colorSelectWidget_C.ExecuteUbergraph_colorSelectWidget
	 */
	struct UcolorSelectWidget_C_ExecuteUbergraph_colorSelectWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
