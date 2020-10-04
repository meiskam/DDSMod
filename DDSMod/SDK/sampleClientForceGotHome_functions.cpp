
#include "SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function sampleClientForceGotHome.sampleClientForceGotHome_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsampleClientForceGotHome_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function sampleClientForceGotHome.sampleClientForceGotHome_C.ReceiveExecute");

	UsampleClientForceGotHome_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sampleClientForceGotHome.sampleClientForceGotHome_C.ExecuteUbergraph_sampleClientForceGotHome
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsampleClientForceGotHome_C::ExecuteUbergraph_sampleClientForceGotHome(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sampleClientForceGotHome.sampleClientForceGotHome_C.ExecuteUbergraph_sampleClientForceGotHome");

	UsampleClientForceGotHome_C_ExecuteUbergraph_sampleClientForceGotHome_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
