
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

// Function sampleClientInSale.sampleClientInSale_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsampleClientInSale_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function sampleClientInSale.sampleClientInSale_C.ReceiveTick");

	UsampleClientInSale_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sampleClientInSale.sampleClientInSale_C.ExecuteUbergraph_sampleClientInSale
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsampleClientInSale_C::ExecuteUbergraph_sampleClientInSale(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sampleClientInSale.sampleClientInSale_C.ExecuteUbergraph_sampleClientInSale");

	UsampleClientInSale_C_ExecuteUbergraph_sampleClientInSale_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
