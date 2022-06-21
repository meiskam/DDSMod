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
	 * 		Name   -> Function mainMenuPawn.mainMenuPawn_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AmainMenuPawn_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.UserConstructionScript");
		
		AmainMenuPawn_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainMenuPawn.mainMenuPawn_C.zoomIn__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AmainMenuPawn_C::zoomIn__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.zoomIn__FinishedFunc");
		
		AmainMenuPawn_C_zoomIn__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainMenuPawn.mainMenuPawn_C.zoomIn__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AmainMenuPawn_C::zoomIn__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.zoomIn__UpdateFunc");
		
		AmainMenuPawn_C_zoomIn__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainMenuPawn.mainMenuPawn_C.CamZoomLoop__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AmainMenuPawn_C::CamZoomLoop__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.CamZoomLoop__FinishedFunc");
		
		AmainMenuPawn_C_CamZoomLoop__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainMenuPawn.mainMenuPawn_C.CamZoomLoop__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AmainMenuPawn_C::CamZoomLoop__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.CamZoomLoop__UpdateFunc");
		
		AmainMenuPawn_C_CamZoomLoop__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainMenuPawn.mainMenuPawn_C.museicFade__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AmainMenuPawn_C::museicFade__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.museicFade__FinishedFunc");
		
		AmainMenuPawn_C_museicFade__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainMenuPawn.mainMenuPawn_C.museicFade__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AmainMenuPawn_C::museicFade__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.museicFade__UpdateFunc");
		
		AmainMenuPawn_C_museicFade__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainMenuPawn.mainMenuPawn_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AmainMenuPawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.ReceiveBeginPlay");
		
		AmainMenuPawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainMenuPawn.mainMenuPawn_C.fadeOutMusic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AmainMenuPawn_C::fadeOutMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.fadeOutMusic");
		
		AmainMenuPawn_C_fadeOutMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainMenuPawn.mainMenuPawn_C.startMusic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AmainMenuPawn_C::startMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.startMusic");
		
		AmainMenuPawn_C_startMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainMenuPawn.mainMenuPawn_C.updateCamSlide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CamX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CamY                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AmainMenuPawn_C::updateCamSlide(float CamX, float CamY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.updateCamSlide");
		
		AmainMenuPawn_C_updateCamSlide_Params params {};
		params.CamX = CamX;
		params.CamY = CamY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainMenuPawn.mainMenuPawn_C.BndEvt__muzykaIntro_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class USoundWave*                                  PlayingSoundWave                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlaybackPercent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AmainMenuPawn_C::BndEvt__muzykaIntro_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature(class USoundWave* PlayingSoundWave, float PlaybackPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.BndEvt__muzykaIntro_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature");
		
		AmainMenuPawn_C_BndEvt__muzykaIntro_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature_Params params {};
		params.PlayingSoundWave = PlayingSoundWave;
		params.PlaybackPercent = PlaybackPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function mainMenuPawn.mainMenuPawn_C.ExecuteUbergraph_mainMenuPawn
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AmainMenuPawn_C::ExecuteUbergraph_mainMenuPawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function mainMenuPawn.mainMenuPawn_C.ExecuteUbergraph_mainMenuPawn");
		
		AmainMenuPawn_C_ExecuteUbergraph_mainMenuPawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AmainMenuPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AmainMenuPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass mainMenuPawn.mainMenuPawn_C");
		return ptr;
	}

}


