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
	 * 		Name   -> Function telephoneWidget.telephoneWidget_C.renderNotifications
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UtelephoneWidget_C::renderNotifications()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.renderNotifications");
		
		UtelephoneWidget_C_renderNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneWidget.telephoneWidget_C.renderMessages
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AtelephoneBP_C*                              phoneRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               renderUserMsg                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UserID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UtelephoneWidget_C::renderMessages(class AtelephoneBP_C* phoneRef, bool renderUserMsg, int32_t UserID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.renderMessages");
		
		UtelephoneWidget_C_renderMessages_Params params {};
		params.phoneRef = phoneRef;
		params.renderUserMsg = renderUserMsg;
		params.UserID = UserID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneWidget.telephoneWidget_C.renderCallList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AtelephoneBP_C*                              phoneRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UtelephoneWidget_C::renderCallList(class AtelephoneBP_C* phoneRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.renderCallList");
		
		UtelephoneWidget_C_renderCallList_Params params {};
		params.phoneRef = phoneRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneWidget.telephoneWidget_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UtelephoneWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.Tick");
		
		UtelephoneWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneWidget.telephoneWidget_C.slideNext
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UtelephoneWidget_C::slideNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.slideNext");
		
		UtelephoneWidget_C_slideNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneWidget.telephoneWidget_C.slidePrevious
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UtelephoneWidget_C::slidePrevious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.slidePrevious");
		
		UtelephoneWidget_C_slidePrevious_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneWidget.telephoneWidget_C.setSlide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            slideNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UtelephoneWidget_C::setSlide(int32_t slideNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.setSlide");
		
		UtelephoneWidget_C_setSlide_Params params {};
		params.slideNum = slideNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneWidget.telephoneWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UtelephoneWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.Construct");
		
		UtelephoneWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneWidget.telephoneWidget_C.hideCallWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UtelephoneWidget_C::hideCallWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.hideCallWidget");
		
		UtelephoneWidget_C_hideCallWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneWidget.telephoneWidget_C.showCallWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FcontactPersonStruct                        userData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UtelephoneWidget_C::showCallWidget(const struct FcontactPersonStruct& userData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.showCallWidget");
		
		UtelephoneWidget_C_showCallWidget_Params params {};
		params.userData = userData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneWidget.telephoneWidget_C.callAccepted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UtelephoneWidget_C::callAccepted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.callAccepted");
		
		UtelephoneWidget_C_callAccepted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneWidget.telephoneWidget_C.callTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UtelephoneWidget_C::callTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.callTick");
		
		UtelephoneWidget_C_callTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneWidget.telephoneWidget_C.updateTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UtelephoneWidget_C::updateTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.updateTime");
		
		UtelephoneWidget_C_updateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneWidget.telephoneWidget_C.ExecuteUbergraph_telephoneWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UtelephoneWidget_C::ExecuteUbergraph_telephoneWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneWidget.telephoneWidget_C.ExecuteUbergraph_telephoneWidget");
		
		UtelephoneWidget_C_ExecuteUbergraph_telephoneWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UtelephoneWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UtelephoneWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass telephoneWidget.telephoneWidget_C");
		return ptr;
	}

}


