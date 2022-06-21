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
	 * 		Name   -> Function deaRaidManager.deaRaidManager_C.countRaidSecondsTotal
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            secondsCounted                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdeaRaidManager_C::countRaidSecondsTotal(int32_t* secondsCounted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.countRaidSecondsTotal");
		
		AdeaRaidManager_C_countRaidSecondsTotal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (secondsCounted != nullptr)
			*secondsCounted = params.secondsCounted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaRaidManager.deaRaidManager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdeaRaidManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.UserConstructionScript");
		
		AdeaRaidManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaRaidManager.deaRaidManager_C.raidMusicFadeOut__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AdeaRaidManager_C::raidMusicFadeOut__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.raidMusicFadeOut__FinishedFunc");
		
		AdeaRaidManager_C_raidMusicFadeOut__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaRaidManager.deaRaidManager_C.raidMusicFadeOut__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AdeaRaidManager_C::raidMusicFadeOut__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.raidMusicFadeOut__UpdateFunc");
		
		AdeaRaidManager_C_raidMusicFadeOut__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaRaidManager.deaRaidManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AdeaRaidManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.ReceiveBeginPlay");
		
		AdeaRaidManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaRaidManager.deaRaidManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdeaRaidManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.ReceiveTick");
		
		AdeaRaidManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaRaidManager.deaRaidManager_C.StartKurwaRaid
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ArentAppartmentArea_C*                       ApartmentRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdeaRaidManager_C::StartKurwaRaid(class ArentAppartmentArea_C* ApartmentRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.StartKurwaRaid");
		
		AdeaRaidManager_C_StartKurwaRaid_Params params {};
		params.ApartmentRef = ApartmentRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaRaidManager.deaRaidManager_C.raidCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdeaRaidManager_C::raidCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.raidCountdown");
		
		AdeaRaidManager_C_raidCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaRaidManager.deaRaidManager_C.overrideEndCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdeaRaidManager_C::overrideEndCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.overrideEndCountdown");
		
		AdeaRaidManager_C_overrideEndCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaRaidManager.deaRaidManager_C.fadeOutRaidMusic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdeaRaidManager_C::fadeOutRaidMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.fadeOutRaidMusic");
		
		AdeaRaidManager_C_fadeOutRaidMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaRaidManager.deaRaidManager_C.checkPlayerRanAway
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdeaRaidManager_C::checkPlayerRanAway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.checkPlayerRanAway");
		
		AdeaRaidManager_C_checkPlayerRanAway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaRaidManager.deaRaidManager_C.ExecuteUbergraph_deaRaidManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdeaRaidManager_C::ExecuteUbergraph_deaRaidManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaRaidManager.deaRaidManager_C.ExecuteUbergraph_deaRaidManager");
		
		AdeaRaidManager_C_ExecuteUbergraph_deaRaidManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdeaRaidManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdeaRaidManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass deaRaidManager.deaRaidManager_C");
		return ptr;
	}

}


