
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

// Function tempMixerTacka.tempMixerTacka_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AtempMixerTacka_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function tempMixerTacka.tempMixerTacka_C.UserConstructionScript");

	AtempMixerTacka_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function tempMixerTacka.tempMixerTacka_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtempMixerTacka_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function tempMixerTacka.tempMixerTacka_C.ReceiveTick");

	AtempMixerTacka_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function tempMixerTacka.tempMixerTacka_C.quantityChanged
// (Public, BlueprintCallable, BlueprintEvent)

void AtempMixerTacka_C::quantityChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function tempMixerTacka.tempMixerTacka_C.quantityChanged");

	AtempMixerTacka_C_quantityChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function tempMixerTacka.tempMixerTacka_C.ExecuteUbergraph_tempMixerTacka
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtempMixerTacka_C::ExecuteUbergraph_tempMixerTacka(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function tempMixerTacka.tempMixerTacka_C.ExecuteUbergraph_tempMixerTacka");

	AtempMixerTacka_C_ExecuteUbergraph_tempMixerTacka_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
