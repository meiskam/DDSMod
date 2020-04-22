
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

// Function sampleClientSetGoHome.sampleClientSetGoHome_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsampleClientSetGoHome_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function sampleClientSetGoHome.sampleClientSetGoHome_C.ReceiveExecute");

	UsampleClientSetGoHome_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sampleClientSetGoHome.sampleClientSetGoHome_C.ExecuteUbergraph_sampleClientSetGoHome
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsampleClientSetGoHome_C::ExecuteUbergraph_sampleClientSetGoHome(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sampleClientSetGoHome.sampleClientSetGoHome_C.ExecuteUbergraph_sampleClientSetGoHome");

	UsampleClientSetGoHome_C_ExecuteUbergraph_sampleClientSetGoHome_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
