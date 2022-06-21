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
	 * 		Name   -> Function interactiveBaseObject.interactiveBaseObject_C.VerifyBaseSizing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ok                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AinteractiveBaseObject_C::VerifyBaseSizing(bool* ok)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.VerifyBaseSizing");
		
		AinteractiveBaseObject_C_VerifyBaseSizing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ok != nullptr)
			*ok = params.ok;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveBaseObject.interactiveBaseObject_C.GetEquipmentMeta
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FappartmentEquipment                        EquipmentMeta                                              (Parm, OutParm, HasGetValueTypeHash)
	 */
	void AinteractiveBaseObject_C::GetEquipmentMeta(bool* Success, struct FappartmentEquipment* EquipmentMeta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.GetEquipmentMeta");
		
		AinteractiveBaseObject_C_GetEquipmentMeta_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (EquipmentMeta != nullptr)
			*EquipmentMeta = params.EquipmentMeta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveBaseObject.interactiveBaseObject_C.GetItemMeta
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FNewItemStructure                           ItemMeta                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void AinteractiveBaseObject_C::GetItemMeta(bool* Success, struct FNewItemStructure* ItemMeta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.GetItemMeta");
		
		AinteractiveBaseObject_C_GetItemMeta_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ItemMeta != nullptr)
			*ItemMeta = params.ItemMeta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveBaseObject.interactiveBaseObject_C.CheckForInnerClasses
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            innerIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DeepIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Match                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AinteractiveBaseObject_C::CheckForInnerClasses(int32_t innerIndex, int32_t DeepIndex, bool* Match)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.CheckForInnerClasses");
		
		AinteractiveBaseObject_C_CheckForInnerClasses_Params params {};
		params.innerIndex = innerIndex;
		params.DeepIndex = DeepIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Match != nullptr)
			*Match = params.Match;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveBaseObject.interactiveBaseObject_C.reconstructEquipmentData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AinteractiveBaseObject_C::reconstructEquipmentData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.reconstructEquipmentData");
		
		AinteractiveBaseObject_C_reconstructEquipmentData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveBaseObject.interactiveBaseObject_C.removeFromWorkStation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AinteractiveBaseObject_C::removeFromWorkStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.removeFromWorkStation");
		
		AinteractiveBaseObject_C_removeFromWorkStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveBaseObject.interactiveBaseObject_C.objectCanStoreApartment
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               CanStore                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Reason                                                     (Parm, OutParm)
	 */
	void AinteractiveBaseObject_C::objectCanStoreApartment(bool* CanStore, class FText* Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.objectCanStoreApartment");
		
		AinteractiveBaseObject_C_objectCanStoreApartment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanStore != nullptr)
			*CanStore = params.CanStore;
		if (Reason != nullptr)
			*Reason = params.Reason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveBaseObject.interactiveBaseObject_C.verifyCorrectNaming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AinteractiveBaseObject_C::verifyCorrectNaming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.verifyCorrectNaming");
		
		AinteractiveBaseObject_C_verifyCorrectNaming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveBaseObject.interactiveBaseObject_C.GetActionNames
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        OverrideKey                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        keyOverride                                                (Parm, OutParm)
	 * 		class FText                                        Object_Name                                                (Parm, OutParm)
	 * 		class FText                                        Action_Name                                                (Parm, OutParm)
	 */
	void AinteractiveBaseObject_C::GetActionNames(const class FText& OverrideKey, class FText* keyOverride, class FText* Object_Name, class FText* Action_Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.GetActionNames");
		
		AinteractiveBaseObject_C_GetActionNames_Params params {};
		params.OverrideKey = OverrideKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (keyOverride != nullptr)
			*keyOverride = params.keyOverride;
		if (Object_Name != nullptr)
			*Object_Name = params.Object_Name;
		if (Action_Name != nullptr)
			*Action_Name = params.Action_Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveBaseObject.interactiveBaseObject_C.beenActivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AinteractiveBaseObject_C::beenActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.beenActivated");
		
		AinteractiveBaseObject_C_beenActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveBaseObject.interactiveBaseObject_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AinteractiveBaseObject_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.UserConstructionScript");
		
		AinteractiveBaseObject_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveBaseObject.interactiveBaseObject_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AinteractiveBaseObject_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.ReceiveBeginPlay");
		
		AinteractiveBaseObject_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveBaseObject.interactiveBaseObject_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AinteractiveBaseObject_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.ReceiveTick");
		
		AinteractiveBaseObject_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveBaseObject.interactiveBaseObject_C.adaptPlaceMaterial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AinteractiveBaseObject_C::adaptPlaceMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.adaptPlaceMaterial");
		
		AinteractiveBaseObject_C_adaptPlaceMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveBaseObject.interactiveBaseObject_C.SetAsGizmo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AinteractiveBaseObject_C::SetAsGizmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.SetAsGizmo");
		
		AinteractiveBaseObject_C_SetAsGizmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveBaseObject.interactiveBaseObject_C.ExecuteUbergraph_interactiveBaseObject
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AinteractiveBaseObject_C::ExecuteUbergraph_interactiveBaseObject(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.ExecuteUbergraph_interactiveBaseObject");
		
		AinteractiveBaseObject_C_ExecuteUbergraph_interactiveBaseObject_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AinteractiveBaseObject_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AinteractiveBaseObject_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass interactiveBaseObject.interactiveBaseObject_C");
		return ptr;
	}

}


