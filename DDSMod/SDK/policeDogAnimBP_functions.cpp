
#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function policeDogAnimBP.policeDogAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_policeDogAnimBP_AnimGraphNode_BlendSpacePlayer_DF8AB9FA4E3A86C4FA596384F3D55D2E
// (BlueprintEvent)

void UpoliceDogAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_policeDogAnimBP_AnimGraphNode_BlendSpacePlayer_DF8AB9FA4E3A86C4FA596384F3D55D2E()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDogAnimBP.policeDogAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_policeDogAnimBP_AnimGraphNode_BlendSpacePlayer_DF8AB9FA4E3A86C4FA596384F3D55D2E");

	UpoliceDogAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_policeDogAnimBP_AnimGraphNode_BlendSpacePlayer_DF8AB9FA4E3A86C4FA596384F3D55D2E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeDogAnimBP.policeDogAnimBP_C.ExecuteUbergraph_policeDogAnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpoliceDogAnimBP_C::ExecuteUbergraph_policeDogAnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDogAnimBP.policeDogAnimBP_C.ExecuteUbergraph_policeDogAnimBP");

	UpoliceDogAnimBP_C_ExecuteUbergraph_policeDogAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
