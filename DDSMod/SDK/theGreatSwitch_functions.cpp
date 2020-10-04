
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

// Function theGreatSwitch.theGreatSwitch_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AtheGreatSwitch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function theGreatSwitch.theGreatSwitch_C.UserConstructionScript");

	AtheGreatSwitch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function theGreatSwitch.theGreatSwitch_C.anim__FinishedFunc
// (BlueprintEvent)

void AtheGreatSwitch_C::anim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function theGreatSwitch.theGreatSwitch_C.anim__FinishedFunc");

	AtheGreatSwitch_C_anim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function theGreatSwitch.theGreatSwitch_C.anim__UpdateFunc
// (BlueprintEvent)

void AtheGreatSwitch_C::anim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function theGreatSwitch.theGreatSwitch_C.anim__UpdateFunc");

	AtheGreatSwitch_C_anim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function theGreatSwitch.theGreatSwitch_C.SwitchButton
// (BlueprintCallable, BlueprintEvent)

void AtheGreatSwitch_C::SwitchButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function theGreatSwitch.theGreatSwitch_C.SwitchButton");

	AtheGreatSwitch_C_SwitchButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function theGreatSwitch.theGreatSwitch_C.ExecuteUbergraph_theGreatSwitch
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtheGreatSwitch_C::ExecuteUbergraph_theGreatSwitch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function theGreatSwitch.theGreatSwitch_C.ExecuteUbergraph_theGreatSwitch");

	AtheGreatSwitch_C_ExecuteUbergraph_theGreatSwitch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
