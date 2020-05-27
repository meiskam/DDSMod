
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

// Function WoodenBulletinSingleLarge_BP.WoodenBulletinSingleLarge_BP_C.SetLights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightsOn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWoodenBulletinSingleLarge_BP_C::SetLights(bool LightsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodenBulletinSingleLarge_BP.WoodenBulletinSingleLarge_BP_C.SetLights");

	AWoodenBulletinSingleLarge_BP_C_SetLights_Params params;
	params.LightsOn = LightsOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WoodenBulletinSingleLarge_BP.WoodenBulletinSingleLarge_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWoodenBulletinSingleLarge_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodenBulletinSingleLarge_BP.WoodenBulletinSingleLarge_BP_C.UserConstructionScript");

	AWoodenBulletinSingleLarge_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
