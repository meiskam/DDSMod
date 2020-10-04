
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

// Function DrugDealerSimulator.ShiroActor.retName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AShiroActor::retName()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroActor.retName");

	AShiroActor_retName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.testReferences
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          t1                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          t2                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          t3                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          t4                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShiroBlueprint::STATIC_testReferences(float* t1, float* t2, float* t3, float* t4)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.testReferences");

	UShiroBlueprint_testReferences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (t1 != nullptr)
		*t1 = params.t1;
	if (t2 != nullptr)
		*t2 = params.t2;
	if (t3 != nullptr)
		*t3 = params.t3;
	if (t4 != nullptr)
		*t4 = params.t4;
}


// Function DrugDealerSimulator.ShiroBlueprint.shiroFunc2
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UShiroBlueprint::STATIC_shiroFunc2(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.shiroFunc2");

	UShiroBlueprint_shiroFunc2_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.shiroFunc
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UShiroBlueprint::STATIC_shiroFunc(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.shiroFunc");

	UShiroBlueprint_shiroFunc_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.extrapolateTest
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Min                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          perc                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShiroBlueprint::STATIC_extrapolateTest(float Min, float Max, float perc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.extrapolateTest");

	UShiroBlueprint_extrapolateTest_Params params;
	params.Min = Min;
	params.Max = Max;
	params.perc = perc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.calculateSky
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            dayNum                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            curHour                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            curMinute                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           sunVisible                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          sunHeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          sunPlainAngle                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          sunBrightness                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           moonVisible                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          varDump                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShiroBlueprint::STATIC_calculateSky(int dayNum, int curHour, int curMinute, bool* sunVisible, float* sunHeight, float* sunPlainAngle, float* sunBrightness, bool* moonVisible, float* varDump)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.calculateSky");

	UShiroBlueprint_calculateSky_Params params;
	params.dayNum = dayNum;
	params.curHour = curHour;
	params.curMinute = curMinute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (sunVisible != nullptr)
		*sunVisible = params.sunVisible;
	if (sunHeight != nullptr)
		*sunHeight = params.sunHeight;
	if (sunPlainAngle != nullptr)
		*sunPlainAngle = params.sunPlainAngle;
	if (sunBrightness != nullptr)
		*sunBrightness = params.sunBrightness;
	if (moonVisible != nullptr)
		*moonVisible = params.moonVisible;
	if (varDump != nullptr)
		*varDump = params.varDump;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
