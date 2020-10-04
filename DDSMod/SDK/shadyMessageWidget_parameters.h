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

// Function shadyMessageWidget.shadyMessageWidget_C.setup
struct UshadyMessageWidget_C_setup_Params
{
	struct FText                                       UserName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     msgString;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UTexture2D*                                  userAvatar;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerMessage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shadyMessageWidget.shadyMessageWidget_C.ExecuteUbergraph_shadyMessageWidget
struct UshadyMessageWidget_C_ExecuteUbergraph_shadyMessageWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
