
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

// Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.OnFail_A030AE6644CF82915307329D4CCBBD31
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Bird_TurnAndRunFrom_Enemy_C::OnFail_A030AE6644CF82915307329D4CCBBD31(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.OnFail_A030AE6644CF82915307329D4CCBBD31");

	UBTTask_Bird_TurnAndRunFrom_Enemy_C_OnFail_A030AE6644CF82915307329D4CCBBD31_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.OnSuccess_A030AE6644CF82915307329D4CCBBD31
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Bird_TurnAndRunFrom_Enemy_C::OnSuccess_A030AE6644CF82915307329D4CCBBD31(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.OnSuccess_A030AE6644CF82915307329D4CCBBD31");

	UBTTask_Bird_TurnAndRunFrom_Enemy_C_OnSuccess_A030AE6644CF82915307329D4CCBBD31_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Bird_TurnAndRunFrom_Enemy_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.ReceiveExecuteAI");

	UBTTask_Bird_TurnAndRunFrom_Enemy_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.ExecuteUbergraph_BTTask_Bird_TurnAndRunFrom_Enemy
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Bird_TurnAndRunFrom_Enemy_C::ExecuteUbergraph_BTTask_Bird_TurnAndRunFrom_Enemy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.ExecuteUbergraph_BTTask_Bird_TurnAndRunFrom_Enemy");

	UBTTask_Bird_TurnAndRunFrom_Enemy_C_ExecuteUbergraph_BTTask_Bird_TurnAndRunFrom_Enemy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
