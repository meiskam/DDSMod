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
	 * 		Name   -> Function musicAreaPlaylist.musicAreaPlaylist_C.GetNewTrack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class USoundBase*                                  Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AmusicAreaPlaylist_C::GetNewTrack(class USoundBase** Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.GetNewTrack");
		
		AmusicAreaPlaylist_C_GetNewTrack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function musicAreaPlaylist.musicAreaPlaylist_C.getMusicVolume
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Volume                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AmusicAreaPlaylist_C::getMusicVolume(float* Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.getMusicVolume");
		
		AmusicAreaPlaylist_C_getMusicVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Volume != nullptr)
			*Volume = params.Volume;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function musicAreaPlaylist.musicAreaPlaylist_C.areaMusicEnabled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AmusicAreaPlaylist_C::areaMusicEnabled(bool* Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.areaMusicEnabled");
		
		AmusicAreaPlaylist_C_areaMusicEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Enabled != nullptr)
			*Enabled = params.Enabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function musicAreaPlaylist.musicAreaPlaylist_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AmusicAreaPlaylist_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.UserConstructionScript");
		
		AmusicAreaPlaylist_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function musicAreaPlaylist.musicAreaPlaylist_C.musicVolumeFade__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AmusicAreaPlaylist_C::musicVolumeFade__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.musicVolumeFade__FinishedFunc");
		
		AmusicAreaPlaylist_C_musicVolumeFade__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function musicAreaPlaylist.musicAreaPlaylist_C.musicVolumeFade__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AmusicAreaPlaylist_C::musicVolumeFade__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.musicVolumeFade__UpdateFunc");
		
		AmusicAreaPlaylist_C_musicVolumeFade__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function musicAreaPlaylist.musicAreaPlaylist_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AmusicAreaPlaylist_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.ReceiveBeginPlay");
		
		AmusicAreaPlaylist_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function musicAreaPlaylist.musicAreaPlaylist_C.ActivateMusicInArea
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AmusicAreaPlaylist_C::ActivateMusicInArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.ActivateMusicInArea");
		
		AmusicAreaPlaylist_C_ActivateMusicInArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function musicAreaPlaylist.musicAreaPlaylist_C.endMusic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AmusicAreaPlaylist_C::endMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.endMusic");
		
		AmusicAreaPlaylist_C_endMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function musicAreaPlaylist.musicAreaPlaylist_C.firstAreaInitiate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AmusicAreaPlaylist_C::firstAreaInitiate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.firstAreaInitiate");
		
		AmusicAreaPlaylist_C_firstAreaInitiate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function musicAreaPlaylist.musicAreaPlaylist_C.bypassPlayMusic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AmusicAreaPlaylist_C::bypassPlayMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.bypassPlayMusic");
		
		AmusicAreaPlaylist_C_bypassPlayMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function musicAreaPlaylist.musicAreaPlaylist_C.ExecuteUbergraph_musicAreaPlaylist
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AmusicAreaPlaylist_C::ExecuteUbergraph_musicAreaPlaylist(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function musicAreaPlaylist.musicAreaPlaylist_C.ExecuteUbergraph_musicAreaPlaylist");
		
		AmusicAreaPlaylist_C_ExecuteUbergraph_musicAreaPlaylist_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AmusicAreaPlaylist_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AmusicAreaPlaylist_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass musicAreaPlaylist.musicAreaPlaylist_C");
		return ptr;
	}

}


