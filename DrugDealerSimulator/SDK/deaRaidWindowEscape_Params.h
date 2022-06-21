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
	 * Function deaRaidWindowEscape.deaRaidWindowEscape_C.UserConstructionScript
	 */
	struct AdeaRaidWindowEscape_C_UserConstructionScript_Params
	{	};

	/**
	 * Function deaRaidWindowEscape.deaRaidWindowEscape_C.ReceiveBeginPlay
	 */
	struct AdeaRaidWindowEscape_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function deaRaidWindowEscape.deaRaidWindowEscape_C.ReceiveTick
	 */
	struct AdeaRaidWindowEscape_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function deaRaidWindowEscape.deaRaidWindowEscape_C.Activate
	 */
	struct AdeaRaidWindowEscape_C_Activate_Params
	{	};

	/**
	 * Function deaRaidWindowEscape.deaRaidWindowEscape_C.Deactivate
	 */
	struct AdeaRaidWindowEscape_C_Deactivate_Params
	{	};

	/**
	 * Function deaRaidWindowEscape.deaRaidWindowEscape_C.WindowActionPressed
	 */
	struct AdeaRaidWindowEscape_C_WindowActionPressed_Params
	{	};

	/**
	 * Function deaRaidWindowEscape.deaRaidWindowEscape_C.WindowActionRelease
	 */
	struct AdeaRaidWindowEscape_C_WindowActionRelease_Params
	{	};

	/**
	 * Function deaRaidWindowEscape.deaRaidWindowEscape_C.escapeThroughtWindow
	 */
	struct AdeaRaidWindowEscape_C_escapeThroughtWindow_Params
	{	};

	/**
	 * Function deaRaidWindowEscape.deaRaidWindowEscape_C.BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AdeaRaidWindowEscape_C_BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function deaRaidWindowEscape.deaRaidWindowEscape_C.BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AdeaRaidWindowEscape_C_BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function deaRaidWindowEscape.deaRaidWindowEscape_C.ExecuteUbergraph_deaRaidWindowEscape
	 */
	struct AdeaRaidWindowEscape_C_ExecuteUbergraph_deaRaidWindowEscape_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
