
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

// Function HighwayPosterDouble_BP.HighwayPosterDouble_BP_C.SetLights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightsOn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHighwayPosterDouble_BP_C::SetLights(bool LightsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function HighwayPosterDouble_BP.HighwayPosterDouble_BP_C.SetLights");

	AHighwayPosterDouble_BP_C_SetLights_Params params;
	params.LightsOn = LightsOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HighwayPosterDouble_BP.HighwayPosterDouble_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHighwayPosterDouble_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HighwayPosterDouble_BP.HighwayPosterDouble_BP_C.UserConstructionScript");

	AHighwayPosterDouble_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
