
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

// Function Seagull_AnimationBlueprint.Seagull_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Seagull_AnimationBlueprint_AnimGraphNode_BlendListByInt_85473F0A4FD880EC4878C4AE83C6B14A
// (BlueprintEvent)

void USeagull_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Seagull_AnimationBlueprint_AnimGraphNode_BlendListByInt_85473F0A4FD880EC4878C4AE83C6B14A()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seagull_AnimationBlueprint.Seagull_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Seagull_AnimationBlueprint_AnimGraphNode_BlendListByInt_85473F0A4FD880EC4878C4AE83C6B14A");

	USeagull_AnimationBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Seagull_AnimationBlueprint_AnimGraphNode_BlendListByInt_85473F0A4FD880EC4878C4AE83C6B14A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seagull_AnimationBlueprint.Seagull_AnimationBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USeagull_AnimationBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seagull_AnimationBlueprint.Seagull_AnimationBlueprint_C.BlueprintUpdateAnimation");

	USeagull_AnimationBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seagull_AnimationBlueprint.Seagull_AnimationBlueprint_C.AnimNotify_IdleEnd
// (BlueprintCallable, BlueprintEvent)

void USeagull_AnimationBlueprint_C::AnimNotify_IdleEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seagull_AnimationBlueprint.Seagull_AnimationBlueprint_C.AnimNotify_IdleEnd");

	USeagull_AnimationBlueprint_C_AnimNotify_IdleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seagull_AnimationBlueprint.Seagull_AnimationBlueprint_C.ExecuteUbergraph_Seagull_AnimationBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USeagull_AnimationBlueprint_C::ExecuteUbergraph_Seagull_AnimationBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seagull_AnimationBlueprint.Seagull_AnimationBlueprint_C.ExecuteUbergraph_Seagull_AnimationBlueprint");

	USeagull_AnimationBlueprint_C_ExecuteUbergraph_Seagull_AnimationBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
