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
	 * 		Name   -> Function policeWalkieTalkie.policeWalkieTalkie_C.checkDisplayWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AplayerCharacterBP_C*                        PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Display                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ApoliceWalkieTalkie_C::checkDisplayWidget(class AplayerCharacterBP_C* PlayerRef, bool* Display)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeWalkieTalkie.policeWalkieTalkie_C.checkDisplayWidget");
		
		ApoliceWalkieTalkie_C_checkDisplayWidget_Params params {};
		params.PlayerRef = PlayerRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Display != nullptr)
			*Display = params.Display;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeWalkieTalkie.policeWalkieTalkie_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ApoliceWalkieTalkie_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeWalkieTalkie.policeWalkieTalkie_C.UserConstructionScript");
		
		ApoliceWalkieTalkie_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeWalkieTalkie.policeWalkieTalkie_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ApoliceWalkieTalkie_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeWalkieTalkie.policeWalkieTalkie_C.ReceiveBeginPlay");
		
		ApoliceWalkieTalkie_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeWalkieTalkie.policeWalkieTalkie_C.playRadio
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundBase*                                  NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ApoliceWalkieTalkie_C::playRadio(class USoundBase* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeWalkieTalkie.policeWalkieTalkie_C.playRadio");
		
		ApoliceWalkieTalkie_C_playRadio_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeWalkieTalkie.policeWalkieTalkie_C.checkReasonToLive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApoliceWalkieTalkie_C::checkReasonToLive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeWalkieTalkie.policeWalkieTalkie_C.checkReasonToLive");
		
		ApoliceWalkieTalkie_C_checkReasonToLive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeWalkieTalkie.policeWalkieTalkie_C.checkPlayerMoving
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApoliceWalkieTalkie_C::checkPlayerMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeWalkieTalkie.policeWalkieTalkie_C.checkPlayerMoving");
		
		ApoliceWalkieTalkie_C_checkPlayerMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function policeWalkieTalkie.policeWalkieTalkie_C.ExecuteUbergraph_policeWalkieTalkie
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ApoliceWalkieTalkie_C::ExecuteUbergraph_policeWalkieTalkie(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function policeWalkieTalkie.policeWalkieTalkie_C.ExecuteUbergraph_policeWalkieTalkie");
		
		ApoliceWalkieTalkie_C_ExecuteUbergraph_policeWalkieTalkie_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ApoliceWalkieTalkie_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ApoliceWalkieTalkie_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass policeWalkieTalkie.policeWalkieTalkie_C");
		return ptr;
	}

}


