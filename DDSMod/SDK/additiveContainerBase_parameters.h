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

// Function additiveContainerBase.additiveContainerBase_C.changeLabel
struct AadditiveContainerBase_C_changeLabel_Params
{
	bool                                               setEmpty;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       NewLabel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function additiveContainerBase.additiveContainerBase_C.UserConstructionScript
struct AadditiveContainerBase_C_UserConstructionScript_Params
{
};

// Function additiveContainerBase.additiveContainerBase_C.ReceiveBeginPlay
struct AadditiveContainerBase_C_ReceiveBeginPlay_Params
{
};

// Function additiveContainerBase.additiveContainerBase_C.ReceiveTick
struct AadditiveContainerBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function additiveContainerBase.additiveContainerBase_C.addSubstance
struct AadditiveContainerBase_C_addSubstance_Params
{
};

// Function additiveContainerBase.additiveContainerBase_C.setLabel
struct AadditiveContainerBase_C_setLabel_Params
{
};

// Function additiveContainerBase.additiveContainerBase_C.showLabel
struct AadditiveContainerBase_C_showLabel_Params
{
};

// Function additiveContainerBase.additiveContainerBase_C.hideLabel
struct AadditiveContainerBase_C_hideLabel_Params
{
};

// Function additiveContainerBase.additiveContainerBase_C.customiseLabel
struct AadditiveContainerBase_C_customiseLabel_Params
{
};

// Function additiveContainerBase.additiveContainerBase_C.tryAddSubstance
struct AadditiveContainerBase_C_tryAddSubstance_Params
{
};

// Function additiveContainerBase.additiveContainerBase_C.ExecuteUbergraph_additiveContainerBase
struct AadditiveContainerBase_C_ExecuteUbergraph_additiveContainerBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
