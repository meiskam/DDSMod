/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveObstacle.interactiveObstacle_C.playObstacleJumpSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AinteractiveObstacle_C::playObstacleJumpSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.playObstacleJumpSound");
		
		AinteractiveObstacle_C_playObstacleJumpSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveObstacle.interactiveObstacle_C.jumpDirectionSetup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AinteractiveObstacle_C::jumpDirectionSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.jumpDirectionSetup");
		
		AinteractiveObstacle_C_jumpDirectionSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveObstacle.interactiveObstacle_C.checkDirections
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanJump                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AinteractiveObstacle_C::checkDirections(bool* CanJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.checkDirections");
		
		AinteractiveObstacle_C_checkDirections_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanJump != nullptr)
			*CanJump = params.CanJump;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveObstacle.interactiveObstacle_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AinteractiveObstacle_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.UserConstructionScript");
		
		AinteractiveObstacle_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveObstacle.interactiveObstacle_C.jumpOverCam__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AinteractiveObstacle_C::jumpOverCam__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.jumpOverCam__FinishedFunc");
		
		AinteractiveObstacle_C_jumpOverCam__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveObstacle.interactiveObstacle_C.jumpOverCam__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AinteractiveObstacle_C::jumpOverCam__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.jumpOverCam__UpdateFunc");
		
		AinteractiveObstacle_C_jumpOverCam__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveObstacle.interactiveObstacle_C.jumpOverBigCam__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AinteractiveObstacle_C::jumpOverBigCam__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.jumpOverBigCam__FinishedFunc");
		
		AinteractiveObstacle_C_jumpOverBigCam__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveObstacle.interactiveObstacle_C.jumpOverBigCam__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AinteractiveObstacle_C::jumpOverBigCam__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.jumpOverBigCam__UpdateFunc");
		
		AinteractiveObstacle_C_jumpOverBigCam__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveObstacle.interactiveObstacle_C.jumpOnCam__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AinteractiveObstacle_C::jumpOnCam__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.jumpOnCam__FinishedFunc");
		
		AinteractiveObstacle_C_jumpOnCam__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveObstacle.interactiveObstacle_C.jumpOnCam__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AinteractiveObstacle_C::jumpOnCam__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.jumpOnCam__UpdateFunc");
		
		AinteractiveObstacle_C_jumpOnCam__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveObstacle.interactiveObstacle_C.slideUnderCam__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AinteractiveObstacle_C::slideUnderCam__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.slideUnderCam__FinishedFunc");
		
		AinteractiveObstacle_C_slideUnderCam__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveObstacle.interactiveObstacle_C.slideUnderCam__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AinteractiveObstacle_C::slideUnderCam__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.slideUnderCam__UpdateFunc");
		
		AinteractiveObstacle_C_slideUnderCam__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveObstacle.interactiveObstacle_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AinteractiveObstacle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.ReceiveBeginPlay");
		
		AinteractiveObstacle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveObstacle.interactiveObstacle_C.obstacleActivation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AinteractiveObstacle_C::obstacleActivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.obstacleActivation");
		
		AinteractiveObstacle_C_obstacleActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveObstacle.interactiveObstacle_C.caughtOnJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AinteractiveObstacle_C::caughtOnJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.caughtOnJump");
		
		AinteractiveObstacle_C_caughtOnJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveObstacle.interactiveObstacle_C.resetJumpActivation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AinteractiveObstacle_C::resetJumpActivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.resetJumpActivation");
		
		AinteractiveObstacle_C_resetJumpActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function interactiveObstacle.interactiveObstacle_C.ExecuteUbergraph_interactiveObstacle
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AinteractiveObstacle_C::ExecuteUbergraph_interactiveObstacle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function interactiveObstacle.interactiveObstacle_C.ExecuteUbergraph_interactiveObstacle");
		
		AinteractiveObstacle_C_ExecuteUbergraph_interactiveObstacle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AinteractiveObstacle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AinteractiveObstacle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass interactiveObstacle.interactiveObstacle_C");
		return ptr;
	}

}


