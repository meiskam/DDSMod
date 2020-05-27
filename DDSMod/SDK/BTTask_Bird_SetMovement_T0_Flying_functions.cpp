
#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BTTask_Bird_SetMovement_T0_Flying.BTTask_Bird_SetMovement_T0_Flying_C.OnFail_DD4F82004EF7DB5A3D219180586AD970
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Bird_SetMovement_T0_Flying_C::OnFail_DD4F82004EF7DB5A3D219180586AD970(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Bird_SetMovement_T0_Flying.BTTask_Bird_SetMovement_T0_Flying_C.OnFail_DD4F82004EF7DB5A3D219180586AD970");

	UBTTask_Bird_SetMovement_T0_Flying_C_OnFail_DD4F82004EF7DB5A3D219180586AD970_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Bird_SetMovement_T0_Flying.BTTask_Bird_SetMovement_T0_Flying_C.OnSuccess_DD4F82004EF7DB5A3D219180586AD970
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Bird_SetMovement_T0_Flying_C::OnSuccess_DD4F82004EF7DB5A3D219180586AD970(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Bird_SetMovement_T0_Flying.BTTask_Bird_SetMovement_T0_Flying_C.OnSuccess_DD4F82004EF7DB5A3D219180586AD970");

	UBTTask_Bird_SetMovement_T0_Flying_C_OnSuccess_DD4F82004EF7DB5A3D219180586AD970_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Bird_SetMovement_T0_Flying.BTTask_Bird_SetMovement_T0_Flying_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Bird_SetMovement_T0_Flying_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Bird_SetMovement_T0_Flying.BTTask_Bird_SetMovement_T0_Flying_C.ReceiveExecuteAI");

	UBTTask_Bird_SetMovement_T0_Flying_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Bird_SetMovement_T0_Flying.BTTask_Bird_SetMovement_T0_Flying_C.ExecuteUbergraph_BTTask_Bird_SetMovement_T0_Flying
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Bird_SetMovement_T0_Flying_C::ExecuteUbergraph_BTTask_Bird_SetMovement_T0_Flying(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Bird_SetMovement_T0_Flying.BTTask_Bird_SetMovement_T0_Flying_C.ExecuteUbergraph_BTTask_Bird_SetMovement_T0_Flying");

	UBTTask_Bird_SetMovement_T0_Flying_C_ExecuteUbergraph_BTTask_Bird_SetMovement_T0_Flying_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
