
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

// Function CitizenFemale02_AnimBP.CitizenFemale02_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCitizenFemale02_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function CitizenFemale02_AnimBP.CitizenFemale02_AnimBP_C.BlueprintUpdateAnimation");

	UCitizenFemale02_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CitizenFemale02_AnimBP.CitizenFemale02_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UCitizenFemale02_AnimBP_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CitizenFemale02_AnimBP.CitizenFemale02_AnimBP_C.BlueprintBeginPlay");

	UCitizenFemale02_AnimBP_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CitizenFemale02_AnimBP.CitizenFemale02_AnimBP_C.ExecuteUbergraph_CitizenFemale02_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCitizenFemale02_AnimBP_C::ExecuteUbergraph_CitizenFemale02_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CitizenFemale02_AnimBP.CitizenFemale02_AnimBP_C.ExecuteUbergraph_CitizenFemale02_AnimBP");

	UCitizenFemale02_AnimBP_C_ExecuteUbergraph_CitizenFemale02_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
