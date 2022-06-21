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
	 * Function mixConfirmWidget.mixConfirmWidget_C.Construct
	 */
	struct UmixConfirmWidget_C_Construct_Params
	{	};

	/**
	 * Function mixConfirmWidget.mixConfirmWidget_C.Tick
	 */
	struct UmixConfirmWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function mixConfirmWidget.mixConfirmWidget_C.Setup
	 */
	struct UmixConfirmWidget_C_Setup_Params
	{
	public:
		class AworkStationMixerBase_C*                             Mixer;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function mixConfirmWidget.mixConfirmWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UmixConfirmWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function mixConfirmWidget.mixConfirmWidget_C.BndEvt__btnApply_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UmixConfirmWidget_C_BndEvt__btnApply_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function mixConfirmWidget.mixConfirmWidget_C.killMe
	 */
	struct UmixConfirmWidget_C_killMe_Params
	{	};

	/**
	 * Function mixConfirmWidget.mixConfirmWidget_C.ExecuteUbergraph_mixConfirmWidget
	 */
	struct UmixConfirmWidget_C_ExecuteUbergraph_mixConfirmWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
