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

// Function shadyCommWarningBar.shadyCommWarningBar_C.Get_mainCanvas_ToolTipWidget_1
struct UshadyCommWarningBar_C_Get_mainCanvas_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function shadyCommWarningBar.shadyCommWarningBar_C.Construct
struct UshadyCommWarningBar_C_Construct_Params
{
};

// Function shadyCommWarningBar.shadyCommWarningBar_C.setup
struct UshadyCommWarningBar_C_setup_Params
{
	struct FText                                       Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ToolTip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function shadyCommWarningBar.shadyCommWarningBar_C.playPing
struct UshadyCommWarningBar_C_playPing_Params
{
};

// Function shadyCommWarningBar.shadyCommWarningBar_C.OnMouseEnter
struct UshadyCommWarningBar_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function shadyCommWarningBar.shadyCommWarningBar_C.OnMouseLeave
struct UshadyCommWarningBar_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function shadyCommWarningBar.shadyCommWarningBar_C.ExecuteUbergraph_shadyCommWarningBar
struct UshadyCommWarningBar_C_ExecuteUbergraph_shadyCommWarningBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
