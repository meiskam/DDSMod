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
	 * 		Name   -> Function playerHUD.playerHUD_C.UpdateHP
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HpLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UplayerHUD_C::UpdateHP(float HpLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.UpdateHP");
		
		UplayerHUD_C_UpdateHP_Params params {};
		params.HpLevel = HpLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerHUD.playerHUD_C.Get_txtActionBtn_ColorAndOpacity_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UplayerHUD_C::Get_txtActionBtn_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.Get_txtActionBtn_ColorAndOpacity_1");
		
		UplayerHUD_C_Get_txtActionBtn_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerHUD.playerHUD_C.updateDebugPanel
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UplayerHUD_C::updateDebugPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.updateDebugPanel");
		
		UplayerHUD_C_updateDebugPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerHUD.playerHUD_C.renderAwaitingOrders
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UplayerHUD_C::renderAwaitingOrders()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.renderAwaitingOrders");
		
		UplayerHUD_C_renderAwaitingOrders_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerHUD.playerHUD_C.refreshCompass
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UplayerHUD_C::refreshCompass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.refreshCompass");
		
		UplayerHUD_C_refreshCompass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerHUD.playerHUD_C.updateCompass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UplayerHUD_C::updateCompass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.updateCompass");
		
		UplayerHUD_C_updateCompass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerHUD.playerHUD_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UplayerHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.Construct");
		
		UplayerHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerHUD.playerHUD_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UplayerHUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.Tick");
		
		UplayerHUD_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerHUD.playerHUD_C.showAction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        KeyName                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ObjectName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UplayerHUD_C::showAction(const class FText& KeyName, const class FText& ActionName, const class FText& ObjectName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.showAction");
		
		UplayerHUD_C_showAction_Params params {};
		params.KeyName = KeyName;
		params.ActionName = ActionName;
		params.ObjectName = ObjectName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerHUD.playerHUD_C.hideAction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UplayerHUD_C::hideAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.hideAction");
		
		UplayerHUD_C_hideAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerHUD.playerHUD_C.toggleSterowanie
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UplayerHUD_C::toggleSterowanie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.toggleSterowanie");
		
		UplayerHUD_C_toggleSterowanie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerHUD.playerHUD_C.displayQuickMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UplayerHUD_C::displayQuickMessage(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.displayQuickMessage");
		
		UplayerHUD_C_displayQuickMessage_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerHUD.playerHUD_C.unlockQuickMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UplayerHUD_C::unlockQuickMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.unlockQuickMessage");
		
		UplayerHUD_C_unlockQuickMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerHUD.playerHUD_C.updateTest
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UplayerHUD_C::updateTest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.updateTest");
		
		UplayerHUD_C_updateTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerHUD.playerHUD_C.updateMiniTaskList
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UplayerHUD_C::updateMiniTaskList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.updateMiniTaskList");
		
		UplayerHUD_C_updateMiniTaskList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerHUD.playerHUD_C.checkShowTaskList
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UplayerHUD_C::checkShowTaskList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.checkShowTaskList");
		
		UplayerHUD_C_checkShowTaskList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerHUD.playerHUD_C.breakListRender
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UplayerHUD_C::breakListRender()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.breakListRender");
		
		UplayerHUD_C_breakListRender_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerHUD.playerHUD_C.updateWeedPanel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ArentAppartmentArea_C*                       HideoutRef                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InAppartment                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UplayerHUD_C::updateWeedPanel(class ArentAppartmentArea_C* HideoutRef, bool InAppartment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.updateWeedPanel");
		
		UplayerHUD_C_updateWeedPanel_Params params {};
		params.HideoutRef = HideoutRef;
		params.InAppartment = InAppartment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerHUD.playerHUD_C.refreshActiveColor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UplayerHUD_C::refreshActiveColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.refreshActiveColor");
		
		UplayerHUD_C_refreshActiveColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerHUD.playerHUD_C.ExecuteUbergraph_playerHUD
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UplayerHUD_C::ExecuteUbergraph_playerHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.ExecuteUbergraph_playerHUD");
		
		UplayerHUD_C_ExecuteUbergraph_playerHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UplayerHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UplayerHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass playerHUD.playerHUD_C");
		return ptr;
	}

}


