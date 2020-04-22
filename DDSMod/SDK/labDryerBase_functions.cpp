
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

// Function labDryerBase.labDryerBase_C.calcProperties
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          inParam                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AlabDryerBase_C::calcProperties(float inParam, float* OutParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function labDryerBase.labDryerBase_C.calcProperties");

	AlabDryerBase_C_calcProperties_Params params;
	params.inParam = inParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutParam != nullptr)
		*OutParam = params.OutParam;
}


// Function labDryerBase.labDryerBase_C.makeFinalDrugForm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EdrugForm>         In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EdrugForm>         OutDried                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AlabDryerBase_C::makeFinalDrugForm(TEnumAsByte<EdrugForm> In, TEnumAsByte<EdrugForm>* OutDried)
{
	static auto fn = UObject::FindObject<UFunction>("Function labDryerBase.labDryerBase_C.makeFinalDrugForm");

	AlabDryerBase_C_makeFinalDrugForm_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDried != nullptr)
		*OutDried = params.OutDried;
}


// Function labDryerBase.labDryerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AlabDryerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function labDryerBase.labDryerBase_C.UserConstructionScript");

	AlabDryerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labDryerBase.labDryerBase_C.addSubstance
// (BlueprintCallable, BlueprintEvent)

void AlabDryerBase_C::addSubstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function labDryerBase.labDryerBase_C.addSubstance");

	AlabDryerBase_C_addSubstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labDryerBase.labDryerBase_C.tryAddSubstance
// (Public, BlueprintCallable, BlueprintEvent)

void AlabDryerBase_C::tryAddSubstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function labDryerBase.labDryerBase_C.tryAddSubstance");

	AlabDryerBase_C_tryAddSubstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labDryerBase.labDryerBase_C.workFinished
// (Public, BlueprintCallable, BlueprintEvent)

void AlabDryerBase_C::workFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function labDryerBase.labDryerBase_C.workFinished");

	AlabDryerBase_C_workFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labDryerBase.labDryerBase_C.startDrying
// (BlueprintCallable, BlueprintEvent)

void AlabDryerBase_C::startDrying()
{
	static auto fn = UObject::FindObject<UFunction>("Function labDryerBase.labDryerBase_C.startDrying");

	AlabDryerBase_C_startDrying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labDryerBase.labDryerBase_C.ExecuteUbergraph_labDryerBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlabDryerBase_C::ExecuteUbergraph_labDryerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function labDryerBase.labDryerBase_C.ExecuteUbergraph_labDryerBase");

	AlabDryerBase_C_ExecuteUbergraph_labDryerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
