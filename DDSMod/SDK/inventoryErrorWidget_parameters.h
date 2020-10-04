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

// Function inventoryErrorWidget.inventoryErrorWidget_C.Construct
struct UinventoryErrorWidget_C_Construct_Params
{
};

// Function inventoryErrorWidget.inventoryErrorWidget_C.setup
struct UinventoryErrorWidget_C_setup_Params
{
	struct FText                                       ErrorText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function inventoryErrorWidget.inventoryErrorWidget_C.ExecuteUbergraph_inventoryErrorWidget
struct UinventoryErrorWidget_C_ExecuteUbergraph_inventoryErrorWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
