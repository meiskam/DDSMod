
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

// Function asianStreetThug01.asianStreetThug01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AasianStreetThug01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function asianStreetThug01.asianStreetThug01_C.UserConstructionScript");

	AasianStreetThug01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function asianStreetThug01.asianStreetThug01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AasianStreetThug01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function asianStreetThug01.asianStreetThug01_C.ReceiveBeginPlay");

	AasianStreetThug01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function asianStreetThug01.asianStreetThug01_C.ExecuteUbergraph_asianStreetThug01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AasianStreetThug01_C::ExecuteUbergraph_asianStreetThug01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function asianStreetThug01.asianStreetThug01_C.ExecuteUbergraph_asianStreetThug01");

	AasianStreetThug01_C_ExecuteUbergraph_asianStreetThug01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
