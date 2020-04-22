
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

// Function patrolPoliceAnimBP.patrolPoliceAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_patrolPoliceAnimBP_AnimGraphNode_BlendSpacePlayer_1046287642CA18E6E3A0FFA29E27F59D
// (BlueprintEvent)

void UpatrolPoliceAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_patrolPoliceAnimBP_AnimGraphNode_BlendSpacePlayer_1046287642CA18E6E3A0FFA29E27F59D()
{
	static auto fn = UObject::FindObject<UFunction>("Function patrolPoliceAnimBP.patrolPoliceAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_patrolPoliceAnimBP_AnimGraphNode_BlendSpacePlayer_1046287642CA18E6E3A0FFA29E27F59D");

	UpatrolPoliceAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_patrolPoliceAnimBP_AnimGraphNode_BlendSpacePlayer_1046287642CA18E6E3A0FFA29E27F59D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function patrolPoliceAnimBP.patrolPoliceAnimBP_C.ExecuteUbergraph_patrolPoliceAnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpatrolPoliceAnimBP_C::ExecuteUbergraph_patrolPoliceAnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function patrolPoliceAnimBP.patrolPoliceAnimBP_C.ExecuteUbergraph_patrolPoliceAnimBP");

	UpatrolPoliceAnimBP_C_ExecuteUbergraph_patrolPoliceAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
