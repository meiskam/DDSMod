
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

// Function PM_GetPlayerRef.PM_GetPlayerRef_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPM_GetPlayerRef_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_GetPlayerRef.PM_GetPlayerRef_C.ReceiveExecute");

	UPM_GetPlayerRef_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_GetPlayerRef.PM_GetPlayerRef_C.ExecuteUbergraph_PM_GetPlayerRef
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPM_GetPlayerRef_C::ExecuteUbergraph_PM_GetPlayerRef(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_GetPlayerRef.PM_GetPlayerRef_C.ExecuteUbergraph_PM_GetPlayerRef");

	UPM_GetPlayerRef_C_ExecuteUbergraph_PM_GetPlayerRef_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
