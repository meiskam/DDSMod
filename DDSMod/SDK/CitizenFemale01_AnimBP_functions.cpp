
#include "SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function CitizenFemale01_AnimBP.CitizenFemale01_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCitizenFemale01_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function CitizenFemale01_AnimBP.CitizenFemale01_AnimBP_C.BlueprintUpdateAnimation");

	UCitizenFemale01_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CitizenFemale01_AnimBP.CitizenFemale01_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UCitizenFemale01_AnimBP_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CitizenFemale01_AnimBP.CitizenFemale01_AnimBP_C.BlueprintBeginPlay");

	UCitizenFemale01_AnimBP_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CitizenFemale01_AnimBP.CitizenFemale01_AnimBP_C.ExecuteUbergraph_CitizenFemale01_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCitizenFemale01_AnimBP_C::ExecuteUbergraph_CitizenFemale01_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CitizenFemale01_AnimBP.CitizenFemale01_AnimBP_C.ExecuteUbergraph_CitizenFemale01_AnimBP");

	UCitizenFemale01_AnimBP_C_ExecuteUbergraph_CitizenFemale01_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
