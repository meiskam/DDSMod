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
	 * Function burningTires.burningTires_C.UserConstructionScript
	 */
	struct AburningTires_C_UserConstructionScript_Params
	{	};

	/**
	 * Function burningTires.burningTires_C.lightIntensity__FinishedFunc
	 */
	struct AburningTires_C_lightIntensity__FinishedFunc_Params
	{	};

	/**
	 * Function burningTires.burningTires_C.lightIntensity__UpdateFunc
	 */
	struct AburningTires_C_lightIntensity__UpdateFunc_Params
	{	};

	/**
	 * Function burningTires.burningTires_C.ReceiveBeginPlay
	 */
	struct AburningTires_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function burningTires.burningTires_C.extinguish
	 */
	struct AburningTires_C_extinguish_Params
	{	};

	/**
	 * Function burningTires.burningTires_C.stopTimeline
	 */
	struct AburningTires_C_stopTimeline_Params
	{	};

	/**
	 * Function burningTires.burningTires_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AburningTires_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function burningTires.burningTires_C.ExecuteUbergraph_burningTires
	 */
	struct AburningTires_C_ExecuteUbergraph_burningTires_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
