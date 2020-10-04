
#include "SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NPC_Bird_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.UserConstructionScript");

	ABP_NPC_Bird_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Bird_Base_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.ReceiveAnyDamage");

	ABP_NPC_Bird_Base_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Bird_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.ReceiveTick");

	ABP_NPC_Bird_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_12_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_NPC_Bird_Base_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_12_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_12_ComponentHitSignature__DelegateSignature");

	ABP_NPC_Bird_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_12_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.SetMovementTo_Flying
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_Bird_Base_C::SetMovementTo_Flying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.SetMovementTo_Flying");

	ABP_NPC_Bird_Base_C_SetMovementTo_Flying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.SetMovementTo_Walking
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_Bird_Base_C::SetMovementTo_Walking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.SetMovementTo_Walking");

	ABP_NPC_Bird_Base_C_SetMovementTo_Walking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.ExecuteUbergraph_BP_NPC_Bird_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Bird_Base_C::ExecuteUbergraph_BP_NPC_Bird_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bird_Base.BP_NPC_Bird_Base_C.ExecuteUbergraph_BP_NPC_Bird_Base");

	ABP_NPC_Bird_Base_C_ExecuteUbergraph_BP_NPC_Bird_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
