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
	 * 		Name   -> Function SewageExitPeekPawn.SewageExitPeekPawn_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASewageExitPeekPawn_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.UserConstructionScript");
		
		ASewageExitPeekPawn_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_Escape_K2Node_InputKeyEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASewageExitPeekPawn_C::InpActEvt_Escape_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_Escape_K2Node_InputKeyEvent_4");
		
		ASewageExitPeekPawn_C_InpActEvt_Escape_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_F10_K2Node_InputKeyEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASewageExitPeekPawn_C::InpActEvt_F10_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_F10_K2Node_InputKeyEvent_3");
		
		ASewageExitPeekPawn_C_InpActEvt_F10_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASewageExitPeekPawn_C::InpActEvt_SpaceBar_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_2");
		
		ASewageExitPeekPawn_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASewageExitPeekPawn_C::InpActEvt_SpaceBar_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_1");
		
		ASewageExitPeekPawn_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SewageExitPeekPawn.SewageExitPeekPawn_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASewageExitPeekPawn_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.ReceiveTick");
		
		ASewageExitPeekPawn_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpAxisEvt_LookSideways_K2Node_InputAxisEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASewageExitPeekPawn_C::InpAxisEvt_LookSideways_K2Node_InputAxisEvent_1(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpAxisEvt_LookSideways_K2Node_InputAxisEvent_1");
		
		ASewageExitPeekPawn_C_InpAxisEvt_LookSideways_K2Node_InputAxisEvent_1_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SewageExitPeekPawn.SewageExitPeekPawn_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AsewageExit_C*                               ExitLadderRef                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AplayerCharacterBP_C*                        PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASewageExitPeekPawn_C::Setup(class AsewageExit_C* ExitLadderRef, class AplayerCharacterBP_C* PlayerRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.Setup");
		
		ASewageExitPeekPawn_C_Setup_Params params {};
		params.ExitLadderRef = ExitLadderRef;
		params.PlayerRef = PlayerRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SewageExitPeekPawn.SewageExitPeekPawn_C.ReceivePossessed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASewageExitPeekPawn_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.ReceivePossessed");
		
		ASewageExitPeekPawn_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SewageExitPeekPawn.SewageExitPeekPawn_C.ReceiveUnpossessed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 OldController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASewageExitPeekPawn_C::ReceiveUnpossessed(class AController* OldController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.ReceiveUnpossessed");
		
		ASewageExitPeekPawn_C_ReceiveUnpossessed_Params params {};
		params.OldController = OldController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SewageExitPeekPawn.SewageExitPeekPawn_C.ExecuteUbergraph_SewageExitPeekPawn
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASewageExitPeekPawn_C::ExecuteUbergraph_SewageExitPeekPawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SewageExitPeekPawn.SewageExitPeekPawn_C.ExecuteUbergraph_SewageExitPeekPawn");
		
		ASewageExitPeekPawn_C_ExecuteUbergraph_SewageExitPeekPawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ASewageExitPeekPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASewageExitPeekPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SewageExitPeekPawn.SewageExitPeekPawn_C");
		return ptr;
	}

}


