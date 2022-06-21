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
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.RamaExpand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::RamaExpand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.RamaExpand");
		
		AworkStationEquipmentBase_C_RamaExpand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.GetHeldSubstanceID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FinalProduct                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        OutSubstanceID                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworkStationEquipmentBase_C::GetHeldSubstanceID(bool FinalProduct, class FName* OutSubstanceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.GetHeldSubstanceID");
		
		AworkStationEquipmentBase_C_GetHeldSubstanceID_Params params {};
		params.FinalProduct = FinalProduct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSubstanceID != nullptr)
			*OutSubstanceID = params.OutSubstanceID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.HandleRama
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::HandleRama()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.HandleRama");
		
		AworkStationEquipmentBase_C_HandleRama_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.packagePopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::packagePopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.packagePopup");
		
		AworkStationEquipmentBase_C_packagePopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.packageProduct
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::packageProduct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.packageProduct");
		
		AworkStationEquipmentBase_C_packageProduct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.rightClickOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::rightClickOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.rightClickOptions");
		
		AworkStationEquipmentBase_C_rightClickOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.tryAddSubstance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::tryAddSubstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.tryAddSubstance");
		
		AworkStationEquipmentBase_C_tryAddSubstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.verifySubstanceSource
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Proceed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NameDiffers                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FdrugData                                   SourceData                                                 (Parm, OutParm, HasGetValueTypeHash)
	 * 		struct FMixProportionsStruct                       SourceMixProportions                                       (Parm, OutParm, HasGetValueTypeHash)
	 */
	void AworkStationEquipmentBase_C::verifySubstanceSource(bool* Proceed, bool* NameDiffers, struct FdrugData* SourceData, struct FMixProportionsStruct* SourceMixProportions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.verifySubstanceSource");
		
		AworkStationEquipmentBase_C_verifySubstanceSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Proceed != nullptr)
			*Proceed = params.Proceed;
		if (NameDiffers != nullptr)
			*NameDiffers = params.NameDiffers;
		if (SourceData != nullptr)
			*SourceData = params.SourceData;
		if (SourceMixProportions != nullptr)
			*SourceMixProportions = params.SourceMixProportions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.compareContent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FdrugData                                   NewData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		struct FMixProportionsStruct                       MixProportions                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               TheSame                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NameMissmatch                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AworkStationEquipmentBase_C::compareContent(const struct FdrugData& NewData, const struct FMixProportionsStruct& MixProportions, bool* TheSame, bool* NameMissmatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.compareContent");
		
		AworkStationEquipmentBase_C_compareContent_Params params {};
		params.NewData = NewData;
		params.MixProportions = MixProportions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TheSame != nullptr)
			*TheSame = params.TheSame;
		if (NameMissmatch != nullptr)
			*NameMissmatch = params.NameMissmatch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.clearEquipment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::clearEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.clearEquipment");
		
		AworkStationEquipmentBase_C_clearEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.quantityChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::quantityChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.quantityChanged");
		
		AworkStationEquipmentBase_C_quantityChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.addSubstancePopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AinteractiveBaseObject_C*                    substanceRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworkStationEquipmentBase_C::addSubstancePopup(class AinteractiveBaseObject_C* substanceRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.addSubstancePopup");
		
		AworkStationEquipmentBase_C_addSubstancePopup_Params params {};
		params.substanceRef = substanceRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.workFinished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::workFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.workFinished");
		
		AworkStationEquipmentBase_C_workFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.workCountdown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworkStationEquipmentBase_C::workCountdown(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.workCountdown");
		
		AworkStationEquipmentBase_C_workCountdown_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.startWorking
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::startWorking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.startWorking");
		
		AworkStationEquipmentBase_C_startWorking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.defaultHoldAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::defaultHoldAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.defaultHoldAction");
		
		AworkStationEquipmentBase_C_defaultHoldAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.storeEquipment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SkipRender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AworkStationEquipmentBase_C::storeEquipment(bool SkipRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.storeEquipment");
		
		AworkStationEquipmentBase_C_storeEquipment_Params params {};
		params.SkipRender = SkipRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.rearangeEquipment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::rearangeEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.rearangeEquipment");
		
		AworkStationEquipmentBase_C_rearangeEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.equipmentActivateReleaseButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::equipmentActivateReleaseButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.equipmentActivateReleaseButton");
		
		AworkStationEquipmentBase_C_equipmentActivateReleaseButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.subclassActivate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::subclassActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.subclassActivate");
		
		AworkStationEquipmentBase_C_subclassActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.equipmentActivation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::equipmentActivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.equipmentActivation");
		
		AworkStationEquipmentBase_C_equipmentActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.calcLineTracePoints
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::calcLineTracePoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.calcLineTracePoints");
		
		AworkStationEquipmentBase_C_calcLineTracePoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.checkCanFit
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canFit                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AworkStationEquipmentBase_C::checkCanFit(bool* canFit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.checkCanFit");
		
		AworkStationEquipmentBase_C_checkCanFit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canFit != nullptr)
			*canFit = params.canFit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.UserConstructionScript");
		
		AworkStationEquipmentBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.ReceiveBeginPlay");
		
		AworkStationEquipmentBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworkStationEquipmentBase_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.ReceiveTick");
		
		AworkStationEquipmentBase_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.initialSetup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FappartmentEquipment                        Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               Gizmo                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               fromHovered                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AworkStationEquipmentBase_C::initialSetup(const struct FappartmentEquipment& Data, bool Gizmo, bool fromHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.initialSetup");
		
		AworkStationEquipmentBase_C_initialSetup_Params params {};
		params.Data = Data;
		params.Gizmo = Gizmo;
		params.fromHovered = fromHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.verifyCorrectNaming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::verifyCorrectNaming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.verifyCorrectNaming");
		
		AworkStationEquipmentBase_C_verifyCorrectNaming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.selectMe
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::selectMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.selectMe");
		
		AworkStationEquipmentBase_C_selectMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.dumpContent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::dumpContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.dumpContent");
		
		AworkStationEquipmentBase_C_dumpContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class URamaSaveComponent*                          RamaSaveComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      LevelPackageName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AworkStationEquipmentBase_C::BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature");
		
		AworkStationEquipmentBase_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params params {};
		params.RamaSaveComponent = RamaSaveComponent;
		params.LevelPackageName = LevelPackageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.SubclassRamaLoad
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::SubclassRamaLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.SubclassRamaLoad");
		
		AworkStationEquipmentBase_C_SubclassRamaLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.GizmoSet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationEquipmentBase_C::GizmoSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.GizmoSet");
		
		AworkStationEquipmentBase_C_GizmoSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationEquipmentBase.workStationEquipmentBase_C.ExecuteUbergraph_workStationEquipmentBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworkStationEquipmentBase_C::ExecuteUbergraph_workStationEquipmentBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.ExecuteUbergraph_workStationEquipmentBase");
		
		AworkStationEquipmentBase_C_ExecuteUbergraph_workStationEquipmentBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AworkStationEquipmentBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AworkStationEquipmentBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass workStationEquipmentBase.workStationEquipmentBase_C");
		return ptr;
	}

}


