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
	 * 		Name   -> Function appartmentManager.appartmentManager_C.getWallPicker
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            apartmentID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AappartmentViewerPawn_C*                     viewerPawn                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AappartmentWallPicker_C*                     wallPicker                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AappartmentManager_C::getWallPicker(int32_t apartmentID, bool* Success, class AappartmentViewerPawn_C** viewerPawn, class AappartmentWallPicker_C** wallPicker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.getWallPicker");
		
		AappartmentManager_C_getWallPicker_Params params {};
		params.apartmentID = apartmentID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (viewerPawn != nullptr)
			*viewerPawn = params.viewerPawn;
		if (wallPicker != nullptr)
			*wallPicker = params.wallPicker;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.rentBoostRespect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentManager_C::rentBoostRespect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.rentBoostRespect");
		
		AappartmentManager_C_rentBoostRespect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.countAvailableApartments
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentManager_C::countAvailableApartments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.countAvailableApartments");
		
		AappartmentManager_C_countAvailableApartments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.processRentTransaction
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AappartmentManager_C::processRentTransaction(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.processRentTransaction");
		
		AappartmentManager_C_processRentTransaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.UserConstructionScript");
		
		AappartmentManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.rentAction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentManager_C::rentAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.rentAction");
		
		AappartmentManager_C_rentAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.ConfirmRentAction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentManager_C::ConfirmRentAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.ConfirmRentAction");
		
		AappartmentManager_C_ConfirmRentAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.cancelRenting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentManager_C::cancelRenting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.cancelRenting");
		
		AappartmentManager_C_cancelRenting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.refreshEndRenting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentManager_C::refreshEndRenting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.refreshEndRenting");
		
		AappartmentManager_C_refreshEndRenting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.checkAppartmentPayments
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentManager_C::checkAppartmentPayments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.checkAppartmentPayments");
		
		AappartmentManager_C_checkAppartmentPayments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.prevViewAppartment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentManager_C::prevViewAppartment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.prevViewAppartment");
		
		AappartmentManager_C_prevViewAppartment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.nextViewAppartment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentManager_C::nextViewAppartment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.nextViewAppartment");
		
		AappartmentManager_C_nextViewAppartment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.refreshAppartments
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentManager_C::refreshAppartments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.refreshAppartments");
		
		AappartmentManager_C_refreshAppartments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.terminateRenting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentManager_C::terminateRenting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.terminateRenting");
		
		AappartmentManager_C_terminateRenting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.ChangeViewAppartment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AppartmentID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AappartmentManager_C::ChangeViewAppartment(int32_t AppartmentID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.ChangeViewAppartment");
		
		AappartmentManager_C_ChangeViewAppartment_Params params {};
		params.AppartmentID = AppartmentID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.startAppartmentViewer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentManager_C::startAppartmentViewer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.startAppartmentViewer");
		
		AappartmentManager_C_startAppartmentViewer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AappartmentManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.ReceiveTick");
		
		AappartmentManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AappartmentManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.ReceiveBeginPlay");
		
		AappartmentManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.sendDebtInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentManager_C::sendDebtInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.sendDebtInfo");
		
		AappartmentManager_C_sendDebtInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.firstRentAction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentManager_C::firstRentAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.firstRentAction");
		
		AappartmentManager_C_firstRentAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class URamaSaveComponent*                          RamaSaveComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      LevelPackageName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AappartmentManager_C::BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature");
		
		AappartmentManager_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params params {};
		params.RamaSaveComponent = RamaSaveComponent;
		params.LevelPackageName = LevelPackageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentManager.appartmentManager_C.ExecuteUbergraph_appartmentManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AappartmentManager_C::ExecuteUbergraph_appartmentManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.ExecuteUbergraph_appartmentManager");
		
		AappartmentManager_C_ExecuteUbergraph_appartmentManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AappartmentManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AappartmentManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass appartmentManager.appartmentManager_C");
		return ptr;
	}

}


