
#include "SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function keijiRestaurantManager.keijiRestaurantManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AkeijiRestaurantManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiRestaurantManager.keijiRestaurantManager_C.UserConstructionScript");

	AkeijiRestaurantManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiRestaurantManager.keijiRestaurantManager_C.openRestaurant
// (BlueprintCallable, BlueprintEvent)

void AkeijiRestaurantManager_C::openRestaurant()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiRestaurantManager.keijiRestaurantManager_C.openRestaurant");

	AkeijiRestaurantManager_C_openRestaurant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiRestaurantManager.keijiRestaurantManager_C.lockRestaurant
// (BlueprintCallable, BlueprintEvent)

void AkeijiRestaurantManager_C::lockRestaurant()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiRestaurantManager.keijiRestaurantManager_C.lockRestaurant");

	AkeijiRestaurantManager_C_lockRestaurant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiRestaurantManager.keijiRestaurantManager_C.ExecuteUbergraph_keijiRestaurantManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AkeijiRestaurantManager_C::ExecuteUbergraph_keijiRestaurantManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiRestaurantManager.keijiRestaurantManager_C.ExecuteUbergraph_keijiRestaurantManager");

	AkeijiRestaurantManager_C_ExecuteUbergraph_keijiRestaurantManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
