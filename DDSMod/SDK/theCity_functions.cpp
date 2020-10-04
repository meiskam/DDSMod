
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

// Function theCity.theCity_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AtheCity_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function theCity.theCity_C.ReceiveBeginPlay");

	AtheCity_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function theCity.theCity_C.ExecuteUbergraph_theCity
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtheCity_C::ExecuteUbergraph_theCity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function theCity.theCity_C.ExecuteUbergraph_theCity");

	AtheCity_C_ExecuteUbergraph_theCity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
