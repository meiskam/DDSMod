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

// Function equipmentShop.equipmentShop_C.removeItems
struct AequipmentShop_C_removeItems_Params
{
	struct FappartmentEquipment                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function equipmentShop.equipmentShop_C.UserConstructionScript
struct AequipmentShop_C_UserConstructionScript_Params
{
};

// Function equipmentShop.equipmentShop_C.ReceiveBeginPlay
struct AequipmentShop_C_ReceiveBeginPlay_Params
{
};

// Function equipmentShop.equipmentShop_C.InitiateShopUI
struct AequipmentShop_C_InitiateShopUI_Params
{
};

// Function equipmentShop.equipmentShop_C.checkShopAvailability
struct AequipmentShop_C_checkShopAvailability_Params
{
};

// Function equipmentShop.equipmentShop_C.forceRestock
struct AequipmentShop_C_forceRestock_Params
{
};

// Function equipmentShop.equipmentShop_C.ExecuteUbergraph_equipmentShop
struct AequipmentShop_C_ExecuteUbergraph_equipmentShop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
