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
	 * Function mixDetailsWidget.mixDetailsWidget_C.Construct
	 */
	struct UmixDetailsWidget_C_Construct_Params
	{	};

	/**
	 * Function mixDetailsWidget.mixDetailsWidget_C.Tick
	 */
	struct UmixDetailsWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function mixDetailsWidget.mixDetailsWidget_C.Setup
	 */
	struct UmixDetailsWidget_C_Setup_Params
	{
	public:
		class AworkStationMixerBase_C*                             Mixer;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function mixDetailsWidget.mixDetailsWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UmixDetailsWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function mixDetailsWidget.mixDetailsWidget_C.killMe
	 */
	struct UmixDetailsWidget_C_killMe_Params
	{	};

	/**
	 * Function mixDetailsWidget.mixDetailsWidget_C.ExecuteUbergraph_mixDetailsWidget
	 */
	struct UmixDetailsWidget_C_ExecuteUbergraph_mixDetailsWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
