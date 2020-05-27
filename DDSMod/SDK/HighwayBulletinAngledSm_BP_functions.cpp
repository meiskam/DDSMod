
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

// Function HighwayBulletinAngledSm_BP.HighwayBulletinAngledSm_BP_C.SetLights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightsOn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHighwayBulletinAngledSm_BP_C::SetLights(bool LightsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function HighwayBulletinAngledSm_BP.HighwayBulletinAngledSm_BP_C.SetLights");

	AHighwayBulletinAngledSm_BP_C_SetLights_Params params;
	params.LightsOn = LightsOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HighwayBulletinAngledSm_BP.HighwayBulletinAngledSm_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AHighwayBulletinAngledSm_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HighwayBulletinAngledSm_BP.HighwayBulletinAngledSm_BP_C.UserConstructionScript");

	AHighwayBulletinAngledSm_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
