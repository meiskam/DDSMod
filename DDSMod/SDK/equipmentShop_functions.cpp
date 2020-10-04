
#include "SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function equipmentShop.equipmentShop_C.removeItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FappartmentEquipment    Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AequipmentShop_C::removeItems(const struct FappartmentEquipment& Data, int quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentShop.equipmentShop_C.removeItems");

	AequipmentShop_C_removeItems_Params params;
	params.Data = Data;
	params.quantity = quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function equipmentShop.equipmentShop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AequipmentShop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentShop.equipmentShop_C.UserConstructionScript");

	AequipmentShop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function equipmentShop.equipmentShop_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AequipmentShop_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentShop.equipmentShop_C.ReceiveBeginPlay");

	AequipmentShop_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function equipmentShop.equipmentShop_C.InitiateShopUI
// (BlueprintCallable, BlueprintEvent)

void AequipmentShop_C::InitiateShopUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentShop.equipmentShop_C.InitiateShopUI");

	AequipmentShop_C_InitiateShopUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function equipmentShop.equipmentShop_C.checkShopAvailability
// (BlueprintCallable, BlueprintEvent)

void AequipmentShop_C::checkShopAvailability()
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentShop.equipmentShop_C.checkShopAvailability");

	AequipmentShop_C_checkShopAvailability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function equipmentShop.equipmentShop_C.forceRestock
// (BlueprintCallable, BlueprintEvent)

void AequipmentShop_C::forceRestock()
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentShop.equipmentShop_C.forceRestock");

	AequipmentShop_C_forceRestock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function equipmentShop.equipmentShop_C.ExecuteUbergraph_equipmentShop
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AequipmentShop_C::ExecuteUbergraph_equipmentShop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentShop.equipmentShop_C.ExecuteUbergraph_equipmentShop");

	AequipmentShop_C_ExecuteUbergraph_equipmentShop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
