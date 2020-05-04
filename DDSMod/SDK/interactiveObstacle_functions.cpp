
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

// Function interactiveObstacle.interactiveObstacle_C.playObstacleJumpSound
// (Public, BlueprintCallable, BlueprintEvent)

void AinteractiveObstacle_C::playObstacleJumpSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.playObstacleJumpSound");

	AinteractiveObstacle_C_playObstacleJumpSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveObstacle.interactiveObstacle_C.jumpDirectionSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AinteractiveObstacle_C::jumpDirectionSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.jumpDirectionSetup");

	AinteractiveObstacle_C_jumpDirectionSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveObstacle.interactiveObstacle_C.checkDirections
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanJump                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AinteractiveObstacle_C::checkDirections(bool* CanJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.checkDirections");

	AinteractiveObstacle_C_checkDirections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanJump != nullptr)
		*CanJump = params.CanJump;
}


// Function interactiveObstacle.interactiveObstacle_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AinteractiveObstacle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.UserConstructionScript");

	AinteractiveObstacle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveObstacle.interactiveObstacle_C.jumpOverCam__FinishedFunc
// (BlueprintEvent)

void AinteractiveObstacle_C::jumpOverCam__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.jumpOverCam__FinishedFunc");

	AinteractiveObstacle_C_jumpOverCam__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveObstacle.interactiveObstacle_C.jumpOverCam__UpdateFunc
// (BlueprintEvent)

void AinteractiveObstacle_C::jumpOverCam__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.jumpOverCam__UpdateFunc");

	AinteractiveObstacle_C_jumpOverCam__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveObstacle.interactiveObstacle_C.jumpOverBigCam__FinishedFunc
// (BlueprintEvent)

void AinteractiveObstacle_C::jumpOverBigCam__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.jumpOverBigCam__FinishedFunc");

	AinteractiveObstacle_C_jumpOverBigCam__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveObstacle.interactiveObstacle_C.jumpOverBigCam__UpdateFunc
// (BlueprintEvent)

void AinteractiveObstacle_C::jumpOverBigCam__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.jumpOverBigCam__UpdateFunc");

	AinteractiveObstacle_C_jumpOverBigCam__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveObstacle.interactiveObstacle_C.jumpOnCam__FinishedFunc
// (BlueprintEvent)

void AinteractiveObstacle_C::jumpOnCam__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.jumpOnCam__FinishedFunc");

	AinteractiveObstacle_C_jumpOnCam__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveObstacle.interactiveObstacle_C.jumpOnCam__UpdateFunc
// (BlueprintEvent)

void AinteractiveObstacle_C::jumpOnCam__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.jumpOnCam__UpdateFunc");

	AinteractiveObstacle_C_jumpOnCam__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveObstacle.interactiveObstacle_C.slideUnderCam__FinishedFunc
// (BlueprintEvent)

void AinteractiveObstacle_C::slideUnderCam__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.slideUnderCam__FinishedFunc");

	AinteractiveObstacle_C_slideUnderCam__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveObstacle.interactiveObstacle_C.slideUnderCam__UpdateFunc
// (BlueprintEvent)

void AinteractiveObstacle_C::slideUnderCam__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.slideUnderCam__UpdateFunc");

	AinteractiveObstacle_C_slideUnderCam__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveObstacle.interactiveObstacle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AinteractiveObstacle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.ReceiveBeginPlay");

	AinteractiveObstacle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveObstacle.interactiveObstacle_C.obstacleActivation
// (BlueprintCallable, BlueprintEvent)

void AinteractiveObstacle_C::obstacleActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.obstacleActivation");

	AinteractiveObstacle_C_obstacleActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveObstacle.interactiveObstacle_C.caughtOnJump
// (BlueprintCallable, BlueprintEvent)

void AinteractiveObstacle_C::caughtOnJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.caughtOnJump");

	AinteractiveObstacle_C_caughtOnJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveObstacle.interactiveObstacle_C.resetJumpActivation
// (BlueprintCallable, BlueprintEvent)

void AinteractiveObstacle_C::resetJumpActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.resetJumpActivation");

	AinteractiveObstacle_C_resetJumpActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveObstacle.interactiveObstacle_C.ExecuteUbergraph_interactiveObstacle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AinteractiveObstacle_C::ExecuteUbergraph_interactiveObstacle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.ExecuteUbergraph_interactiveObstacle");

	AinteractiveObstacle_C_ExecuteUbergraph_interactiveObstacle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
