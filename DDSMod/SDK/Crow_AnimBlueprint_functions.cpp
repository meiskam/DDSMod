
#include "SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Crow_AnimBlueprint.Crow_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCrow_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crow_AnimBlueprint.Crow_AnimBlueprint_C.BlueprintUpdateAnimation");

	UCrow_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crow_AnimBlueprint.Crow_AnimBlueprint_C.AnimNotify_IdleEnd
// (BlueprintCallable, BlueprintEvent)

void UCrow_AnimBlueprint_C::AnimNotify_IdleEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crow_AnimBlueprint.Crow_AnimBlueprint_C.AnimNotify_IdleEnd");

	UCrow_AnimBlueprint_C_AnimNotify_IdleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crow_AnimBlueprint.Crow_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Crow_AnimBlueprint_AnimGraphNode_BlendListByInt_4538200D48041B6AC28C66A93C62DF57
// (BlueprintEvent)

void UCrow_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Crow_AnimBlueprint_AnimGraphNode_BlendListByInt_4538200D48041B6AC28C66A93C62DF57()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crow_AnimBlueprint.Crow_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Crow_AnimBlueprint_AnimGraphNode_BlendListByInt_4538200D48041B6AC28C66A93C62DF57");

	UCrow_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Crow_AnimBlueprint_AnimGraphNode_BlendListByInt_4538200D48041B6AC28C66A93C62DF57_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crow_AnimBlueprint.Crow_AnimBlueprint_C.ExecuteUbergraph_Crow_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCrow_AnimBlueprint_C::ExecuteUbergraph_Crow_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crow_AnimBlueprint.Crow_AnimBlueprint_C.ExecuteUbergraph_Crow_AnimBlueprint");

	UCrow_AnimBlueprint_C_ExecuteUbergraph_Crow_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
