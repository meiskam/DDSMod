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
	 * 		RVA    -> 0x00308B40
	 * 		Name   -> Function RamaSaveSystem.RamaSaveComponent.Test
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UScriptStruct*                               Struct                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              ByteData                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void URamaSaveComponent::STATIC_Test(class UScriptStruct* Struct, TArray<unsigned char>* ByteData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveComponent.Test");
		
		URamaSaveComponent_Test_Params params {};
		params.Struct = Struct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ByteData != nullptr)
			*ByteData = params.ByteData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function RamaSaveSystem.RamaSaveComponent.RamaSave_PreSave
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void URamaSaveComponent::RamaSave_PreSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveComponent.RamaSave_PreSave");
		
		URamaSaveComponent_RamaSave_PreSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function RamaSaveSystem.RamaSaveComponent.RamaSave_PostLoad
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void URamaSaveComponent::RamaSave_PostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveComponent.RamaSave_PostLoad");
		
		URamaSaveComponent_RamaSave_PostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00307680
	 * 		Name   -> Function RamaSaveSystem.RamaSaveComponent.RamaSave_HasSaveTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      SaveTag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URamaSaveComponent::RamaSave_HasSaveTag(const class FString& SaveTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveComponent.RamaSave_HasSaveTag");
		
		URamaSaveComponent_RamaSave_HasSaveTag_Params params {};
		params.SaveTag = SaveTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003074B0
	 * 		Name   -> Function RamaSaveSystem.RamaSaveComponent.RamaSave_HasAnyOfSaveTags
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              SaveTags                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool URamaSaveComponent::RamaSave_HasAnyOfSaveTags(TArray<class FString> SaveTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveComponent.RamaSave_HasAnyOfSaveTags");
		
		URamaSaveComponent_RamaSave_HasAnyOfSaveTags_Params params {};
		params.SaveTags = SaveTags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00305EF0
	 * 		Name   -> Function RamaSaveSystem.RamaSaveComponent.GetActorStreamingLevelPackageName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString URamaSaveComponent::GetActorStreamingLevelPackageName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveComponent.GetActorStreamingLevelPackageName");
		
		URamaSaveComponent_GetActorStreamingLevelPackageName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00305EC0
	 * 		Name   -> Function RamaSaveSystem.RamaSaveComponent.GetActorIsInPersistentLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool URamaSaveComponent::GetActorIsInPersistentLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveComponent.GetActorIsInPersistentLevel");
		
		URamaSaveComponent_GetActorIsInPersistentLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URamaSaveComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URamaSaveComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RamaSaveSystem.RamaSaveComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function RamaSaveSystem.RamaSaveEngine.SaveCancelledForStreamingLevel
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARamaSaveEngine::SaveCancelledForStreamingLevel(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveEngine.SaveCancelledForStreamingLevel");
		
		ARamaSaveEngine_SaveCancelledForStreamingLevel_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function RamaSaveSystem.RamaSaveEngine.LoadProcessFinished_PreActorFullyLoaded
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARamaSaveEngine::LoadProcessFinished_PreActorFullyLoaded(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveEngine.LoadProcessFinished_PreActorFullyLoaded");
		
		ARamaSaveEngine_LoadProcessFinished_PreActorFullyLoaded_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function RamaSaveSystem.RamaSaveEngine.LoadProcessFinished
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARamaSaveEngine::LoadProcessFinished(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveEngine.LoadProcessFinished");
		
		ARamaSaveEngine_LoadProcessFinished_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function RamaSaveSystem.RamaSaveEngine.Async_SaveStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARamaSaveEngine::Async_SaveStarted(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveEngine.Async_SaveStarted");
		
		ARamaSaveEngine_Async_SaveStarted_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function RamaSaveSystem.RamaSaveEngine.Async_SaveFinished
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARamaSaveEngine::Async_SaveFinished(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveEngine.Async_SaveFinished");
		
		ARamaSaveEngine_Async_SaveFinished_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function RamaSaveSystem.RamaSaveEngine.Async_SaveCancelled
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARamaSaveEngine::Async_SaveCancelled(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveEngine.Async_SaveCancelled");
		
		ARamaSaveEngine_Async_SaveCancelled_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function RamaSaveSystem.RamaSaveEngine.Async_ProgressUpdate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARamaSaveEngine::Async_ProgressUpdate(const class FString& Filename, float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveEngine.Async_ProgressUpdate");
		
		ARamaSaveEngine_Async_ProgressUpdate_Params params {};
		params.Filename = Filename;
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ARamaSaveEngine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARamaSaveEngine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RamaSaveSystem.RamaSaveEngine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003089E0
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RenameFile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Dest                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Source                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URamaSaveLibrary::STATIC_RenameFile(const class FString& Dest, const class FString& Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RenameFile");
		
		URamaSaveLibrary_RenameFile_Params params {};
		params.Dest = Dest;
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00308900
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RemoveLevelPIEPrefix
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      LevelName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString URamaSaveLibrary::STATIC_RemoveLevelPIEPrefix(const class FString& LevelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RemoveLevelPIEPrefix");
		
		URamaSaveLibrary_RemoveLevelPIEPrefix_Params params {};
		params.LevelName = LevelName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003069E0
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSavePaths_SavedDir
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString URamaSaveLibrary::STATIC_RamaSavePaths_SavedDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSavePaths_SavedDir");
		
		URamaSaveLibrary_RamaSavePaths_SavedDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00306950
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSavePaths_GameRootDirectory
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString URamaSaveLibrary::STATIC_RamaSavePaths_GameRootDirectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSavePaths_GameRootDirectory");
		
		URamaSaveLibrary_RamaSavePaths_GameRootDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00306860
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSavePaths_BinaryLocation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString URamaSaveLibrary::STATIC_RamaSavePaths_BinaryLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSavePaths_BinaryLocation");
		
		URamaSaveLibrary_RamaSavePaths_BinaryLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00308530
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSave_SaveToFile_WithTags
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FileIOSuccess                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               AllComponentsSaved                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              SaveOnlyActorsWithTags                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      SaveOnlyStreamingLevel                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IgnoreStreamingActorsIfNoLevelSpecified                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class URamaSaveObject*                             StaticSaveData                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URamaSaveLibrary::STATIC_RamaSave_SaveToFile_WithTags(class UObject* WorldContextObject, const class FString& Filename, bool* FileIOSuccess, bool* AllComponentsSaved, TArray<class FString> SaveOnlyActorsWithTags, const class FString& SaveOnlyStreamingLevel, bool IgnoreStreamingActorsIfNoLevelSpecified, class URamaSaveObject* StaticSaveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_SaveToFile_WithTags");
		
		URamaSaveLibrary_RamaSave_SaveToFile_WithTags_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Filename = Filename;
		params.SaveOnlyActorsWithTags = SaveOnlyActorsWithTags;
		params.SaveOnlyStreamingLevel = SaveOnlyStreamingLevel;
		params.IgnoreStreamingActorsIfNoLevelSpecified = IgnoreStreamingActorsIfNoLevelSpecified;
		params.StaticSaveData = StaticSaveData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FileIOSuccess != nullptr)
			*FileIOSuccess = params.FileIOSuccess;
		if (AllComponentsSaved != nullptr)
			*AllComponentsSaved = params.AllComponentsSaved;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00308220
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSave_SaveToFile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FileIOSuccess                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               AllComponentsSaved                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SaveOnlyStreamingLevel                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IgnoreStreamingActorsIfNoLevelSpecified                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class URamaSaveObject*                             StaticSaveData                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URamaSaveLibrary::STATIC_RamaSave_SaveToFile(class UObject* WorldContextObject, const class FString& Filename, bool* FileIOSuccess, bool* AllComponentsSaved, const class FString& SaveOnlyStreamingLevel, bool IgnoreStreamingActorsIfNoLevelSpecified, class URamaSaveObject* StaticSaveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_SaveToFile");
		
		URamaSaveLibrary_RamaSave_SaveToFile_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Filename = Filename;
		params.SaveOnlyStreamingLevel = SaveOnlyStreamingLevel;
		params.IgnoreStreamingActorsIfNoLevelSpecified = IgnoreStreamingActorsIfNoLevelSpecified;
		params.StaticSaveData = StaticSaveData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FileIOSuccess != nullptr)
			*FileIOSuccess = params.FileIOSuccess;
		if (AllComponentsSaved != nullptr)
			*AllComponentsSaved = params.AllComponentsSaved;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003080C0
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSave_SaveOnlyStaticToFile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FileIOSuccess                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class URamaSaveObject*                             StaticSaveData                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URamaSaveLibrary::STATIC_RamaSave_SaveOnlyStaticToFile(const class FString& Filename, bool* FileIOSuccess, class URamaSaveObject* StaticSaveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_SaveOnlyStaticToFile");
		
		URamaSaveLibrary_RamaSave_SaveOnlyStaticToFile_Params params {};
		params.Filename = Filename;
		params.StaticSaveData = StaticSaveData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FileIOSuccess != nullptr)
			*FileIOSuccess = params.FileIOSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00307ED0
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadStreamingStateFromFile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FileIOSuccess                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              StreamingLevelsStates                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t URamaSaveLibrary::STATIC_RamaSave_LoadStreamingStateFromFile(class UObject* WorldContextObject, bool* FileIOSuccess, const class FString& Filename, TArray<class FString>* StreamingLevelsStates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadStreamingStateFromFile");
		
		URamaSaveLibrary_RamaSave_LoadStreamingStateFromFile_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FileIOSuccess != nullptr)
			*FileIOSuccess = params.FileIOSuccess;
		if (StreamingLevelsStates != nullptr)
			*StreamingLevelsStates = params.StreamingLevelsStates;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00307DA0
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadStaticDataFromFile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               FileIOSuccess                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URamaSaveObject* URamaSaveLibrary::STATIC_RamaSave_LoadStaticDataFromFile(bool* FileIOSuccess, const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadStaticDataFromFile");
		
		URamaSaveLibrary_RamaSave_LoadStaticDataFromFile_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FileIOSuccess != nullptr)
			*FileIOSuccess = params.FileIOSuccess;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00307A50
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadFromFileWithTags
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              LoadOnlyActorsWithSaveTags                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               FileIOSuccess                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DestroyActorsBeforeLoad                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DontLoadPlayerPawns                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               HandleStreamingLevelsLoadingAndUnloading                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LoadOnlyStreamingLevel                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URamaSaveLibrary::STATIC_RamaSave_LoadFromFileWithTags(class UObject* WorldContextObject, TArray<class FString> LoadOnlyActorsWithSaveTags, bool* FileIOSuccess, const class FString& Filename, bool DestroyActorsBeforeLoad, bool DontLoadPlayerPawns, bool HandleStreamingLevelsLoadingAndUnloading, const class FString& LoadOnlyStreamingLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadFromFileWithTags");
		
		URamaSaveLibrary_RamaSave_LoadFromFileWithTags_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LoadOnlyActorsWithSaveTags = LoadOnlyActorsWithSaveTags;
		params.Filename = Filename;
		params.DestroyActorsBeforeLoad = DestroyActorsBeforeLoad;
		params.DontLoadPlayerPawns = DontLoadPlayerPawns;
		params.HandleStreamingLevelsLoadingAndUnloading = HandleStreamingLevelsLoadingAndUnloading;
		params.LoadOnlyStreamingLevel = LoadOnlyStreamingLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FileIOSuccess != nullptr)
			*FileIOSuccess = params.FileIOSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00307790
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadFromFile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FileIOSuccess                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DestroyActorsBeforeLoad                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DontLoadPlayerPawns                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               HandleStreamingLevelsLoadingAndUnloading                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LoadOnlyStreamingLevel                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URamaSaveLibrary::STATIC_RamaSave_LoadFromFile(class UObject* WorldContextObject, bool* FileIOSuccess, const class FString& Filename, bool DestroyActorsBeforeLoad, bool DontLoadPlayerPawns, bool HandleStreamingLevelsLoadingAndUnloading, const class FString& LoadOnlyStreamingLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadFromFile");
		
		URamaSaveLibrary_RamaSave_LoadFromFile_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Filename = Filename;
		params.DestroyActorsBeforeLoad = DestroyActorsBeforeLoad;
		params.DontLoadPlayerPawns = DontLoadPlayerPawns;
		params.HandleStreamingLevelsLoadingAndUnloading = HandleStreamingLevelsLoadingAndUnloading;
		params.LoadOnlyStreamingLevel = LoadOnlyStreamingLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FileIOSuccess != nullptr)
			*FileIOSuccess = params.FileIOSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00307280
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSave_GetFileTimeStampText
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Verbose                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText URamaSaveLibrary::STATIC_RamaSave_GetFileTimeStampText(const class FString& File, bool Verbose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_GetFileTimeStampText");
		
		URamaSaveLibrary_RamaSave_GetFileTimeStampText_Params params {};
		params.File = File;
		params.Verbose = Verbose;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003071B0
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSave_GetFileTimeStamp
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDateTime URamaSaveLibrary::STATIC_RamaSave_GetFileTimeStamp(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_GetFileTimeStamp");
		
		URamaSaveLibrary_RamaSave_GetFileTimeStamp_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003070F0
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSave_FolderExists
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Dir                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URamaSaveLibrary::STATIC_RamaSave_FolderExists(const class FString& Dir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_FolderExists");
		
		URamaSaveLibrary_RamaSave_FolderExists_Params params {};
		params.Dir = Dir;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00307030
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSave_FileExists
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URamaSaveLibrary::STATIC_RamaSave_FileExists(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_FileExists");
		
		URamaSaveLibrary_RamaSave_FileExists_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00306F70
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSave_DeleteFile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URamaSaveLibrary::STATIC_RamaSave_DeleteFile(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_DeleteFile");
		
		URamaSaveLibrary_RamaSave_DeleteFile_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00306E30
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSave_DateTimeToString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDateTime                                   TheDateTime                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AsString                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URamaSaveLibrary::STATIC_RamaSave_DateTimeToString(const struct FDateTime& TheDateTime, class FString* AsString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_DateTimeToString");
		
		URamaSaveLibrary_RamaSave_DateTimeToString_Params params {};
		params.TheDateTime = TheDateTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsString != nullptr)
			*AsString = params.AsString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00306D60
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSave_DateTimeFromString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      AsString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   TheDateTime                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URamaSaveLibrary::STATIC_RamaSave_DateTimeFromString(const class FString& AsString, struct FDateTime* TheDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_DateTimeFromString");
		
		URamaSaveLibrary_RamaSave_DateTimeFromString_Params params {};
		params.AsString = AsString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TheDateTime != nullptr)
			*TheDateTime = params.TheDateTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00306C40
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSave_CopyFile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Dest                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Src                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URamaSaveLibrary::STATIC_RamaSave_CopyFile(const class FString& Dest, const class FString& Src)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_CopyFile");
		
		URamaSaveLibrary_RamaSave_CopyFile_Params params {};
		params.Dest = Dest;
		params.Src = Src;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00306AF0
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSave_ClearLevel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DontDestroyPlayers                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ClearOnlyStreamingLevel                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URamaSaveLibrary::STATIC_RamaSave_ClearLevel(class UObject* WorldContextObject, bool DontDestroyPlayers, const class FString& ClearOnlyStreamingLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_ClearLevel");
		
		URamaSaveLibrary_RamaSave_ClearLevel_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DontDestroyPlayers = DontDestroyPlayers;
		params.ClearOnlyStreamingLevel = ClearOnlyStreamingLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00306A70
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaSave_CancelAsyncSaveProcess
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URamaSaveLibrary::STATIC_RamaSave_CancelAsyncSaveProcess(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_CancelAsyncSaveProcess");
		
		URamaSaveLibrary_RamaSave_CancelAsyncSaveProcess_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003066A0
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.RamaFileIO_GetFiles
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      FullPathOfBaseDir                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              FilenamesOut                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Recursive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FilterByExtension                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URamaSaveLibrary::STATIC_RamaFileIO_GetFiles(const class FString& FullPathOfBaseDir, TArray<class FString>* FilenamesOut, bool Recursive, const class FString& FilterByExtension)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaFileIO_GetFiles");
		
		URamaSaveLibrary_RamaFileIO_GetFiles_Params params {};
		params.FullPathOfBaseDir = FullPathOfBaseDir;
		params.Recursive = Recursive;
		params.FilterByExtension = FilterByExtension;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FilenamesOut != nullptr)
			*FilenamesOut = params.FilenamesOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003065B0
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.GetDocumentsFolder
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString URamaSaveLibrary::STATIC_GetDocumentsFolder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.GetDocumentsFolder");
		
		URamaSaveLibrary_GetDocumentsFolder_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00306370
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveComponentsWithTags
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              SaveTags                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class URamaSaveComponent*>                  RamaSaveComponents                                         (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class FString                                      GetOnlyStreamingLevelName                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IgnoreStreamingActorsIfNoStreamingLevelSpecified           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URamaSaveLibrary::STATIC_GetAllRamaSaveComponentsWithTags(class UObject* WorldContextObject, TArray<class FString> SaveTags, TArray<class URamaSaveComponent*>* RamaSaveComponents, const class FString& GetOnlyStreamingLevelName, bool IgnoreStreamingActorsIfNoStreamingLevelSpecified)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveComponentsWithTags");
		
		URamaSaveLibrary_GetAllRamaSaveComponentsWithTags_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SaveTags = SaveTags;
		params.GetOnlyStreamingLevelName = GetOnlyStreamingLevelName;
		params.IgnoreStreamingActorsIfNoStreamingLevelSpecified = IgnoreStreamingActorsIfNoStreamingLevelSpecified;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RamaSaveComponents != nullptr)
			*RamaSaveComponents = params.RamaSaveComponents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003061C0
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveComponents
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class URamaSaveComponent*>                  RamaSaveComponents                                         (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class FString                                      GetOnlyStreamingLevelName                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IgnoreStreamingActorsIfNoStreamingLevelSpecified           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URamaSaveLibrary::STATIC_GetAllRamaSaveComponents(class UObject* WorldContextObject, TArray<class URamaSaveComponent*>* RamaSaveComponents, const class FString& GetOnlyStreamingLevelName, bool IgnoreStreamingActorsIfNoStreamingLevelSpecified)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveComponents");
		
		URamaSaveLibrary_GetAllRamaSaveComponents_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GetOnlyStreamingLevelName = GetOnlyStreamingLevelName;
		params.IgnoreStreamingActorsIfNoStreamingLevelSpecified = IgnoreStreamingActorsIfNoStreamingLevelSpecified;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RamaSaveComponents != nullptr)
			*RamaSaveComponents = params.RamaSaveComponents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00306050
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveActorsWithTags
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              SaveTags                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              RamaSaveActors                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void URamaSaveLibrary::STATIC_GetAllRamaSaveActorsWithTags(class UObject* WorldContextObject, TArray<class FString> SaveTags, TArray<class AActor*>* RamaSaveActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveActorsWithTags");
		
		URamaSaveLibrary_GetAllRamaSaveActorsWithTags_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SaveTags = SaveTags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RamaSaveActors != nullptr)
			*RamaSaveActors = params.RamaSaveActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00305F70
	 * 		Name   -> Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveActors
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              RamaSaveActors                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void URamaSaveLibrary::STATIC_GetAllRamaSaveActors(class UObject* WorldContextObject, TArray<class AActor*>* RamaSaveActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveActors");
		
		URamaSaveLibrary_GetAllRamaSaveActors_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RamaSaveActors != nullptr)
			*RamaSaveActors = params.RamaSaveActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URamaSaveLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URamaSaveLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RamaSaveSystem.RamaSaveLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URamaSaveObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URamaSaveObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RamaSaveSystem.RamaSaveObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URamaSaveSystemSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URamaSaveSystemSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RamaSaveSystem.RamaSaveSystemSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URamaSaveUtility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URamaSaveUtility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RamaSaveSystem.RamaSaveUtility");
		return ptr;
	}

}


