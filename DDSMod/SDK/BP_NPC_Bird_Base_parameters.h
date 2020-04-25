#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.UserConstructionScript
struct ABP_NPC_Bird_Base_C_UserConstructionScript_Params
{
};

// Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.ReceiveAnyDamage
struct ABP_NPC_Bird_Base_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.ReceiveTick
struct ABP_NPC_Bird_Base_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_12_ComponentHitSignature__DelegateSignature
struct ABP_NPC_Bird_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_12_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.SetMovementTo_Flying
struct ABP_NPC_Bird_Base_C_SetMovementTo_Flying_Params
{
};

// Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.SetMovementTo_Walking
struct ABP_NPC_Bird_Base_C_SetMovementTo_Walking_Params
{
};

// Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.ExecuteUbergraph_BP_NPC_Bird_Base
struct ABP_NPC_Bird_Base_C_ExecuteUbergraph_BP_NPC_Bird_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
