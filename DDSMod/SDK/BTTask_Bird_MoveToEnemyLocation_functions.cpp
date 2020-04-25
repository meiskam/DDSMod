
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

// Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.OnFail_F22B8A5A43E73BA6CA860ABAD38534D2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Bird_MoveToEnemyLocation_C::OnFail_F22B8A5A43E73BA6CA860ABAD38534D2(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.OnFail_F22B8A5A43E73BA6CA860ABAD38534D2");

	UBTTask_Bird_MoveToEnemyLocation_C_OnFail_F22B8A5A43E73BA6CA860ABAD38534D2_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.OnSuccess_F22B8A5A43E73BA6CA860ABAD38534D2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Bird_MoveToEnemyLocation_C::OnSuccess_F22B8A5A43E73BA6CA860ABAD38534D2(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.OnSuccess_F22B8A5A43E73BA6CA860ABAD38534D2");

	UBTTask_Bird_MoveToEnemyLocation_C_OnSuccess_F22B8A5A43E73BA6CA860ABAD38534D2_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Bird_MoveToEnemyLocation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.ReceiveExecuteAI");

	UBTTask_Bird_MoveToEnemyLocation_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.ExecuteUbergraph_BTTask_Bird_MoveToEnemyLocation
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Bird_MoveToEnemyLocation_C::ExecuteUbergraph_BTTask_Bird_MoveToEnemyLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.ExecuteUbergraph_BTTask_Bird_MoveToEnemyLocation");

	UBTTask_Bird_MoveToEnemyLocation_C_ExecuteUbergraph_BTTask_Bird_MoveToEnemyLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
