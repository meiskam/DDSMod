
#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function shopInstance.shopInstance_C.updateShopClassDefaults
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AshopInstance_C::updateShopClassDefaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function shopInstance.shopInstance_C.updateShopClassDefaults");

	AshopInstance_C_updateShopClassDefaults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shopInstance.shopInstance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AshopInstance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function shopInstance.shopInstance_C.UserConstructionScript");

	AshopInstance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shopInstance.shopInstance_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AshopInstance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function shopInstance.shopInstance_C.ReceiveBeginPlay");

	AshopInstance_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shopInstance.shopInstance_C.resupplyShop
// (BlueprintCallable, BlueprintEvent)

void AshopInstance_C::resupplyShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function shopInstance.shopInstance_C.resupplyShop");

	AshopInstance_C_resupplyShop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shopInstance.shopInstance_C.checkShopResupply
// (BlueprintCallable, BlueprintEvent)

void AshopInstance_C::checkShopResupply()
{
	static auto fn = UObject::FindObject<UFunction>("Function shopInstance.shopInstance_C.checkShopResupply");

	AshopInstance_C_checkShopResupply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shopInstance.shopInstance_C.scriptResupplyEvent
// (BlueprintCallable, BlueprintEvent)

void AshopInstance_C::scriptResupplyEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function shopInstance.shopInstance_C.scriptResupplyEvent");

	AshopInstance_C_scriptResupplyEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shopInstance.shopInstance_C.ExecuteUbergraph_shopInstance
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AshopInstance_C::ExecuteUbergraph_shopInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function shopInstance.shopInstance_C.ExecuteUbergraph_shopInstance");

	AshopInstance_C_ExecuteUbergraph_shopInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
