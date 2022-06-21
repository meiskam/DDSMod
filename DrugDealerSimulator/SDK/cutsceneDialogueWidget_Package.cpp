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
	 * 		Name   -> Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UcutsceneDialogueWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.Construct");
		
		UcutsceneDialogueWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Speaker                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OptionA                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        OptionB                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      functionOptionA                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      FunctionOptionB                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UcutsceneDialogueWidget_C::Setup(class AActor* Speaker, const class FText& OptionA, const class FText& OptionB, const class FString& functionOptionA, const class FString& FunctionOptionB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.Setup");
		
		UcutsceneDialogueWidget_C_Setup_Params params {};
		params.Speaker = Speaker;
		params.OptionA = OptionA;
		params.OptionB = OptionB;
		params.functionOptionA = functionOptionA;
		params.FunctionOptionB = FunctionOptionB;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.ActivateA
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UcutsceneDialogueWidget_C::ActivateA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.ActivateA");
		
		UcutsceneDialogueWidget_C_ActivateA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.ActivateB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UcutsceneDialogueWidget_C::ActivateB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.ActivateB");
		
		UcutsceneDialogueWidget_C_ActivateB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.killWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UcutsceneDialogueWidget_C::killWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.killWidget");
		
		UcutsceneDialogueWidget_C_killWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.ExecuteUbergraph_cutsceneDialogueWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UcutsceneDialogueWidget_C::ExecuteUbergraph_cutsceneDialogueWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.ExecuteUbergraph_cutsceneDialogueWidget");
		
		UcutsceneDialogueWidget_C_ExecuteUbergraph_cutsceneDialogueWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UcutsceneDialogueWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UcutsceneDialogueWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass cutsceneDialogueWidget.cutsceneDialogueWidget_C");
		return ptr;
	}

}


