
#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function telephoneBP.telephoneBP_C.pushNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           PlaySound                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtelephoneBP_C::pushNotification(class UTexture2D* icon, const struct FText& Text, bool PlaySound)
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.pushNotification");

	AtelephoneBP_C_pushNotification_Params params;
	params.icon = icon;
	params.Text = Text;
	params.PlaySound = PlaySound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.interfaceBack
// (Public, BlueprintCallable, BlueprintEvent)

void AtelephoneBP_C::interfaceBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.interfaceBack");

	AtelephoneBP_C_interfaceBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.interfaceEnter
// (Public, BlueprintCallable, BlueprintEvent)

void AtelephoneBP_C::interfaceEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.interfaceEnter");

	AtelephoneBP_C_interfaceEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.playMessageSound
// (Public, BlueprintCallable, BlueprintEvent)

void AtelephoneBP_C::playMessageSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.playMessageSound");

	AtelephoneBP_C_playMessageSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.addListCall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   CallerName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 CallTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            callerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Declined                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtelephoneBP_C::addListCall(const struct FText& CallerName, const struct FString& CallTime, int callerID, bool Declined)
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.addListCall");

	AtelephoneBP_C_addListCall_Params params;
	params.CallerName = CallerName;
	params.CallTime = CallTime;
	params.callerID = callerID;
	params.Declined = Declined;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.pushNote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   noteText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void AtelephoneBP_C::pushNote(const struct FText& noteText)
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.pushNote");

	AtelephoneBP_C_pushNote_Params params;
	params.noteText = noteText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.pushMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            From                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            vcardID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtelephoneBP_C::pushMessage(int From, const struct FText& Message, int vcardID)
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.pushMessage");

	AtelephoneBP_C_pushMessage_Params params;
	params.From = From;
	params.Message = Message;
	params.vcardID = vcardID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.declineCall
// (Public, BlueprintCallable, BlueprintEvent)

void AtelephoneBP_C::declineCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.declineCall");

	AtelephoneBP_C_declineCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.acceptCall
// (Public, BlueprintCallable, BlueprintEvent)

void AtelephoneBP_C::acceptCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.acceptCall");

	AtelephoneBP_C_acceptCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.playRingtone
// (Public, BlueprintCallable, BlueprintEvent)

void AtelephoneBP_C::playRingtone()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.playRingtone");

	AtelephoneBP_C_playRingtone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.displayIncommingCall
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FcontactPersonStruct    personData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class USoundWave*              callSound                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 CallTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            callerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtelephoneBP_C::displayIncommingCall(const struct FcontactPersonStruct& personData, class USoundWave* callSound, const struct FString& CallTime, int callerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.displayIncommingCall");

	AtelephoneBP_C_displayIncommingCall_Params params;
	params.personData = personData;
	params.callSound = callSound;
	params.CallTime = CallTime;
	params.callerID = callerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AtelephoneBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.UserConstructionScript");

	AtelephoneBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.phoneNextSlide
// (BlueprintCallable, BlueprintEvent)

void AtelephoneBP_C::phoneNextSlide()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.phoneNextSlide");

	AtelephoneBP_C_phoneNextSlide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.phonePrevSlider
// (BlueprintCallable, BlueprintEvent)

void AtelephoneBP_C::phonePrevSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.phonePrevSlider");

	AtelephoneBP_C_phonePrevSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.endCall
// (BlueprintCallable, BlueprintEvent)

void AtelephoneBP_C::endCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.endCall");

	AtelephoneBP_C_endCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.hidePhone
// (BlueprintCallable, BlueprintEvent)

void AtelephoneBP_C::hidePhone()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.hidePhone");

	AtelephoneBP_C_hidePhone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.lockPhone
// (BlueprintCallable, BlueprintEvent)

void AtelephoneBP_C::lockPhone()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.lockPhone");

	AtelephoneBP_C_lockPhone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.showPhone
// (BlueprintCallable, BlueprintEvent)

void AtelephoneBP_C::showPhone()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.showPhone");

	AtelephoneBP_C_showPhone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.initialisePhone
// (BlueprintCallable, BlueprintEvent)

void AtelephoneBP_C::initialisePhone()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.initialisePhone");

	AtelephoneBP_C_initialisePhone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.unlockPhone
// (BlueprintCallable, BlueprintEvent)

void AtelephoneBP_C::unlockPhone()
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.unlockPhone");

	AtelephoneBP_C_unlockPhone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.displayCallSubtitle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtelephoneBP_C::displayCallSubtitle(float Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.displayCallSubtitle");

	AtelephoneBP_C_displayCallSubtitle_Params params;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telephoneBP.telephoneBP_C.ExecuteUbergraph_telephoneBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtelephoneBP_C::ExecuteUbergraph_telephoneBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function telephoneBP.telephoneBP_C.ExecuteUbergraph_telephoneBP");

	AtelephoneBP_C_ExecuteUbergraph_telephoneBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
