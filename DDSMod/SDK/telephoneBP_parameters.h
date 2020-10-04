#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function telephoneBP.telephoneBP_C.pushNotification
struct AtelephoneBP_C_pushNotification_Params
{
	class UTexture2D*                                  Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               PlaySound;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function telephoneBP.telephoneBP_C.interfaceBack
struct AtelephoneBP_C_interfaceBack_Params
{
};

// Function telephoneBP.telephoneBP_C.interfaceEnter
struct AtelephoneBP_C_interfaceEnter_Params
{
};

// Function telephoneBP.telephoneBP_C.playMessageSound
struct AtelephoneBP_C_playMessageSound_Params
{
};

// Function telephoneBP.telephoneBP_C.addListCall
struct AtelephoneBP_C_addListCall_Params
{
	struct FText                                       CallerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     CallTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                callerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Declined;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function telephoneBP.telephoneBP_C.pushNote
struct AtelephoneBP_C_pushNote_Params
{
	struct FText                                       noteText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function telephoneBP.telephoneBP_C.pushMessage
struct AtelephoneBP_C_pushMessage_Params
{
	int                                                From;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                vcardID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function telephoneBP.telephoneBP_C.declineCall
struct AtelephoneBP_C_declineCall_Params
{
};

// Function telephoneBP.telephoneBP_C.acceptCall
struct AtelephoneBP_C_acceptCall_Params
{
};

// Function telephoneBP.telephoneBP_C.playRingtone
struct AtelephoneBP_C_playRingtone_Params
{
};

// Function telephoneBP.telephoneBP_C.displayIncommingCall
struct AtelephoneBP_C_displayIncommingCall_Params
{
	struct FcontactPersonStruct                        personData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class USoundWave*                                  callSound;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CallTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                callerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function telephoneBP.telephoneBP_C.UserConstructionScript
struct AtelephoneBP_C_UserConstructionScript_Params
{
};

// Function telephoneBP.telephoneBP_C.phoneNextSlide
struct AtelephoneBP_C_phoneNextSlide_Params
{
};

// Function telephoneBP.telephoneBP_C.phonePrevSlider
struct AtelephoneBP_C_phonePrevSlider_Params
{
};

// Function telephoneBP.telephoneBP_C.endCall
struct AtelephoneBP_C_endCall_Params
{
};

// Function telephoneBP.telephoneBP_C.hidePhone
struct AtelephoneBP_C_hidePhone_Params
{
};

// Function telephoneBP.telephoneBP_C.lockPhone
struct AtelephoneBP_C_lockPhone_Params
{
};

// Function telephoneBP.telephoneBP_C.showPhone
struct AtelephoneBP_C_showPhone_Params
{
};

// Function telephoneBP.telephoneBP_C.initialisePhone
struct AtelephoneBP_C_initialisePhone_Params
{
};

// Function telephoneBP.telephoneBP_C.unlockPhone
struct AtelephoneBP_C_unlockPhone_Params
{
};

// Function telephoneBP.telephoneBP_C.displayCallSubtitle
struct AtelephoneBP_C_displayCallSubtitle_Params
{
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function telephoneBP.telephoneBP_C.ExecuteUbergraph_telephoneBP
struct AtelephoneBP_C_ExecuteUbergraph_telephoneBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
