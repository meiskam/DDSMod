
#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function pillMakerBase.pillMakerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApillMakerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function pillMakerBase.pillMakerBase_C.UserConstructionScript");

	ApillMakerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pillMakerBase.pillMakerBase_C.addSubstance
// (BlueprintCallable, BlueprintEvent)

void ApillMakerBase_C::addSubstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function pillMakerBase.pillMakerBase_C.addSubstance");

	ApillMakerBase_C_addSubstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pillMakerBase.pillMakerBase_C.tryAddSubstance
// (Public, BlueprintCallable, BlueprintEvent)

void ApillMakerBase_C::tryAddSubstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function pillMakerBase.pillMakerBase_C.tryAddSubstance");

	ApillMakerBase_C_tryAddSubstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pillMakerBase.pillMakerBase_C.makePills
// (BlueprintCallable, BlueprintEvent)

void ApillMakerBase_C::makePills()
{
	static auto fn = UObject::FindObject<UFunction>("Function pillMakerBase.pillMakerBase_C.makePills");

	ApillMakerBase_C_makePills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pillMakerBase.pillMakerBase_C.workFinished
// (Public, BlueprintCallable, BlueprintEvent)

void ApillMakerBase_C::workFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function pillMakerBase.pillMakerBase_C.workFinished");

	ApillMakerBase_C_workFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pillMakerBase.pillMakerBase_C.ExecuteUbergraph_pillMakerBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApillMakerBase_C::ExecuteUbergraph_pillMakerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function pillMakerBase.pillMakerBase_C.ExecuteUbergraph_pillMakerBase");

	ApillMakerBase_C_ExecuteUbergraph_pillMakerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
