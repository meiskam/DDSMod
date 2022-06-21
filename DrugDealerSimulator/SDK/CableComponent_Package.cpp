/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ACableActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACableActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CableComponent.CableActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0041FEE0
	 * 		Name   -> Function CableComponent.CableComponent.SetAttachEndTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ComponentProperty                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCableComponent::SetAttachEndTo(class AActor* Actor, const class FName& ComponentProperty, const class FName& SocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.SetAttachEndTo");
		
		UCableComponent_SetAttachEndTo_Params params {};
		params.Actor = Actor;
		params.ComponentProperty = ComponentProperty;
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0041FE30
	 * 		Name   -> Function CableComponent.CableComponent.GetCableParticleLocations
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<struct FVector>                             Locations                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UCableComponent::GetCableParticleLocations(TArray<struct FVector>* Locations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetCableParticleLocations");
		
		UCableComponent_GetCableParticleLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Locations != nullptr)
			*Locations = params.Locations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0041FE00
	 * 		Name   -> Function CableComponent.CableComponent.GetAttachedComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USceneComponent* UCableComponent::GetAttachedComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedComponent");
		
		UCableComponent_GetAttachedComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0041FDD0
	 * 		Name   -> Function CableComponent.CableComponent.GetAttachedActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* UCableComponent::GetAttachedActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedActor");
		
		UCableComponent_GetAttachedActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CableComponent.CableComponent");
		return ptr;
	}

}


