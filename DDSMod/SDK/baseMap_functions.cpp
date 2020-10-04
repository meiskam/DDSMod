
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

// Function baseMap.baseMap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AbaseMap_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseMap.baseMap_C.ReceiveBeginPlay");

	AbaseMap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseMap.baseMap_C.ExecuteUbergraph_baseMap
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AbaseMap_C::ExecuteUbergraph_baseMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function baseMap.baseMap_C.ExecuteUbergraph_baseMap");

	AbaseMap_C_ExecuteUbergraph_baseMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
