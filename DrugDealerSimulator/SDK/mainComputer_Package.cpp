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
	 * 		Name   -> Function mainComputer.mainComputer_C.GetPlayerDebt
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              OutDebt                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AmainComputer_C::GetPlayerDebt(float* OutDebt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.GetPlayerDebt");
		
		AmainComputer_C_GetPlayerDebt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDebt != nullptr)
			*OutDebt = params.OutDebt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.GetPlayerOrderLimit
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Limit                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AmainComputer_C::GetPlayerOrderLimit(float* Limit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.GetPlayerOrderLimit");
		
		AmainComputer_C_GetPlayerOrderLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Limit != nullptr)
			*Limit = params.Limit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.SendLaunderPayment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AmainComputer_C::SendLaunderPayment(float Amount, bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.SendLaunderPayment");
		
		AmainComputer_C_SendLaunderPayment_Params params {};
		params.Amount = Amount;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.AddMoneyToLaunder
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AmainComputer_C::AddMoneyToLaunder(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.AddMoneyToLaunder");
		
		AmainComputer_C_AddMoneyToLaunder_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.ExpandRama
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AmainComputer_C::ExpandRama()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.ExpandRama");
		
		AmainComputer_C_ExpandRama_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.reconstructDrugOffer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AmainComputer_C::reconstructDrugOffer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.reconstructDrugOffer");
		
		AmainComputer_C_reconstructDrugOffer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.getDrugSizeWeight
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            packageGrams                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              packageSize                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              packageWeight                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AmainComputer_C::getDrugSizeWeight(int32_t packageGrams, float* packageSize, float* packageWeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.getDrugSizeWeight");
		
		AmainComputer_C_getDrugSizeWeight_Params params {};
		params.packageGrams = packageGrams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (packageSize != nullptr)
			*packageSize = params.packageSize;
		if (packageWeight != nullptr)
			*packageWeight = params.packageWeight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.changePrices
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AmainComputer_C::changePrices()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.changePrices");
		
		AmainComputer_C_changePrices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.generateInitialBankHistory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AmainComputer_C::generateInitialBankHistory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.generateInitialBankHistory");
		
		AmainComputer_C_generateInitialBankHistory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.newBankOperation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Income                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        SourceName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Notify                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Legal                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AmainComputer_C::newBankOperation(bool Income, float Amount, const class FText& Title, const class FText& SourceName, bool Notify, bool Legal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.newBankOperation");
		
		AmainComputer_C_newBankOperation_Params params {};
		params.Income = Income;
		params.Amount = Amount;
		params.Title = Title;
		params.SourceName = SourceName;
		params.Notify = Notify;
		params.Legal = Legal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.checkNewDrugAvailability
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AmainComputer_C::checkNewDrugAvailability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.checkNewDrugAvailability");
		
		AmainComputer_C_checkNewDrugAvailability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.addUserMessage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            UserID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               PlayerMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AmainComputer_C::addUserMessage(int32_t UserID, const class FText& Text, bool PlayerMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.addUserMessage");
		
		AmainComputer_C_addUserMessage_Params params {};
		params.UserID = UserID;
		params.Text = Text;
		params.PlayerMessage = PlayerMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.getOrderRefByID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AorderInstance_C*                            orderInstance                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AmainComputer_C::getOrderRefByID(int32_t ID, class AorderInstance_C** orderInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.getOrderRefByID");
		
		AmainComputer_C_getOrderRefByID_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (orderInstance != nullptr)
			*orderInstance = params.orderInstance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.constructMessageSentence
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LastIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BeforeLastIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FdrugData                                   drugData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               isSingle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AmainComputer_C::constructMessageSentence(bool LastIndex, bool BeforeLastIndex, int32_t Quantity, const struct FdrugData& drugData, bool isSingle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.constructMessageSentence");
		
		AmainComputer_C_constructMessageSentence_Params params {};
		params.LastIndex = LastIndex;
		params.BeforeLastIndex = BeforeLastIndex;
		params.Quantity = Quantity;
		params.drugData = drugData;
		params.isSingle = isSingle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.sendNewOrder
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FdrugData>                           drugData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class FName>                                DrugIDs                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<int32_t>                                    drugQuantities                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AmainComputer_C::sendNewOrder(TArray<struct FdrugData>* drugData, TArray<class FName>* DrugIDs, TArray<int32_t>* drugQuantities)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.sendNewOrder");
		
		AmainComputer_C_sendNewOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (drugData != nullptr)
			*drugData = params.drugData;
		if (DrugIDs != nullptr)
			*DrugIDs = params.DrugIDs;
		if (drugQuantities != nullptr)
			*drugQuantities = params.drugQuantities;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AmainComputer_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.UserConstructionScript");
		
		AmainComputer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AmainComputer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.ReceiveBeginPlay");
		
		AmainComputer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AmainComputer_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.ReceiveTick");
		
		AmainComputer_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.openComputer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AmainComputer_C::openComputer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.openComputer");
		
		AmainComputer_C_openComputer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.prepareOrderResponse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AmainComputer_C::prepareOrderResponse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.prepareOrderResponse");
		
		AmainComputer_C_prepareOrderResponse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.ActivateComputer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AmainComputer_C::ActivateComputer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.ActivateComputer");
		
		AmainComputer_C_ActivateComputer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.checkBenefitPayment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AmainComputer_C::checkBenefitPayment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.checkBenefitPayment");
		
		AmainComputer_C_checkBenefitPayment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.checkIllegalIncome
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AmainComputer_C::checkIllegalIncome()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.checkIllegalIncome");
		
		AmainComputer_C_checkIllegalIncome_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.addPsychedelicsOffer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AmainComputer_C::addPsychedelicsOffer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.addPsychedelicsOffer");
		
		AmainComputer_C_addPsychedelicsOffer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class URamaSaveComponent*                          RamaSaveComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      LevelPackageName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AmainComputer_C::BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature");
		
		AmainComputer_C_BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params params {};
		params.RamaSaveComponent = RamaSaveComponent;
		params.LevelPackageName = LevelPackageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.RetryIllegalReminder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AmainComputer_C::RetryIllegalReminder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.RetryIllegalReminder");
		
		AmainComputer_C_RetryIllegalReminder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainComputer.mainComputer_C.ExecuteUbergraph_mainComputer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AmainComputer_C::ExecuteUbergraph_mainComputer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainComputer.mainComputer_C.ExecuteUbergraph_mainComputer");
		
		AmainComputer_C_ExecuteUbergraph_mainComputer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AmainComputer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AmainComputer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass mainComputer.mainComputer_C");
		return ptr;
	}

}


