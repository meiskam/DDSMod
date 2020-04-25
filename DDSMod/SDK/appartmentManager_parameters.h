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

// Function appartmentManager.appartmentManager_C.getWallPicker
struct AappartmentManager_C_getWallPicker_Params
{
	int                                                apartmentID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AappartmentViewerPawn_C*                     viewerPawn;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AappartmentWallPicker_C*                     wallPicker;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentManager.appartmentManager_C.rentBoostRespect
struct AappartmentManager_C_rentBoostRespect_Params
{
};

// Function appartmentManager.appartmentManager_C.countAvailableApartments
struct AappartmentManager_C_countAvailableApartments_Params
{
};

// Function appartmentManager.appartmentManager_C.processRentTransaction
struct AappartmentManager_C_processRentTransaction_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentManager.appartmentManager_C.UserConstructionScript
struct AappartmentManager_C_UserConstructionScript_Params
{
};

// Function appartmentManager.appartmentManager_C.rentAction
struct AappartmentManager_C_rentAction_Params
{
};

// Function appartmentManager.appartmentManager_C.ConfirmRentAction
struct AappartmentManager_C_ConfirmRentAction_Params
{
};

// Function appartmentManager.appartmentManager_C.cancelRenting
struct AappartmentManager_C_cancelRenting_Params
{
};

// Function appartmentManager.appartmentManager_C.refreshEndRenting
struct AappartmentManager_C_refreshEndRenting_Params
{
};

// Function appartmentManager.appartmentManager_C.checkAppartmentPayments
struct AappartmentManager_C_checkAppartmentPayments_Params
{
};

// Function appartmentManager.appartmentManager_C.prevViewAppartment
struct AappartmentManager_C_prevViewAppartment_Params
{
};

// Function appartmentManager.appartmentManager_C.nextViewAppartment
struct AappartmentManager_C_nextViewAppartment_Params
{
};

// Function appartmentManager.appartmentManager_C.refreshAppartments
struct AappartmentManager_C_refreshAppartments_Params
{
};

// Function appartmentManager.appartmentManager_C.terminateRenting
struct AappartmentManager_C_terminateRenting_Params
{
};

// Function appartmentManager.appartmentManager_C.ChangeViewAppartment
struct AappartmentManager_C_ChangeViewAppartment_Params
{
	int                                                AppartmentID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentManager.appartmentManager_C.startAppartmentViewer
struct AappartmentManager_C_startAppartmentViewer_Params
{
};

// Function appartmentManager.appartmentManager_C.sendDebtInfo
struct AappartmentManager_C_sendDebtInfo_Params
{
};

// Function appartmentManager.appartmentManager_C.ReceiveTick
struct AappartmentManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentManager.appartmentManager_C.ReceiveBeginPlay
struct AappartmentManager_C_ReceiveBeginPlay_Params
{
};

// Function appartmentManager.appartmentManager_C.firstRentAction
struct AappartmentManager_C_firstRentAction_Params
{
};

// Function appartmentManager.appartmentManager_C.ExecuteUbergraph_appartmentManager
struct AappartmentManager_C_ExecuteUbergraph_appartmentManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
