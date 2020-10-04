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

// Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.setPackageIcon
struct UworkStationSubstanceAddWidget_C_setPackageIcon_Params
{
	TEnumAsByte<EdrugForm>                             Form;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quan;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Original;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EitemCategories>                       Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  OutIcon;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.addToEquipment
struct UworkStationSubstanceAddWidget_C_addToEquipment_Params
{
	bool                                               DontChangeInput;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.Construct
struct UworkStationSubstanceAddWidget_C_Construct_Params
{
};

// Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.setup
struct UworkStationSubstanceAddWidget_C_setup_Params
{
	class AinteractiveBaseObject_C*                    SelectedSubstance;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AworkStationEquipmentBase_C*                 equipment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UworkStationSubstanceAddWidget_C_BndEvt__btnAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UworkStationSubstanceAddWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.killWidget
struct UworkStationSubstanceAddWidget_C_killWidget_Params
{
	bool                                               DontChangeInput;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.Tick
struct UworkStationSubstanceAddWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.ExecuteUbergraph_workStationSubstanceAddWidget
struct UworkStationSubstanceAddWidget_C_ExecuteUbergraph_workStationSubstanceAddWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
