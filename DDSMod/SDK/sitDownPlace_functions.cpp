
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

// Function sitDownPlace.sitDownPlace_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsitDownPlace_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function sitDownPlace.sitDownPlace_C.UserConstructionScript");

	AsitDownPlace_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sitDownPlace.sitDownPlace_C.InpActEvt_Action_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AsitDownPlace_C::InpActEvt_Action_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function sitDownPlace.sitDownPlace_C.InpActEvt_Action_K2Node_InputActionEvent_1");

	AsitDownPlace_C_InpActEvt_Action_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sitDownPlace.sitDownPlace_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AsitDownPlace_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function sitDownPlace.sitDownPlace_C.ReceiveBeginPlay");

	AsitDownPlace_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sitDownPlace.sitDownPlace_C.SitDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsitDownPlace_C::SitDown(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function sitDownPlace.sitDownPlace_C.SitDown");

	AsitDownPlace_C_SitDown_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sitDownPlace.sitDownPlace_C.Activate
// (BlueprintCallable, BlueprintEvent)

void AsitDownPlace_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function sitDownPlace.sitDownPlace_C.Activate");

	AsitDownPlace_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sitDownPlace.sitDownPlace_C.ExecuteUbergraph_sitDownPlace
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsitDownPlace_C::ExecuteUbergraph_sitDownPlace(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sitDownPlace.sitDownPlace_C.ExecuteUbergraph_sitDownPlace");

	AsitDownPlace_C_ExecuteUbergraph_sitDownPlace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
