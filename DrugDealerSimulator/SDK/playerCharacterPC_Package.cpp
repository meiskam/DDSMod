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
	 * 		Name   -> Function playerCharacterPC.playerCharacterPC_C.HasFrontWidgets
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasWidgets                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AplayerCharacterPC_C::HasFrontWidgets(bool* HasWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerCharacterPC.playerCharacterPC_C.HasFrontWidgets");
		
		AplayerCharacterPC_C_HasFrontWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasWidgets != nullptr)
			*HasWidgets = params.HasWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerCharacterPC.playerCharacterPC_C.CloseFrontWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AplayerCharacterPC_C::CloseFrontWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerCharacterPC.playerCharacterPC_C.CloseFrontWidget");
		
		AplayerCharacterPC_C_CloseFrontWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerCharacterPC.playerCharacterPC_C.RegisterFrontWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 NewItem                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AplayerCharacterPC_C::RegisterFrontWidget(class UUserWidget* NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerCharacterPC.playerCharacterPC_C.RegisterFrontWidget");
		
		AplayerCharacterPC_C_RegisterFrontWidget_Params params {};
		params.NewItem = NewItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerCharacterPC.playerCharacterPC_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AplayerCharacterPC_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerCharacterPC.playerCharacterPC_C.UserConstructionScript");
		
		AplayerCharacterPC_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerCharacterPC.playerCharacterPC_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AplayerCharacterPC_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerCharacterPC.playerCharacterPC_C.ReceiveBeginPlay");
		
		AplayerCharacterPC_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function playerCharacterPC.playerCharacterPC_C.ExecuteUbergraph_playerCharacterPC
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AplayerCharacterPC_C::ExecuteUbergraph_playerCharacterPC(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function playerCharacterPC.playerCharacterPC_C.ExecuteUbergraph_playerCharacterPC");
		
		AplayerCharacterPC_C_ExecuteUbergraph_playerCharacterPC_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AplayerCharacterPC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AplayerCharacterPC_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass playerCharacterPC.playerCharacterPC_C");
		return ptr;
	}

}


