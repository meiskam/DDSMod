
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

// Function tutorialTipMarkerBP.tutorialTipMarkerBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AtutorialTipMarkerBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function tutorialTipMarkerBP.tutorialTipMarkerBP_C.UserConstructionScript");

	AtutorialTipMarkerBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function tutorialTipMarkerBP.tutorialTipMarkerBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AtutorialTipMarkerBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function tutorialTipMarkerBP.tutorialTipMarkerBP_C.ReceiveBeginPlay");

	AtutorialTipMarkerBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function tutorialTipMarkerBP.tutorialTipMarkerBP_C.ExecuteUbergraph_tutorialTipMarkerBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtutorialTipMarkerBP_C::ExecuteUbergraph_tutorialTipMarkerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function tutorialTipMarkerBP.tutorialTipMarkerBP_C.ExecuteUbergraph_tutorialTipMarkerBP");

	AtutorialTipMarkerBP_C_ExecuteUbergraph_tutorialTipMarkerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
