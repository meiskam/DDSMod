
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

// Function labFluidMixerBase.labFluidMixerBase_C.setEndMixForm
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EdrugForm>         EndForm                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Humidity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AlabFluidMixerBase_C::setEndMixForm(TEnumAsByte<EdrugForm>* EndForm, float* Humidity)
{
	static auto fn = UObject::FindObject<UFunction>("Function labFluidMixerBase.labFluidMixerBase_C.setEndMixForm");

	AlabFluidMixerBase_C_setEndMixForm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EndForm != nullptr)
		*EndForm = params.EndForm;
	if (Humidity != nullptr)
		*Humidity = params.Humidity;
}


// Function labFluidMixerBase.labFluidMixerBase_C.checkMixContents
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LiquidFound                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AlabFluidMixerBase_C::checkMixContents(bool* LiquidFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function labFluidMixerBase.labFluidMixerBase_C.checkMixContents");

	AlabFluidMixerBase_C_checkMixContents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiquidFound != nullptr)
		*LiquidFound = params.LiquidFound;
}


// Function labFluidMixerBase.labFluidMixerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AlabFluidMixerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function labFluidMixerBase.labFluidMixerBase_C.UserConstructionScript");

	AlabFluidMixerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labFluidMixerBase.labFluidMixerBase_C.addSubstance
// (BlueprintCallable, BlueprintEvent)

void AlabFluidMixerBase_C::addSubstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function labFluidMixerBase.labFluidMixerBase_C.addSubstance");

	AlabFluidMixerBase_C_addSubstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labFluidMixerBase.labFluidMixerBase_C.applyMix
// (BlueprintCallable, BlueprintEvent)

void AlabFluidMixerBase_C::applyMix()
{
	static auto fn = UObject::FindObject<UFunction>("Function labFluidMixerBase.labFluidMixerBase_C.applyMix");

	AlabFluidMixerBase_C_applyMix_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labFluidMixerBase.labFluidMixerBase_C.workFinished
// (Public, BlueprintCallable, BlueprintEvent)

void AlabFluidMixerBase_C::workFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function labFluidMixerBase.labFluidMixerBase_C.workFinished");

	AlabFluidMixerBase_C_workFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labFluidMixerBase.labFluidMixerBase_C.tryAddSubstance
// (Public, BlueprintCallable, BlueprintEvent)

void AlabFluidMixerBase_C::tryAddSubstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function labFluidMixerBase.labFluidMixerBase_C.tryAddSubstance");

	AlabFluidMixerBase_C_tryAddSubstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labFluidMixerBase.labFluidMixerBase_C.ExecuteUbergraph_labFluidMixerBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlabFluidMixerBase_C::ExecuteUbergraph_labFluidMixerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function labFluidMixerBase.labFluidMixerBase_C.ExecuteUbergraph_labFluidMixerBase");

	AlabFluidMixerBase_C_ExecuteUbergraph_labFluidMixerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
