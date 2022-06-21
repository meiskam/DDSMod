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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDefaultLevelSequenceInstanceData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultLevelSequenceInstanceData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.DefaultLevelSequenceInstanceData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULevelSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULevelSequenceBurnInInitSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequenceBurnInInitSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01136C10
	 * 		Name   -> Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FSoftClassPath                              InBurnInClass                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ULevelSequenceBurnInOptions::SetBurnIn(const struct FSoftClassPath& InBurnInClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn");
		
		ULevelSequenceBurnInOptions_SetBurnIn_Params params {};
		params.InBurnInClass = InBurnInClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULevelSequenceBurnInOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequenceBurnInOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01136DE0
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.SetSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULevelSequence*                              InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetSequence");
		
		ALevelSequenceActor_SetSequence_Params params {};
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01136D00
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.SetEventReceivers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class AActor*>                              AdditionalReceivers                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::SetEventReceivers(TArray<class AActor*> AdditionalReceivers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetEventReceivers");
		
		ALevelSequenceActor_SetEventReceivers_Params params {};
		params.AdditionalReceivers = AdditionalReceivers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01136AC0
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.SetBinding
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  Binding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              Actors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowBindingsFromAsset                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBinding");
		
		ALevelSequenceActor_SetBinding_Params params {};
		params.Binding = Binding;
		params.Actors = Actors;
		params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01136A60
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.ResetBindings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ALevelSequenceActor::ResetBindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBindings");
		
		ALevelSequenceActor_ResetBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01136970
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.ResetBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  Binding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::ResetBinding(const struct FMovieSceneObjectBindingID& Binding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBinding");
		
		ALevelSequenceActor_ResetBinding_Params params {};
		params.Binding = Binding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01136860
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.RemoveBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  Binding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBinding");
		
		ALevelSequenceActor_RemoveBinding_Params params {};
		params.Binding = Binding;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01136760
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.GetSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bLoad                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitializePlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULevelSequence* ALevelSequenceActor::GetSequence(bool bLoad, bool bInitializePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequence");
		
		ALevelSequenceActor_GetSequence_Params params {};
		params.bLoad = bLoad;
		params.bInitializePlayer = bInitializePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011363E0
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.AddBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  Binding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowBindingsFromAsset                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBinding");
		
		ALevelSequenceActor_AddBinding_Params params {};
		params.Binding = Binding;
		params.Actor = Actor;
		params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ALevelSequenceActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALevelSequenceActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function LevelSequence.LevelSequenceBurnIn.SetSettings
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InSettings                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULevelSequenceBurnIn::SetSettings(class UObject* InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.SetSettings");
		
		ULevelSequenceBurnIn_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01136840
	 * 		Name   -> Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	class UClass* ULevelSequenceBurnIn::GetSettingsClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass");
		
		ULevelSequenceBurnIn_GetSettingsClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULevelSequenceBurnIn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequenceBurnIn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function LevelSequence.LevelSequenceDirector.OnCreated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ULevelSequenceDirector::OnCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceDirector.OnCreated");
		
		ULevelSequenceDirector_OnCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULevelSequenceDirector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequenceDirector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceDirector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULegacyLevelSequenceDirectorBlueprint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegacyLevelSequenceDirectorBlueprint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LegacyLevelSequenceDirectorBlueprint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01136530
	 * 		Name   -> Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULevelSequence*                              LevelSequence                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMovieSceneSequencePlaybackSettings         Settings                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		class ALevelSequenceActor*                         OutActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULevelSequencePlayer* ULevelSequencePlayer::STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer");
		
		ULevelSequencePlayer_CreateLevelSequencePlayer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LevelSequence = LevelSequence;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActor != nullptr)
			*OutActor = params.OutActor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULevelSequencePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequencePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return ptr;
	}

}


