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
	 * Function wallSwitchLightBP.wallSwitchLightBP_C.clearWidgetComponents
	 */
	struct AwallSwitchLightBP_C_clearWidgetComponents_Params
	{	};

	/**
	 * Function wallSwitchLightBP.wallSwitchLightBP_C.UserConstructionScript
	 */
	struct AwallSwitchLightBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function wallSwitchLightBP.wallSwitchLightBP_C.ReceiveBeginPlay
	 */
	struct AwallSwitchLightBP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function wallSwitchLightBP.wallSwitchLightBP_C.activateSwitch
	 */
	struct AwallSwitchLightBP_C_activateSwitch_Params
	{	};

	/**
	 * Function wallSwitchLightBP.wallSwitchLightBP_C.resetMe
	 */
	struct AwallSwitchLightBP_C_resetMe_Params
	{	};

	/**
	 * Function wallSwitchLightBP.wallSwitchLightBP_C.drawCheck
	 */
	struct AwallSwitchLightBP_C_drawCheck_Params
	{	};

	/**
	 * Function wallSwitchLightBP.wallSwitchLightBP_C.BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AwallSwitchLightBP_C_BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function wallSwitchLightBP.wallSwitchLightBP_C.BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AwallSwitchLightBP_C_BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function wallSwitchLightBP.wallSwitchLightBP_C.ExecuteUbergraph_wallSwitchLightBP
	 */
	struct AwallSwitchLightBP_C_ExecuteUbergraph_wallSwitchLightBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
