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
	 * Function Bird_Perch_TargetPoint.Bird_Perch_TargetPoint_C.UserConstructionScript
	 */
	struct ABird_Perch_TargetPoint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Bird_Perch_TargetPoint.Bird_Perch_TargetPoint_C.FlyToPerch__FinishedFunc
	 */
	struct ABird_Perch_TargetPoint_C_FlyToPerch__FinishedFunc_Params
	{	};

	/**
	 * Function Bird_Perch_TargetPoint.Bird_Perch_TargetPoint_C.FlyToPerch__UpdateFunc
	 */
	struct ABird_Perch_TargetPoint_C_FlyToPerch__UpdateFunc_Params
	{	};

	/**
	 * Function Bird_Perch_TargetPoint.Bird_Perch_TargetPoint_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_13_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABird_Perch_TargetPoint_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_13_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function Bird_Perch_TargetPoint.Bird_Perch_TargetPoint_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_35_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABird_Perch_TargetPoint_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_35_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Bird_Perch_TargetPoint.Bird_Perch_TargetPoint_C.ExecuteUbergraph_Bird_Perch_TargetPoint
	 */
	struct ABird_Perch_TargetPoint_C_ExecuteUbergraph_Bird_Perch_TargetPoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
