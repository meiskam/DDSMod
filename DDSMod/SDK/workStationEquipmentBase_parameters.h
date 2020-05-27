#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function workStationEquipmentBase.workStationEquipmentBase_C.packagePopup
struct AworkStationEquipmentBase_C_packagePopup_Params
{
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.packageProduct
struct AworkStationEquipmentBase_C_packageProduct_Params
{
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.rightClickOptions
struct AworkStationEquipmentBase_C_rightClickOptions_Params
{
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.tryAddSubstance
struct AworkStationEquipmentBase_C_tryAddSubstance_Params
{
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.verifySubstanceSource
struct AworkStationEquipmentBase_C_verifySubstanceSource_Params
{
	bool                                               Proceed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FdrugData                                   SourceData;                                               // (Parm, OutParm)
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.compareContent
struct AworkStationEquipmentBase_C_compareContent_Params
{
	struct FdrugData                                   NewData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               TheSame;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.clearEquipment
struct AworkStationEquipmentBase_C_clearEquipment_Params
{
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.quantityChanged
struct AworkStationEquipmentBase_C_quantityChanged_Params
{
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.addSubstancePopup
struct AworkStationEquipmentBase_C_addSubstancePopup_Params
{
	class AinteractiveBaseObject_C*                    substanceRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.workFinished
struct AworkStationEquipmentBase_C_workFinished_Params
{
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.workCountdown
struct AworkStationEquipmentBase_C_workCountdown_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.startWorking
struct AworkStationEquipmentBase_C_startWorking_Params
{
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.defaultHoldAction
struct AworkStationEquipmentBase_C_defaultHoldAction_Params
{
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.storeEquipment
struct AworkStationEquipmentBase_C_storeEquipment_Params
{
	bool                                               SkipRender;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.rearangeEquipment
struct AworkStationEquipmentBase_C_rearangeEquipment_Params
{
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.equipmentActivateReleaseButton
struct AworkStationEquipmentBase_C_equipmentActivateReleaseButton_Params
{
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.subclassActivate
struct AworkStationEquipmentBase_C_subclassActivate_Params
{
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.equipmentActivation
struct AworkStationEquipmentBase_C_equipmentActivation_Params
{
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.calcLineTracePoints
struct AworkStationEquipmentBase_C_calcLineTracePoints_Params
{
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.checkCanFit
struct AworkStationEquipmentBase_C_checkCanFit_Params
{
	bool                                               CanFit;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.UserConstructionScript
struct AworkStationEquipmentBase_C_UserConstructionScript_Params
{
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.ReceiveBeginPlay
struct AworkStationEquipmentBase_C_ReceiveBeginPlay_Params
{
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.ReceiveTick
struct AworkStationEquipmentBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.initialSetup
struct AworkStationEquipmentBase_C_initialSetup_Params
{
	struct FappartmentEquipment                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Gizmo;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromHovered;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.verifyCorrectNaming
struct AworkStationEquipmentBase_C_verifyCorrectNaming_Params
{
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.selectMe
struct AworkStationEquipmentBase_C_selectMe_Params
{
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.dumpContent
struct AworkStationEquipmentBase_C_dumpContent_Params
{
};

// Function workStationEquipmentBase.workStationEquipmentBase_C.ExecuteUbergraph_workStationEquipmentBase
struct AworkStationEquipmentBase_C_ExecuteUbergraph_workStationEquipmentBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
