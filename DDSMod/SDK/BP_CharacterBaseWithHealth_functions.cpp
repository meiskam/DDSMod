
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

// Function BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CharacterBaseWithHealth_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C.UserConstructionScript");

	ABP_CharacterBaseWithHealth_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C.Damage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharacterBaseWithHealth_C::Damage(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C.Damage");

	ABP_CharacterBaseWithHealth_C_Damage_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CharacterBaseWithHealth_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C.ReceiveBeginPlay");

	ABP_CharacterBaseWithHealth_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C.ExecuteUbergraph_BP_CharacterBaseWithHealth
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharacterBaseWithHealth_C::ExecuteUbergraph_BP_CharacterBaseWithHealth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C.ExecuteUbergraph_BP_CharacterBaseWithHealth");

	ABP_CharacterBaseWithHealth_C_ExecuteUbergraph_BP_CharacterBaseWithHealth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
