
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

// Function debugSkradankowy.debugSkradankowy_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UdebugSkradankowy_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function debugSkradankowy.debugSkradankowy_C.Construct");

	UdebugSkradankowy_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debugSkradankowy.debugSkradankowy_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdebugSkradankowy_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function debugSkradankowy.debugSkradankowy_C.Tick");

	UdebugSkradankowy_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debugSkradankowy.debugSkradankowy_C.ExecuteUbergraph_debugSkradankowy
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdebugSkradankowy_C::ExecuteUbergraph_debugSkradankowy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function debugSkradankowy.debugSkradankowy_C.ExecuteUbergraph_debugSkradankowy");

	UdebugSkradankowy_C_ExecuteUbergraph_debugSkradankowy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
