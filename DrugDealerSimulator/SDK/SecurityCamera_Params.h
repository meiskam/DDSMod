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
	 * Function SecurityCamera.SecurityCamera_C.UserConstructionScript
	 */
	struct ASecurityCamera_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SecurityCamera.SecurityCamera_C.Reactivate
	 */
	struct ASecurityCamera_C_Reactivate_Params
	{	};

	/**
	 * Function SecurityCamera.SecurityCamera_C.BndEvt__cameraViewArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ASecurityCamera_C_BndEvt__cameraViewArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function SecurityCamera.SecurityCamera_C.BndEvt__cameraViewArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ASecurityCamera_C_BndEvt__cameraViewArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCamera.SecurityCamera_C.TriggerAlarm
	 */
	struct ASecurityCamera_C_TriggerAlarm_Params
	{	};

	/**
	 * Function SecurityCamera.SecurityCamera_C.StopAlarm
	 */
	struct ASecurityCamera_C_StopAlarm_Params
	{	};

	/**
	 * Function SecurityCamera.SecurityCamera_C.PowerChanged
	 */
	struct ASecurityCamera_C_PowerChanged_Params
	{	};

	/**
	 * Function SecurityCamera.SecurityCamera_C.RestorePower
	 */
	struct ASecurityCamera_C_RestorePower_Params
	{	};

	/**
	 * Function SecurityCamera.SecurityCamera_C.RetryLineTrace
	 */
	struct ASecurityCamera_C_RetryLineTrace_Params
	{	};

	/**
	 * Function SecurityCamera.SecurityCamera_C.SetActivity
	 */
	struct ASecurityCamera_C_SetActivity_Params
	{
	public:
		bool                                                       NewActivity;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SecurityCamera.SecurityCamera_C.ReceiveTick
	 */
	struct ASecurityCamera_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCamera.SecurityCamera_C.ReceiveBeginPlay
	 */
	struct ASecurityCamera_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SecurityCamera.SecurityCamera_C.LongRadiusChanged
	 */
	struct ASecurityCamera_C_LongRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SecurityCamera.SecurityCamera_C.ShortRadiusChanged
	 */
	struct ASecurityCamera_C_ShortRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SecurityCamera.SecurityCamera_C.ExecuteUbergraph_SecurityCamera
	 */
	struct ASecurityCamera_C_ExecuteUbergraph_SecurityCamera_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
