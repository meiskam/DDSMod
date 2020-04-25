
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

// Function dogFindPlayerLoc.dogFindPlayerLoc_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdogFindPlayerLoc_C::ReceiveExecute(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function dogFindPlayerLoc.dogFindPlayerLoc_C.ReceiveExecute");

	UdogFindPlayerLoc_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dogFindPlayerLoc.dogFindPlayerLoc_C.ExecuteUbergraph_dogFindPlayerLoc
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdogFindPlayerLoc_C::ExecuteUbergraph_dogFindPlayerLoc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dogFindPlayerLoc.dogFindPlayerLoc_C.ExecuteUbergraph_dogFindPlayerLoc");

	UdogFindPlayerLoc_C_ExecuteUbergraph_dogFindPlayerLoc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
