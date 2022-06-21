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
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.respawnWorkStation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AdrugWorkStation_C::respawnWorkStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.respawnWorkStation");
		
		AdrugWorkStation_C_respawnWorkStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.checkHasEquipment
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               hasEquipment                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AdrugWorkStation_C::checkHasEquipment(bool* hasEquipment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.checkHasEquipment");
		
		AdrugWorkStation_C_checkHasEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (hasEquipment != nullptr)
			*hasEquipment = params.hasEquipment;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.displayInteractionError
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdrugWorkStation_C::displayInteractionError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.displayInteractionError");
		
		AdrugWorkStation_C_displayInteractionError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.eqGizmoUpdate
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AdrugWorkStation_C::eqGizmoUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.eqGizmoUpdate");
		
		AdrugWorkStation_C_eqGizmoUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.setEqPlacementGizmo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FromHoveredObject                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AworkStationEquipmentBase_C*                 HoveredEq                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdrugWorkStation_C::setEqPlacementGizmo(bool FromHoveredObject, class AworkStationEquipmentBase_C* HoveredEq)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.setEqPlacementGizmo");
		
		AdrugWorkStation_C_setEqPlacementGizmo_Params params {};
		params.FromHoveredObject = FromHoveredObject;
		params.HoveredEq = HoveredEq;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.setDrugPlacementGizmo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AdrugWorkStation_C::setDrugPlacementGizmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.setDrugPlacementGizmo");
		
		AdrugWorkStation_C_setDrugPlacementGizmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.packageGizmoUpdate
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AdrugWorkStation_C::packageGizmoUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.packageGizmoUpdate");
		
		AdrugWorkStation_C_packageGizmoUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.switchNextMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdrugWorkStation_C::switchNextMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.switchNextMode");
		
		AdrugWorkStation_C_switchNextMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdrugWorkStation_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.UserConstructionScript");
		
		AdrugWorkStation_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.TabHeldDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdrugWorkStation_C::TabHeldDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.TabHeldDown");
		
		AdrugWorkStation_C_TabHeldDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.TabReleased
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdrugWorkStation_C::TabReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.TabReleased");
		
		AdrugWorkStation_C_TabReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.ShiftHeldDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdrugWorkStation_C::ShiftHeldDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.ShiftHeldDown");
		
		AdrugWorkStation_C_ShiftHeldDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.ShiftReleased
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdrugWorkStation_C::ShiftReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.ShiftReleased");
		
		AdrugWorkStation_C_ShiftReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.placeCurObject
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdrugWorkStation_C::placeCurObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.placeCurObject");
		
		AdrugWorkStation_C_placeCurObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.LeaveWorkStation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdrugWorkStation_C::LeaveWorkStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.LeaveWorkStation");
		
		AdrugWorkStation_C_LeaveWorkStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.ActivateWorkStation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdrugWorkStation_C::ActivateWorkStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.ActivateWorkStation");
		
		AdrugWorkStation_C_ActivateWorkStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.scrollOneUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdrugWorkStation_C::scrollOneUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.scrollOneUp");
		
		AdrugWorkStation_C_scrollOneUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.scrollOneDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdrugWorkStation_C::scrollOneDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.scrollOneDown");
		
		AdrugWorkStation_C_scrollOneDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdrugWorkStation_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.ReceiveTick");
		
		AdrugWorkStation_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.rotateGizmo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdrugWorkStation_C::rotateGizmo(float Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.rotateGizmo");
		
		AdrugWorkStation_C_rotateGizmo_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AdrugWorkStation_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.ReceiveBeginPlay");
		
		AdrugWorkStation_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.updateWorkStationObjects
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Placed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AdrugWorkStation_C::updateWorkStationObjects(bool Placed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.updateWorkStationObjects");
		
		AdrugWorkStation_C_updateWorkStationObjects_Params params {};
		params.Placed = Placed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugWorkStation.drugWorkStation_C.ExecuteUbergraph_drugWorkStation
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdrugWorkStation_C::ExecuteUbergraph_drugWorkStation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugWorkStation.drugWorkStation_C.ExecuteUbergraph_drugWorkStation");
		
		AdrugWorkStation_C_ExecuteUbergraph_drugWorkStation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdrugWorkStation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdrugWorkStation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass drugWorkStation.drugWorkStation_C");
		return ptr;
	}

}


