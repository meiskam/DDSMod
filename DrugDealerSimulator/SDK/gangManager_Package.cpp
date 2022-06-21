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
	 * 		Name   -> Function gangManager.gangManager_C.gangLevelLimitRaise
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AgangManager_C::gangLevelLimitRaise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.gangLevelLimitRaise");
		
		AgangManager_C_gangLevelLimitRaise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.reconstructOrderFlow
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AgangManager_C::reconstructOrderFlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.reconstructOrderFlow");
		
		AgangManager_C_reconstructOrderFlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.reconstructDropRef
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AgangManager_C::reconstructDropRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.reconstructDropRef");
		
		AgangManager_C_reconstructDropRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.modifyGangSatisfaction
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AgangManager_C::modifyGangSatisfaction(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.modifyGangSatisfaction");
		
		AgangManager_C_modifyGangSatisfaction_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.restartOrderTimer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AgangManager_C::restartOrderTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.restartOrderTimer");
		
		AgangManager_C_restartOrderTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.getGangOrderMessageFormat
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        MessageFormat                                              (Parm, OutParm)
	 */
	void AgangManager_C::getGangOrderMessageFormat(class FText* MessageFormat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.getGangOrderMessageFormat");
		
		AgangManager_C_getGangOrderMessageFormat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MessageFormat != nullptr)
			*MessageFormat = params.MessageFormat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.getFinaliseTaskDescription
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void AgangManager_C::getFinaliseTaskDescription(class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.getFinaliseTaskDescription");
		
		AgangManager_C_getFinaliseTaskDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.testDropForQuantity
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AgangManager_C::testDropForQuantity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.testDropForQuantity");
		
		AgangManager_C_testDropForQuantity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.checkOrderDrop
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OrderOK                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AgangManager_C::checkOrderDrop(bool* OrderOK)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.checkOrderDrop");
		
		AgangManager_C_checkOrderDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrderOK != nullptr)
			*OrderOK = params.OrderOK;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.sendGangOrder
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SkipMessage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ExpectedDrugID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ExpectedDrugMinQuality                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            packageSizes                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            packageQuantity                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AgangManager_C::sendGangOrder(bool SkipMessage, int32_t ExpectedDrugID, float ExpectedDrugMinQuality, int32_t packageSizes, int32_t packageQuantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.sendGangOrder");
		
		AgangManager_C_sendGangOrder_Params params {};
		params.SkipMessage = SkipMessage;
		params.ExpectedDrugID = ExpectedDrugID;
		params.ExpectedDrugMinQuality = ExpectedDrugMinQuality;
		params.packageSizes = packageSizes;
		params.packageQuantity = packageQuantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AgangManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.UserConstructionScript");
		
		AgangManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AgangManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.ReceiveBeginPlay");
		
		AgangManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AgangManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.ReceiveTick");
		
		AgangManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.unlockKeijiGang
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AgangManager_C::unlockKeijiGang()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.unlockKeijiGang");
		
		AgangManager_C_unlockKeijiGang_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.unlockBallenaGang
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AgangManager_C::unlockBallenaGang()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.unlockBallenaGang");
		
		AgangManager_C_unlockBallenaGang_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.retryInitiate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AgangManager_C::retryInitiate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.retryInitiate");
		
		AgangManager_C_retryInitiate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.checkGangPlaceStatus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AgangManager_C::checkGangPlaceStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.checkGangPlaceStatus");
		
		AgangManager_C_checkGangPlaceStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.gangMessageResponse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void AgangManager_C::gangMessageResponse(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.gangMessageResponse");
		
		AgangManager_C_gangMessageResponse_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.spawnGangMember
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AgangManager_C::spawnGangMember()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.spawnGangMember");
		
		AgangManager_C_spawnGangMember_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.constructNewGangOrder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AgangManager_C::constructNewGangOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.constructNewGangOrder");
		
		AgangManager_C_constructNewGangOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.checkDeliveryTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AgangManager_C::checkDeliveryTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.checkDeliveryTime");
		
		AgangManager_C_checkDeliveryTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.unlockDeliveryMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AgangManager_C::unlockDeliveryMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.unlockDeliveryMessage");
		
		AgangManager_C_unlockDeliveryMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.TestGangOrder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AgangManager_C::TestGangOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.TestGangOrder");
		
		AgangManager_C_TestGangOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.TestGangMultiplier
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rep                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AgangManager_C::TestGangMultiplier(int32_t Level, float Rep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.TestGangMultiplier");
		
		AgangManager_C_TestGangMultiplier_Params params {};
		params.Level = Level;
		params.Rep = Rep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function gangManager.gangManager_C.ExecuteUbergraph_gangManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AgangManager_C::ExecuteUbergraph_gangManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.ExecuteUbergraph_gangManager");
		
		AgangManager_C_ExecuteUbergraph_gangManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AgangManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AgangManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass gangManager.gangManager_C");
		return ptr;
	}

}


