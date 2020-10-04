
#include "SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_Sky_Sphere.BP_Sky_Sphere_C.RefreshMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Sky_Sphere_C::RefreshMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.RefreshMaterial");

	ABP_Sky_Sphere_C_RefreshMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSunDirection
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Sky_Sphere_C::UpdateSunDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSunDirection");

	ABP_Sky_Sphere_C_UpdateSunDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Sky_Sphere_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript");

	ABP_Sky_Sphere_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
