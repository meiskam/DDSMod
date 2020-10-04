#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function appartmentViewerWidget.appartmentViewerWidget_C.refreshAccBalance
struct UappartmentViewerWidget_C_refreshAccBalance_Params
{
};

// Function appartmentViewerWidget.appartmentViewerWidget_C.setStatistics
struct UappartmentViewerWidget_C_setStatistics_Params
{
	class ArentAppartmentArea_C*                       areaRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       areaNam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function appartmentViewerWidget.appartmentViewerWidget_C.setup
struct UappartmentViewerWidget_C_setup_Params
{
	bool                                               Owned;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Forever;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terminated;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               savePoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Raided;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       AppartmentName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       AppartmentDesc;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Address;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Meterage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Floors;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                daysTillPayment;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Boost;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ArentAppartmentArea_C*                       ApartmentRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentViewerWidget.appartmentViewerWidget_C.openConfirmDialogue
struct UappartmentViewerWidget_C_openConfirmDialogue_Params
{
	class ArentAppartmentArea_C*                       Appartment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StartRenting;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentViewerWidget.appartmentViewerWidget_C.closeConfirmPanel
struct UappartmentViewerWidget_C_closeConfirmPanel_Params
{
};

// Function appartmentViewerWidget.appartmentViewerWidget_C.rentConfirmed
struct UappartmentViewerWidget_C_rentConfirmed_Params
{
	int                                                daysLeft;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentViewerWidget.appartmentViewerWidget_C.rentWentBad
struct UappartmentViewerWidget_C_rentWentBad_Params
{
};

// Function appartmentViewerWidget.appartmentViewerWidget_C.rentTerminated
struct UappartmentViewerWidget_C_rentTerminated_Params
{
	int                                                daysLeft;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentViewerWidget.appartmentViewerWidget_C.ExecuteUbergraph_appartmentViewerWidget
struct UappartmentViewerWidget_C_ExecuteUbergraph_appartmentViewerWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
