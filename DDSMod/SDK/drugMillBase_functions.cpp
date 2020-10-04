
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

// Function drugMillBase.drugMillBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdrugMillBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugMillBase.drugMillBase_C.UserConstructionScript");

	AdrugMillBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugMillBase.drugMillBase_C.addSubstance
// (BlueprintCallable, BlueprintEvent)

void AdrugMillBase_C::addSubstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugMillBase.drugMillBase_C.addSubstance");

	AdrugMillBase_C_addSubstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugMillBase.drugMillBase_C.millContents
// (BlueprintCallable, BlueprintEvent)

void AdrugMillBase_C::millContents()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugMillBase.drugMillBase_C.millContents");

	AdrugMillBase_C_millContents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugMillBase.drugMillBase_C.workFinished
// (Public, BlueprintCallable, BlueprintEvent)

void AdrugMillBase_C::workFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugMillBase.drugMillBase_C.workFinished");

	AdrugMillBase_C_workFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugMillBase.drugMillBase_C.tryAddSubstance
// (Public, BlueprintCallable, BlueprintEvent)

void AdrugMillBase_C::tryAddSubstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugMillBase.drugMillBase_C.tryAddSubstance");

	AdrugMillBase_C_tryAddSubstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugMillBase.drugMillBase_C.ExecuteUbergraph_drugMillBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdrugMillBase_C::ExecuteUbergraph_drugMillBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function drugMillBase.drugMillBase_C.ExecuteUbergraph_drugMillBase");

	AdrugMillBase_C_ExecuteUbergraph_drugMillBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
