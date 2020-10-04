
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

// Function clothesWardrobeBP.clothesWardrobeBP_C.endCopAlert
// (Public, BlueprintCallable, BlueprintEvent)

void AclothesWardrobeBP_C::endCopAlert()
{
	static auto fn = UObject::FindObject<UFunction>("Function clothesWardrobeBP.clothesWardrobeBP_C.endCopAlert");

	AclothesWardrobeBP_C_endCopAlert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function clothesWardrobeBP.clothesWardrobeBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AclothesWardrobeBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function clothesWardrobeBP.clothesWardrobeBP_C.UserConstructionScript");

	AclothesWardrobeBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function clothesWardrobeBP.clothesWardrobeBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AclothesWardrobeBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function clothesWardrobeBP.clothesWardrobeBP_C.ReceiveBeginPlay");

	AclothesWardrobeBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function clothesWardrobeBP.clothesWardrobeBP_C.ChangeClothes
// (BlueprintCallable, BlueprintEvent)

void AclothesWardrobeBP_C::ChangeClothes()
{
	static auto fn = UObject::FindObject<UFunction>("Function clothesWardrobeBP.clothesWardrobeBP_C.ChangeClothes");

	AclothesWardrobeBP_C_ChangeClothes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function clothesWardrobeBP.clothesWardrobeBP_C.unlockChange
// (BlueprintCallable, BlueprintEvent)

void AclothesWardrobeBP_C::unlockChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function clothesWardrobeBP.clothesWardrobeBP_C.unlockChange");

	AclothesWardrobeBP_C_unlockChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function clothesWardrobeBP.clothesWardrobeBP_C.ExecuteUbergraph_clothesWardrobeBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AclothesWardrobeBP_C::ExecuteUbergraph_clothesWardrobeBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function clothesWardrobeBP.clothesWardrobeBP_C.ExecuteUbergraph_clothesWardrobeBP");

	AclothesWardrobeBP_C_ExecuteUbergraph_clothesWardrobeBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
