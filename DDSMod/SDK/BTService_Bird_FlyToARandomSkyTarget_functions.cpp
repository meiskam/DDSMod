
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

// Function BTService_Bird_FlyToARandomSkyTarget.BTService_Bird_FlyToARandomSkyTarget_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTService_Bird_FlyToARandomSkyTarget_C::ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_Bird_FlyToARandomSkyTarget.BTService_Bird_FlyToARandomSkyTarget_C.ReceiveTickAI");

	UBTService_Bird_FlyToARandomSkyTarget_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTService_Bird_FlyToARandomSkyTarget.BTService_Bird_FlyToARandomSkyTarget_C.ExecuteUbergraph_BTService_Bird_FlyToARandomSkyTarget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTService_Bird_FlyToARandomSkyTarget_C::ExecuteUbergraph_BTService_Bird_FlyToARandomSkyTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_Bird_FlyToARandomSkyTarget.BTService_Bird_FlyToARandomSkyTarget_C.ExecuteUbergraph_BTService_Bird_FlyToARandomSkyTarget");

	UBTService_Bird_FlyToARandomSkyTarget_C_ExecuteUbergraph_BTService_Bird_FlyToARandomSkyTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
