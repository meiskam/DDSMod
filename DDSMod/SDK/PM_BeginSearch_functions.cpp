
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

// Function PM_BeginSearch.PM_BeginSearch_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPM_BeginSearch_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_BeginSearch.PM_BeginSearch_C.ReceiveExecute");

	UPM_BeginSearch_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_BeginSearch.PM_BeginSearch_C.ExecuteUbergraph_PM_BeginSearch
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPM_BeginSearch_C::ExecuteUbergraph_PM_BeginSearch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_BeginSearch.PM_BeginSearch_C.ExecuteUbergraph_PM_BeginSearch");

	UPM_BeginSearch_C_ExecuteUbergraph_PM_BeginSearch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
