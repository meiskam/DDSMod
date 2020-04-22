#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function telephoneWidget.telephoneWidget_C.renderNotifications
struct UtelephoneWidget_C_renderNotifications_Params
{
};

// Function telephoneWidget.telephoneWidget_C.renderMessages
struct UtelephoneWidget_C_renderMessages_Params
{
	class AtelephoneBP_C*                              phoneRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               renderUserMsg;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                userID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function telephoneWidget.telephoneWidget_C.renderCallList
struct UtelephoneWidget_C_renderCallList_Params
{
	class AtelephoneBP_C*                              phoneRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function telephoneWidget.telephoneWidget_C.Tick
struct UtelephoneWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function telephoneWidget.telephoneWidget_C.slideNext
struct UtelephoneWidget_C_slideNext_Params
{
};

// Function telephoneWidget.telephoneWidget_C.slidePrevious
struct UtelephoneWidget_C_slidePrevious_Params
{
};

// Function telephoneWidget.telephoneWidget_C.setSlide
struct UtelephoneWidget_C_setSlide_Params
{
	int                                                slideNum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function telephoneWidget.telephoneWidget_C.Construct
struct UtelephoneWidget_C_Construct_Params
{
};

// Function telephoneWidget.telephoneWidget_C.hideCallWidget
struct UtelephoneWidget_C_hideCallWidget_Params
{
};

// Function telephoneWidget.telephoneWidget_C.showCallWidget
struct UtelephoneWidget_C_showCallWidget_Params
{
	struct FcontactPersonStruct                        userData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function telephoneWidget.telephoneWidget_C.callAccepted
struct UtelephoneWidget_C_callAccepted_Params
{
};

// Function telephoneWidget.telephoneWidget_C.callTick
struct UtelephoneWidget_C_callTick_Params
{
};

// Function telephoneWidget.telephoneWidget_C.updateTime
struct UtelephoneWidget_C_updateTime_Params
{
};

// Function telephoneWidget.telephoneWidget_C.ExecuteUbergraph_telephoneWidget
struct UtelephoneWidget_C_ExecuteUbergraph_telephoneWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
