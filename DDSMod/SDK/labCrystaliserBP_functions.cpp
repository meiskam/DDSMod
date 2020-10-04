
#include "SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function labCrystaliserBP.labCrystaliserBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AlabCrystaliserBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function labCrystaliserBP.labCrystaliserBP_C.UserConstructionScript");

	AlabCrystaliserBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labCrystaliserBP.labCrystaliserBP_C.addSubstance
// (BlueprintCallable, BlueprintEvent)

void AlabCrystaliserBP_C::addSubstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function labCrystaliserBP.labCrystaliserBP_C.addSubstance");

	AlabCrystaliserBP_C_addSubstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labCrystaliserBP.labCrystaliserBP_C.tryAddSubstance
// (Public, BlueprintCallable, BlueprintEvent)

void AlabCrystaliserBP_C::tryAddSubstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function labCrystaliserBP.labCrystaliserBP_C.tryAddSubstance");

	AlabCrystaliserBP_C_tryAddSubstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labCrystaliserBP.labCrystaliserBP_C.crystaliseContent
// (BlueprintCallable, BlueprintEvent)

void AlabCrystaliserBP_C::crystaliseContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function labCrystaliserBP.labCrystaliserBP_C.crystaliseContent");

	AlabCrystaliserBP_C_crystaliseContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labCrystaliserBP.labCrystaliserBP_C.workFinished
// (Public, BlueprintCallable, BlueprintEvent)

void AlabCrystaliserBP_C::workFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function labCrystaliserBP.labCrystaliserBP_C.workFinished");

	AlabCrystaliserBP_C_workFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labCrystaliserBP.labCrystaliserBP_C.ExecuteUbergraph_labCrystaliserBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlabCrystaliserBP_C::ExecuteUbergraph_labCrystaliserBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function labCrystaliserBP.labCrystaliserBP_C.ExecuteUbergraph_labCrystaliserBP");

	AlabCrystaliserBP_C_ExecuteUbergraph_labCrystaliserBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
