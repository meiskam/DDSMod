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

// Function containerBase.containerBase_C.reconstructContentsReferences
struct AcontainerBase_C_reconstructContentsReferences_Params
{
};

// Function containerBase.containerBase_C.respawnFurniture
struct AcontainerBase_C_respawnFurniture_Params
{
};

// Function containerBase.containerBase_C.setBackpackDefaults
struct AcontainerBase_C_setBackpackDefaults_Params
{
};

// Function containerBase.containerBase_C.returnItemSizing
struct AcontainerBase_C_returnItemSizing_Params
{
	struct FinventoryItemStruct                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Size;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function containerBase.containerBase_C.resetContentSizes
struct AcontainerBase_C_resetContentSizes_Params
{
};

// Function containerBase.containerBase_C.removeItem
struct AcontainerBase_C_removeItem_Params
{
	int                                                ItemIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function containerBase.containerBase_C.AddItem
struct AcontainerBase_C_AddItem_Params
{
	struct FinventoryItemStruct                        itemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                itemQuantity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddedIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               QuanChanged;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function containerBase.containerBase_C.UserConstructionScript
struct AcontainerBase_C_UserConstructionScript_Params
{
};

// Function containerBase.containerBase_C.ReceiveBeginPlay
struct AcontainerBase_C_ReceiveBeginPlay_Params
{
};

// Function containerBase.containerBase_C.openContainer
struct AcontainerBase_C_openContainer_Params
{
};

// Function containerBase.containerBase_C.openEventScript
struct AcontainerBase_C_openEventScript_Params
{
};

// Function containerBase.containerBase_C.closeContainer
struct AcontainerBase_C_closeContainer_Params
{
};

// Function containerBase.containerBase_C.closeEventScript
struct AcontainerBase_C_closeEventScript_Params
{
};

// Function containerBase.containerBase_C.purgeContainer
struct AcontainerBase_C_purgeContainer_Params
{
};

// Function containerBase.containerBase_C.ExecuteUbergraph_containerBase
struct AcontainerBase_C_ExecuteUbergraph_containerBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
