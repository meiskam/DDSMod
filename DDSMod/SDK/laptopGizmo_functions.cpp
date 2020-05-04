
#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function laptopGizmo.laptopGizmo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AlaptopGizmo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function laptopGizmo.laptopGizmo_C.UserConstructionScript");

	AlaptopGizmo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laptopGizmo.laptopGizmo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AlaptopGizmo_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function laptopGizmo.laptopGizmo_C.ReceiveBeginPlay");

	AlaptopGizmo_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laptopGizmo.laptopGizmo_C.Transform
// (BlueprintCallable, BlueprintEvent)

void AlaptopGizmo_C::Transform()
{
	static auto fn = UObject::FindObject<UFunction>("Function laptopGizmo.laptopGizmo_C.Transform");

	AlaptopGizmo_C_Transform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laptopGizmo.laptopGizmo_C.ExecuteUbergraph_laptopGizmo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlaptopGizmo_C::ExecuteUbergraph_laptopGizmo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function laptopGizmo.laptopGizmo_C.ExecuteUbergraph_laptopGizmo");

	AlaptopGizmo_C_ExecuteUbergraph_laptopGizmo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
