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
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.Get_btnAddToOrder_bIsEnabled_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UshadyCommInterface_C::Get_btnAddToOrder_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Get_btnAddToOrder_bIsEnabled_1");
		
		UshadyCommInterface_C_Get_btnAddToOrder_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.GetText_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UshadyCommInterface_C::GetText_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.GetText_1");
		
		UshadyCommInterface_C_GetText_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.PopulatePTCCombo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::PopulatePTCCombo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.PopulatePTCCombo");
		
		UshadyCommInterface_C_PopulatePTCCombo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.CloseArrestList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::CloseArrestList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.CloseArrestList");
		
		UshadyCommInterface_C_CloseArrestList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.OpenArrestList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::OpenArrestList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.OpenArrestList");
		
		UshadyCommInterface_C_OpenArrestList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.Get_TextBlock_28_Text_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UshadyCommInterface_C::Get_TextBlock_28_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Get_TextBlock_28_Text_1");
		
		UshadyCommInterface_C_Get_TextBlock_28_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.determineSector
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      AreaNam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            SectorNum                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UshadyCommInterface_C::determineSector(const class FString& AreaNam, int32_t* SectorNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.determineSector");
		
		UshadyCommInterface_C_determineSector_Params params {};
		params.AreaNam = AreaNam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SectorNum != nullptr)
			*SectorNum = params.SectorNum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.toggleAreaDetails
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      AreaString                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Unlocked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UshadyCommInterface_C::toggleAreaDetails(bool Show, const class FString& AreaString, bool Unlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.toggleAreaDetails");
		
		UshadyCommInterface_C_toggleAreaDetails_Params params {};
		params.Show = Show;
		params.AreaString = AreaString;
		params.Unlocked = Unlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.spawnSeedGuy
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::spawnSeedGuy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.spawnSeedGuy");
		
		UshadyCommInterface_C_spawnSeedGuy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.checkUserResetReadMessages
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            UserID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UshadyCommInterface_C::checkUserResetReadMessages(int32_t UserID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.checkUserResetReadMessages");
		
		UshadyCommInterface_C_checkUserResetReadMessages_Params params {};
		params.UserID = UserID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.Get_txtStatusClientSatisfaction_ToolTipWidget_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UshadyCommInterface_C::Get_txtStatusClientSatisfaction_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Get_txtStatusClientSatisfaction_ToolTipWidget_1");
		
		UshadyCommInterface_C_Get_txtStatusClientSatisfaction_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.Get_txtStatusDeliveryTime_ToolTipWidget_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UshadyCommInterface_C::Get_txtStatusDeliveryTime_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Get_txtStatusDeliveryTime_ToolTipWidget_1");
		
		UshadyCommInterface_C_Get_txtStatusDeliveryTime_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.countAverageSatisfaction
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<bool>                                       clientsLost                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<float>                                      ClientSatisfaction                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<int32_t>                                    ClientNumSales                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UshadyCommInterface_C::countAverageSatisfaction(TArray<bool>* clientsLost, TArray<float>* ClientSatisfaction, TArray<int32_t>* ClientNumSales)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.countAverageSatisfaction");
		
		UshadyCommInterface_C_countAverageSatisfaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (clientsLost != nullptr)
			*clientsLost = params.clientsLost;
		if (ClientSatisfaction != nullptr)
			*ClientSatisfaction = params.ClientSatisfaction;
		if (ClientNumSales != nullptr)
			*ClientNumSales = params.ClientNumSales;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_4
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UshadyCommInterface_C::GetToolTipWidget_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_4");
		
		UshadyCommInterface_C_GetToolTipWidget_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_3
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UshadyCommInterface_C::GetToolTipWidget_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_3");
		
		UshadyCommInterface_C_GetToolTipWidget_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_2
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UshadyCommInterface_C::GetToolTipWidget_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_2");
		
		UshadyCommInterface_C_GetToolTipWidget_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.renderAreas
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::renderAreas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.renderAreas");
		
		UshadyCommInterface_C_renderAreas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.countAverageDeliveryTime
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<bool>                                       OrdersClosed                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<float>                                      DeliveryTimes                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UshadyCommInterface_C::countAverageDeliveryTime(TArray<bool>* OrdersClosed, TArray<float>* DeliveryTimes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.countAverageDeliveryTime");
		
		UshadyCommInterface_C_countAverageDeliveryTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrdersClosed != nullptr)
			*OrdersClosed = params.OrdersClosed;
		if (DeliveryTimes != nullptr)
			*DeliveryTimes = params.DeliveryTimes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.renderWarnings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::renderWarnings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.renderWarnings");
		
		UshadyCommInterface_C_renderWarnings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UshadyCommInterface_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_1");
		
		UshadyCommInterface_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.spawnEquipmentGuy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::spawnEquipmentGuy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.spawnEquipmentGuy");
		
		UshadyCommInterface_C_spawnEquipmentGuy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.spawnLaunderingGuy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::spawnLaunderingGuy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.spawnLaunderingGuy");
		
		UshadyCommInterface_C_spawnLaunderingGuy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.generateMeetingPhrase
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Decline                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        QuestionText                                               (Parm, OutParm)
	 */
	void UshadyCommInterface_C::generateMeetingPhrase(bool Response, bool Decline, class FText* QuestionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.generateMeetingPhrase");
		
		UshadyCommInterface_C_generateMeetingPhrase_Params params {};
		params.Response = Response;
		params.Decline = Decline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuestionText != nullptr)
			*QuestionText = params.QuestionText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.renderGroupContacts
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AcontactsManager_C*                          contactsManager                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    idsGroup                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UshadyCommInterface_C::renderGroupContacts(class AcontactsManager_C* contactsManager, TArray<int32_t>* idsGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.renderGroupContacts");
		
		UshadyCommInterface_C_renderGroupContacts_Params params {};
		params.contactsManager = contactsManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (idsGroup != nullptr)
			*idsGroup = params.idsGroup;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.putContactListSection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Nam                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UshadyCommInterface_C::putContactListSection(const class FText& Nam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.putContactListSection");
		
		UshadyCommInterface_C_putContactListSection_Params params {};
		params.Nam = Nam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.clearNewMessages
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::clearNewMessages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.clearNewMessages");
		
		UshadyCommInterface_C_clearNewMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.findSalePointByAreaID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      stringID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADrugSalePoint_C*                            SalePoint                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UshadyCommInterface_C::findSalePointByAreaID(const class FString& stringID, struct FVector* Location, class ADrugSalePoint_C** SalePoint, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.findSalePointByAreaID");
		
		UshadyCommInterface_C_findSalePointByAreaID_Params params {};
		params.stringID = stringID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (SalePoint != nullptr)
			*SalePoint = params.SalePoint;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.spawnClientOnMap
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AsalesManager_C*                             SaleManager                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OrderId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UshadyCommInterface_C::spawnClientOnMap(class AsalesManager_C* SaleManager, int32_t OrderId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.spawnClientOnMap");
		
		UshadyCommInterface_C_spawnClientOnMap_Params params {};
		params.SaleManager = SaleManager;
		params.OrderId = OrderId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.checkOptionAvailability
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::checkOptionAvailability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.checkOptionAvailability");
		
		UshadyCommInterface_C_checkOptionAvailability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.switchContact
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            newContactID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UshadyCommInterface_C::switchContact(int32_t newContactID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.switchContact");
		
		UshadyCommInterface_C_switchContact_Params params {};
		params.newContactID = newContactID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.Get_btnBankAccount_ToolTipWidget_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UshadyCommInterface_C::Get_btnBankAccount_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Get_btnBankAccount_ToolTipWidget_1");
		
		UshadyCommInterface_C_Get_btnBankAccount_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.Get_txtWalletCryptoPrice_ToolTipWidget_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UshadyCommInterface_C::Get_txtWalletCryptoPrice_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Get_txtWalletCryptoPrice_ToolTipWidget_1");
		
		UshadyCommInterface_C_Get_txtWalletCryptoPrice_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.Get_txtWalletCrypto_ToolTipWidget_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UshadyCommInterface_C::Get_txtWalletCrypto_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Get_txtWalletCrypto_ToolTipWidget_1");
		
		UshadyCommInterface_C_Get_txtWalletCrypto_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.updateWallet
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::updateWallet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.updateWallet");
		
		UshadyCommInterface_C_updateWallet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.renderPriceList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::renderPriceList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.renderPriceList");
		
		UshadyCommInterface_C_renderPriceList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.renderMessages
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            UserID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UshadyCommInterface_C::renderMessages(int32_t UserID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.renderMessages");
		
		UshadyCommInterface_C_renderMessages_Params params {};
		params.UserID = UserID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.renderDrugs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AmainComputer_C*                             Computer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UshadyCommInterface_C::renderDrugs(class AmainComputer_C* Computer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.renderDrugs");
		
		UshadyCommInterface_C_renderDrugs_Params params {};
		params.Computer = Computer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.renderContacts
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::renderContacts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.renderContacts");
		
		UshadyCommInterface_C_renderContacts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UshadyCommInterface_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Construct");
		
		UshadyCommInterface_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UshadyCommInterface_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Tick");
		
		UshadyCommInterface_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AmainComputer_C*                             parentRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UshadyCommInterface_C::Setup(class AmainComputer_C* parentRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Setup");
		
		UshadyCommInterface_C_Setup_Params params {};
		params.parentRef = parentRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnOpenOptions_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__btnOpenOptions_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnOpenOptions_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__btnOpenOptions_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnSendMessage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__btnSendMessage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnSendMessage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__btnSendMessage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnCloseOptions_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__btnCloseOptions_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnCloseOptions_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__btnCloseOptions_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__Button_3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.closeOptions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::closeOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.closeOptions");
		
		UshadyCommInterface_C_closeOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.showPriceEdit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DrugIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UshadyCommInterface_C::showPriceEdit(int32_t DrugIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.showPriceEdit");
		
		UshadyCommInterface_C_showPriceEdit_Params params {};
		params.DrugIndex = DrugIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__drugPriceEditInput_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UshadyCommInterface_C::BndEvt__drugPriceEditInput_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__drugPriceEditInput_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__drugPriceEditInput_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__Button_4_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnBankAccount_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__btnBankAccount_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnBankAccount_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__btnBankAccount_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__BTNuSERoPTIONS_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__BTNuSERoPTIONS_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__BTNuSERoPTIONS_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__BTNuSERoPTIONS_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.hideUserOptions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::hideUserOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.hideUserOptions");
		
		UshadyCommInterface_C_hideUserOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnConfirmOrder_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__btnConfirmOrder_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnConfirmOrder_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__btnConfirmOrder_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnHire_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__btnHire_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnHire_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__btnHire_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnDontHire_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__btnDontHire_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnDontHire_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__btnDontHire_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnDeclineOrder_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__btnDeclineOrder_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnDeclineOrder_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__btnDeclineOrder_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnHireAdditional_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__btnHireAdditional_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnHireAdditional_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__btnHireAdditional_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.openUserOptionsDialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::openUserOptionsDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.openUserOptionsDialogue");
		
		UshadyCommInterface_C_openUserOptionsDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnEddieCash_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__btnEddieCash_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnEddieCash_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__btnEddieCash_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnHideoutsOffer_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__btnHideoutsOffer_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnHideoutsOffer_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__btnHideoutsOffer_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnAskMeeting_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__btnAskMeeting_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnAskMeeting_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__btnAskMeeting_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnDesktop_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__btnDesktop_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnDesktop_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__btnDesktop_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.UpdateDesktop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::UpdateDesktop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.UpdateDesktop");
		
		UshadyCommInterface_C_UpdateDesktop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.meetingResponse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::meetingResponse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.meetingResponse");
		
		UshadyCommInterface_C_meetingResponse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.SendDealerMsg
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::SendDealerMsg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.SendDealerMsg");
		
		UshadyCommInterface_C_SendDealerMsg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.QueueDealerResponse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Positive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            DealerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UshadyCommInterface_C::QueueDealerResponse(bool Positive, int32_t DealerID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.QueueDealerResponse");
		
		UshadyCommInterface_C_QueueDealerResponse_Params params {};
		params.Positive = Positive;
		params.DealerID = DealerID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.randomWobble
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::randomWobble()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.randomWobble");
		
		UshadyCommInterface_C_randomWobble_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.OpenBuyPTC
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommInterface_C::OpenBuyPTC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.OpenBuyPTC");
		
		UshadyCommInterface_C_OpenBuyPTC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnBuyPtc01_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__btnBuyPtc01_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnBuyPtc01_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__btnBuyPtc01_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__orderDropOverlay_K2Node_ComponentBoundEvent_25_ClickedBuytPTC__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__orderDropOverlay_K2Node_ComponentBoundEvent_25_ClickedBuytPTC__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__orderDropOverlay_K2Node_ComponentBoundEvent_25_ClickedBuytPTC__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__orderDropOverlay_K2Node_ComponentBoundEvent_25_ClickedBuytPTC__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__BuyPtcSourceCombo_K2Node_ComponentBoundEvent_26_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UshadyCommInterface_C::BndEvt__BuyPtcSourceCombo_K2Node_ComponentBoundEvent_26_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__BuyPtcSourceCombo_K2Node_ComponentBoundEvent_26_OnSelectionChangedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__BuyPtcSourceCombo_K2Node_ComponentBoundEvent_26_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnPtcCancel_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UshadyCommInterface_C::BndEvt__btnPtcCancel_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnPtcCancel_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature");
		
		UshadyCommInterface_C_BndEvt__btnPtcCancel_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UshadyCommInterface_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.Destruct");
		
		UshadyCommInterface_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommInterface.shadyCommInterface_C.ExecuteUbergraph_shadyCommInterface
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UshadyCommInterface_C::ExecuteUbergraph_shadyCommInterface(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommInterface.shadyCommInterface_C.ExecuteUbergraph_shadyCommInterface");
		
		UshadyCommInterface_C_ExecuteUbergraph_shadyCommInterface_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UshadyCommInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UshadyCommInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass shadyCommInterface.shadyCommInterface_C");
		return ptr;
	}

}


