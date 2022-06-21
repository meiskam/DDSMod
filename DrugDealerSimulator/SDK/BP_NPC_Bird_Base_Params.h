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
	 * Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.UserConstructionScript
	 */
	struct ABP_NPC_Bird_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.ReceiveAnyDamage
	 */
	struct ABP_NPC_Bird_Base_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageType*                                         DamageType;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.ReceiveTick
	 */
	struct ABP_NPC_Bird_Base_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_12_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_NPC_Bird_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_12_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.SetMovementTo_Flying
	 */
	struct ABP_NPC_Bird_Base_C_SetMovementTo_Flying_Params
	{	};

	/**
	 * Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.SetMovementTo_Walking
	 */
	struct ABP_NPC_Bird_Base_C_SetMovementTo_Walking_Params
	{	};

	/**
	 * Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.ExecuteUbergraph_BP_NPC_Bird_Base
	 */
	struct ABP_NPC_Bird_Base_C_ExecuteUbergraph_BP_NPC_Bird_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
