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
	 * Function halogenLightBP.halogenLightBP_C.lightTest
	 */
	struct AhalogenLightBP_C_lightTest_Params
	{	};

	/**
	 * Function halogenLightBP.halogenLightBP_C.UserConstructionScript
	 */
	struct AhalogenLightBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function halogenLightBP.halogenLightBP_C.ReceiveBeginPlay
	 */
	struct AhalogenLightBP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function halogenLightBP.halogenLightBP_C.BndEvt__Overlap_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AhalogenLightBP_C_BndEvt__Overlap_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function halogenLightBP.halogenLightBP_C.BndEvt__Overlap_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AhalogenLightBP_C_BndEvt__Overlap_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function halogenLightBP.halogenLightBP_C.endDetected
	 */
	struct AhalogenLightBP_C_endDetected_Params
	{	};

	/**
	 * Function halogenLightBP.halogenLightBP_C.turnLightOn
	 */
	struct AhalogenLightBP_C_turnLightOn_Params
	{	};

	/**
	 * Function halogenLightBP.halogenLightBP_C.turnLightOff
	 */
	struct AhalogenLightBP_C_turnLightOff_Params
	{	};

	/**
	 * Function halogenLightBP.halogenLightBP_C.ToggleShadows
	 */
	struct AhalogenLightBP_C_ToggleShadows_Params
	{
	public:
		bool                                                       on;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function halogenLightBP.halogenLightBP_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct AhalogenLightBP_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function halogenLightBP.halogenLightBP_C.ExecuteUbergraph_halogenLightBP
	 */
	struct AhalogenLightBP_C_ExecuteUbergraph_halogenLightBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
