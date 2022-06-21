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
	 * 		Name   -> Function appartmentViewerPawn.appartmentViewerPawn_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentViewerPawn_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerPawn.appartmentViewerPawn_C.UserConstructionScript");
		
		AappartmentViewerPawn_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerPawn.appartmentViewerPawn_C.InpActEvt_NextAppartment_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AappartmentViewerPawn_C::InpActEvt_NextAppartment_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerPawn.appartmentViewerPawn_C.InpActEvt_NextAppartment_K2Node_InputActionEvent_2");
		
		AappartmentViewerPawn_C_InpActEvt_NextAppartment_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerPawn.appartmentViewerPawn_C.InpActEvt_PreviousAppartment_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AappartmentViewerPawn_C::InpActEvt_PreviousAppartment_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerPawn.appartmentViewerPawn_C.InpActEvt_PreviousAppartment_K2Node_InputActionEvent_1");
		
		AappartmentViewerPawn_C_InpActEvt_PreviousAppartment_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerPawn.appartmentViewerPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AappartmentViewerPawn_C::InpActEvt_SpaceBar_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerPawn.appartmentViewerPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_4");
		
		AappartmentViewerPawn_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerPawn.appartmentViewerPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AappartmentViewerPawn_C::InpActEvt_SpaceBar_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerPawn.appartmentViewerPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_3");
		
		AappartmentViewerPawn_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerPawn.appartmentViewerPawn_C.InpActEvt_Escape_K2Node_InputKeyEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AappartmentViewerPawn_C::InpActEvt_Escape_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerPawn.appartmentViewerPawn_C.InpActEvt_Escape_K2Node_InputKeyEvent_2");
		
		AappartmentViewerPawn_C_InpActEvt_Escape_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerPawn.appartmentViewerPawn_C.InpActEvt_F10_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AappartmentViewerPawn_C::InpActEvt_F10_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerPawn.appartmentViewerPawn_C.InpActEvt_F10_K2Node_InputKeyEvent_1");
		
		AappartmentViewerPawn_C_InpActEvt_F10_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerPawn.appartmentViewerPawn_C.InpAxisEvt_LookSideways_K2Node_InputAxisEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AappartmentViewerPawn_C::InpAxisEvt_LookSideways_K2Node_InputAxisEvent_1(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerPawn.appartmentViewerPawn_C.InpAxisEvt_LookSideways_K2Node_InputAxisEvent_1");
		
		AappartmentViewerPawn_C_InpAxisEvt_LookSideways_K2Node_InputAxisEvent_1_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerPawn.appartmentViewerPawn_C.SpaceHeldDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentViewerPawn_C::SpaceHeldDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerPawn.appartmentViewerPawn_C.SpaceHeldDown");
		
		AappartmentViewerPawn_C_SpaceHeldDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerPawn.appartmentViewerPawn_C.ReceivePossessed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AappartmentViewerPawn_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerPawn.appartmentViewerPawn_C.ReceivePossessed");
		
		AappartmentViewerPawn_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerPawn.appartmentViewerPawn_C.ReceiveUnpossessed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 OldController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AappartmentViewerPawn_C::ReceiveUnpossessed(class AController* OldController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerPawn.appartmentViewerPawn_C.ReceiveUnpossessed");
		
		AappartmentViewerPawn_C_ReceiveUnpossessed_Params params {};
		params.OldController = OldController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerPawn.appartmentViewerPawn_C.checkStreamAreas
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AappartmentViewerPawn_C::checkStreamAreas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerPawn.appartmentViewerPawn_C.checkStreamAreas");
		
		AappartmentViewerPawn_C_checkStreamAreas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerPawn.appartmentViewerPawn_C.ExecuteUbergraph_appartmentViewerPawn
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AappartmentViewerPawn_C::ExecuteUbergraph_appartmentViewerPawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerPawn.appartmentViewerPawn_C.ExecuteUbergraph_appartmentViewerPawn");
		
		AappartmentViewerPawn_C_ExecuteUbergraph_appartmentViewerPawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AappartmentViewerPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AappartmentViewerPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass appartmentViewerPawn.appartmentViewerPawn_C");
		return ptr;
	}

}


