
#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function workStationMixerBase.workStationMixerBase_C.calcByStrengthening
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          differenceMultiplier           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Strengthening                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AworkStationMixerBase_C::calcByStrengthening(float Value, float differenceMultiplier, float Strengthening, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.calcByStrengthening");

	AworkStationMixerBase_C_calcByStrengthening_Params params;
	params.Value = Value;
	params.differenceMultiplier = differenceMultiplier;
	params.Strengthening = Strengthening;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function workStationMixerBase.workStationMixerBase_C.calcPrecision
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          paramIn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          paramOut                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AworkStationMixerBase_C::calcPrecision(float paramIn, float* paramOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.calcPrecision");

	AworkStationMixerBase_C_calcPrecision_Params params;
	params.paramIn = paramIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (paramOut != nullptr)
		*paramOut = params.paramOut;
}


// Function workStationMixerBase.workStationMixerBase_C.processMix
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FdrugData               mixProduct                     (Parm, OutParm)
// float                          mixProductAmount               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AworkStationMixerBase_C::processMix(struct FdrugData* mixProduct, float* mixProductAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.processMix");

	AworkStationMixerBase_C_processMix_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mixProduct != nullptr)
		*mixProduct = params.mixProduct;
	if (mixProductAmount != nullptr)
		*mixProductAmount = params.mixProductAmount;
}


// Function workStationMixerBase.workStationMixerBase_C.showAddPopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AinteractiveBaseObject_C* substanceRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworkStationMixerBase_C::showAddPopup(class AinteractiveBaseObject_C* substanceRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.showAddPopup");

	AworkStationMixerBase_C_showAddPopup_Params params;
	params.substanceRef = substanceRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationMixerBase.workStationMixerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AworkStationMixerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.UserConstructionScript");

	AworkStationMixerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationMixerBase.workStationMixerBase_C.applyMix
// (BlueprintCallable, BlueprintEvent)

void AworkStationMixerBase_C::applyMix()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.applyMix");

	AworkStationMixerBase_C_applyMix_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationMixerBase.workStationMixerBase_C.workFinished
// (Public, BlueprintCallable, BlueprintEvent)

void AworkStationMixerBase_C::workFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.workFinished");

	AworkStationMixerBase_C_workFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationMixerBase.workStationMixerBase_C.addSubstance
// (BlueprintCallable, BlueprintEvent)

void AworkStationMixerBase_C::addSubstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.addSubstance");

	AworkStationMixerBase_C_addSubstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationMixerBase.workStationMixerBase_C.displayMixDetails
// (BlueprintCallable, BlueprintEvent)

void AworkStationMixerBase_C::displayMixDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.displayMixDetails");

	AworkStationMixerBase_C_displayMixDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationMixerBase.workStationMixerBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AworkStationMixerBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.ReceiveBeginPlay");

	AworkStationMixerBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationMixerBase.workStationMixerBase_C.displayApllyMix
// (BlueprintCallable, BlueprintEvent)

void AworkStationMixerBase_C::displayApllyMix()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.displayApllyMix");

	AworkStationMixerBase_C_displayApllyMix_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationMixerBase.workStationMixerBase_C.tryAddSubstance
// (Public, BlueprintCallable, BlueprintEvent)

void AworkStationMixerBase_C::tryAddSubstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.tryAddSubstance");

	AworkStationMixerBase_C_tryAddSubstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationMixerBase.workStationMixerBase_C.ExecuteUbergraph_workStationMixerBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworkStationMixerBase_C::ExecuteUbergraph_workStationMixerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.ExecuteUbergraph_workStationMixerBase");

	AworkStationMixerBase_C_ExecuteUbergraph_workStationMixerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
