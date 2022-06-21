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
	 * 		Name   -> Function telephoneBP.telephoneBP_C.pushNotification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               PlaySound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AtelephoneBP_C::pushNotification(class UTexture2D* icon, const class FText& Text, bool PlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.pushNotification");
		
		AtelephoneBP_C_pushNotification_Params params {};
		params.icon = icon;
		params.Text = Text;
		params.PlaySound = PlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.interfaceBack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AtelephoneBP_C::interfaceBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.interfaceBack");
		
		AtelephoneBP_C_interfaceBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.interfaceEnter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AtelephoneBP_C::interfaceEnter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.interfaceEnter");
		
		AtelephoneBP_C_interfaceEnter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.playMessageSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AtelephoneBP_C::playMessageSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.playMessageSound");
		
		AtelephoneBP_C_playMessageSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.addListCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        CallerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      CallTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            callerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Declined                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AtelephoneBP_C::addListCall(const class FText& CallerName, const class FString& CallTime, int32_t callerID, bool Declined)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.addListCall");
		
		AtelephoneBP_C_addListCall_Params params {};
		params.CallerName = CallerName;
		params.CallTime = CallTime;
		params.callerID = callerID;
		params.Declined = Declined;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.pushNote
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        noteText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void AtelephoneBP_C::pushNote(const class FText& noteText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.pushNote");
		
		AtelephoneBP_C_pushNote_Params params {};
		params.noteText = noteText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.pushMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            vcardID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtelephoneBP_C::pushMessage(int32_t From, const class FText& Message, int32_t vcardID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.pushMessage");
		
		AtelephoneBP_C_pushMessage_Params params {};
		params.From = From;
		params.Message = Message;
		params.vcardID = vcardID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.declineCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AtelephoneBP_C::declineCall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.declineCall");
		
		AtelephoneBP_C_declineCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.acceptCall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AtelephoneBP_C::acceptCall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.acceptCall");
		
		AtelephoneBP_C_acceptCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.playRingtone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AtelephoneBP_C::playRingtone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.playRingtone");
		
		AtelephoneBP_C_playRingtone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.displayIncommingCall
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FcontactPersonStruct                        personData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class USoundWave*                                  callSound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CallTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            callerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtelephoneBP_C::displayIncommingCall(const struct FcontactPersonStruct& personData, class USoundWave* callSound, const class FString& CallTime, int32_t callerID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.displayIncommingCall");
		
		AtelephoneBP_C_displayIncommingCall_Params params {};
		params.personData = personData;
		params.callSound = callSound;
		params.CallTime = CallTime;
		params.callerID = callerID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AtelephoneBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.UserConstructionScript");
		
		AtelephoneBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.phoneNextSlide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AtelephoneBP_C::phoneNextSlide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.phoneNextSlide");
		
		AtelephoneBP_C_phoneNextSlide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.phonePrevSlider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AtelephoneBP_C::phonePrevSlider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.phonePrevSlider");
		
		AtelephoneBP_C_phonePrevSlider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.endCall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AtelephoneBP_C::endCall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.endCall");
		
		AtelephoneBP_C_endCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.hidePhone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AtelephoneBP_C::hidePhone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.hidePhone");
		
		AtelephoneBP_C_hidePhone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.lockPhone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AtelephoneBP_C::lockPhone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.lockPhone");
		
		AtelephoneBP_C_lockPhone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.showPhone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AtelephoneBP_C::showPhone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.showPhone");
		
		AtelephoneBP_C_showPhone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.initialisePhone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AtelephoneBP_C::initialisePhone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.initialisePhone");
		
		AtelephoneBP_C_initialisePhone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.unlockPhone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AtelephoneBP_C::unlockPhone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.unlockPhone");
		
		AtelephoneBP_C_unlockPhone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.displayCallSubtitle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Length                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtelephoneBP_C::displayCallSubtitle(float Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.displayCallSubtitle");
		
		AtelephoneBP_C_displayCallSubtitle_Params params {};
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function telephoneBP.telephoneBP_C.ExecuteUbergraph_telephoneBP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtelephoneBP_C::ExecuteUbergraph_telephoneBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.ExecuteUbergraph_telephoneBP");
		
		AtelephoneBP_C_ExecuteUbergraph_telephoneBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AtelephoneBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AtelephoneBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass telephoneBP.telephoneBP_C");
		return ptr;
	}

}


