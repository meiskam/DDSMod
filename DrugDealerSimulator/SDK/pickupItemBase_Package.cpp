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
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pickupItemBase.pickupItemBase_C.RamaExtend
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ApickupItemBase_C::RamaExtend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.RamaExtend");
		
		ApickupItemBase_C_RamaExtend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pickupItemBase.pickupItemBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ApickupItemBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.UserConstructionScript");
		
		ApickupItemBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pickupItemBase.pickupItemBase_C.setupItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FinventoryItemStruct                        Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Object_Name                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Action_Name                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Droped                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SimulatePhysics                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isGizmo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ApickupItemBase_C::setupItem(const struct FinventoryItemStruct& Data, int32_t Quantity, const class FText& Object_Name, const class FText& Action_Name, bool Droped, bool SimulatePhysics, bool isGizmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.setupItem");
		
		ApickupItemBase_C_setupItem_Params params {};
		params.Data = Data;
		params.Quantity = Quantity;
		params.Object_Name = Object_Name;
		params.Action_Name = Action_Name;
		params.Droped = Droped;
		params.SimulatePhysics = SimulatePhysics;
		params.isGizmo = isGizmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pickupItemBase.pickupItemBase_C.resetDroped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApickupItemBase_C::resetDroped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.resetDroped");
		
		ApickupItemBase_C_resetDroped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pickupItemBase.pickupItemBase_C.ReceiveActorBeginOverlap
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ApickupItemBase_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.ReceiveActorBeginOverlap");
		
		ApickupItemBase_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pickupItemBase.pickupItemBase_C.pickupEventScript
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApickupItemBase_C::pickupEventScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.pickupEventScript");
		
		ApickupItemBase_C_pickupEventScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pickupItemBase.pickupItemBase_C.objectPickup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApickupItemBase_C::objectPickup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.objectPickup");
		
		ApickupItemBase_C_objectPickup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pickupItemBase.pickupItemBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ApickupItemBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.ReceiveBeginPlay");
		
		ApickupItemBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pickupItemBase.pickupItemBase_C.ShortRadiusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ApickupItemBase_C::ShortRadiusChanged(bool InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.ShortRadiusChanged");
		
		ApickupItemBase_C_ShortRadiusChanged_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pickupItemBase.pickupItemBase_C.LongRadiusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ApickupItemBase_C::LongRadiusChanged(bool InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.LongRadiusChanged");
		
		ApickupItemBase_C_LongRadiusChanged_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pickupItemBase.pickupItemBase_C.SubclassRamaLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApickupItemBase_C::SubclassRamaLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.SubclassRamaLoaded");
		
		ApickupItemBase_C_SubclassRamaLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pickupItemBase.pickupItemBase_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class URamaSaveComponent*                          RamaSaveComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      LevelPackageName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ApickupItemBase_C::BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature");
		
		ApickupItemBase_C_BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature_Params params {};
		params.RamaSaveComponent = RamaSaveComponent;
		params.LevelPackageName = LevelPackageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function pickupItemBase.pickupItemBase_C.ExecuteUbergraph_pickupItemBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ApickupItemBase_C::ExecuteUbergraph_pickupItemBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function pickupItemBase.pickupItemBase_C.ExecuteUbergraph_pickupItemBase");
		
		ApickupItemBase_C_ExecuteUbergraph_pickupItemBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ApickupItemBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ApickupItemBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass pickupItemBase.pickupItemBase_C");
		return ptr;
	}

}


