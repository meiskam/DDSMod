
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

// Function BTTask_Bird_Random_MaxWalkSpeed.BTTask_Bird_Random_MaxWalkSpeed_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Bird_Random_MaxWalkSpeed_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Bird_Random_MaxWalkSpeed.BTTask_Bird_Random_MaxWalkSpeed_C.ReceiveExecute");

	UBTTask_Bird_Random_MaxWalkSpeed_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Bird_Random_MaxWalkSpeed.BTTask_Bird_Random_MaxWalkSpeed_C.ExecuteUbergraph_BTTask_Bird_Random_MaxWalkSpeed
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Bird_Random_MaxWalkSpeed_C::ExecuteUbergraph_BTTask_Bird_Random_MaxWalkSpeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Bird_Random_MaxWalkSpeed.BTTask_Bird_Random_MaxWalkSpeed_C.ExecuteUbergraph_BTTask_Bird_Random_MaxWalkSpeed");

	UBTTask_Bird_Random_MaxWalkSpeed_C_ExecuteUbergraph_BTTask_Bird_Random_MaxWalkSpeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
