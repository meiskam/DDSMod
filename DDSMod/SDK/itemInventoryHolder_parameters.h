#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function itemInventoryHolder.itemInventoryHolder_C.UserConstructionScript
struct AitemInventoryHolder_C_UserConstructionScript_Params
{
};

// Function itemInventoryHolder.itemInventoryHolder_C.ReceiveBeginPlay
struct AitemInventoryHolder_C_ReceiveBeginPlay_Params
{
};

// Function itemInventoryHolder.itemInventoryHolder_C.SetContents
struct AitemInventoryHolder_C_SetContents_Params
{
	TArray<struct FinventoryItemStruct>                contents;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        quantities;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              TotalSize;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalWieght;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function itemInventoryHolder.itemInventoryHolder_C.ExecuteUbergraph_itemInventoryHolder
struct AitemInventoryHolder_C_ExecuteUbergraph_itemInventoryHolder_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
