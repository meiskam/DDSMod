
#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function RamaSaveSystem.RamaSaveComponent.Test
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UScriptStruct*           Struct                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ByteData                       (Parm, OutParm, ZeroConstructor)

void URamaSaveComponent::STATIC_Test(class UScriptStruct* Struct, TArray<unsigned char>* ByteData)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveComponent.Test");

	URamaSaveComponent_Test_Params params;
	params.Struct = Struct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ByteData != nullptr)
		*ByteData = params.ByteData;
}


// Function RamaSaveSystem.RamaSaveComponent.RamaSave_PreSave
// (Event, Public, BlueprintEvent)

void URamaSaveComponent::RamaSave_PreSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveComponent.RamaSave_PreSave");

	URamaSaveComponent_RamaSave_PreSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RamaSaveSystem.RamaSaveComponent.RamaSave_PostLoad
// (Event, Public, BlueprintEvent)

void URamaSaveComponent::RamaSave_PostLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveComponent.RamaSave_PostLoad");

	URamaSaveComponent_RamaSave_PostLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RamaSaveSystem.RamaSaveComponent.RamaSave_HasSaveTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 SaveTag                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URamaSaveComponent::RamaSave_HasSaveTag(const struct FString& SaveTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveComponent.RamaSave_HasSaveTag");

	URamaSaveComponent_RamaSave_HasSaveTag_Params params;
	params.SaveTag = SaveTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveComponent.RamaSave_HasAnyOfSaveTags
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FString>         SaveTags                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URamaSaveComponent::RamaSave_HasAnyOfSaveTags(TArray<struct FString> SaveTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveComponent.RamaSave_HasAnyOfSaveTags");

	URamaSaveComponent_RamaSave_HasAnyOfSaveTags_Params params;
	params.SaveTags = SaveTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveComponent.GetActorStreamingLevelPackageName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString URamaSaveComponent::GetActorStreamingLevelPackageName()
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveComponent.GetActorStreamingLevelPackageName");

	URamaSaveComponent_GetActorStreamingLevelPackageName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveComponent.GetActorIsInPersistentLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URamaSaveComponent::GetActorIsInPersistentLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveComponent.GetActorIsInPersistentLevel");

	URamaSaveComponent_GetActorIsInPersistentLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveEngine.SaveCancelledForStreamingLevel
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void ARamaSaveEngine::SaveCancelledForStreamingLevel(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveEngine.SaveCancelledForStreamingLevel");

	ARamaSaveEngine_SaveCancelledForStreamingLevel_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RamaSaveSystem.RamaSaveEngine.LoadProcessFinished_PreActorFullyLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void ARamaSaveEngine::LoadProcessFinished_PreActorFullyLoaded(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveEngine.LoadProcessFinished_PreActorFullyLoaded");

	ARamaSaveEngine_LoadProcessFinished_PreActorFullyLoaded_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RamaSaveSystem.RamaSaveEngine.LoadProcessFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void ARamaSaveEngine::LoadProcessFinished(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveEngine.LoadProcessFinished");

	ARamaSaveEngine_LoadProcessFinished_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RamaSaveSystem.RamaSaveEngine.Async_SaveStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void ARamaSaveEngine::Async_SaveStarted(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveEngine.Async_SaveStarted");

	ARamaSaveEngine_Async_SaveStarted_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RamaSaveSystem.RamaSaveEngine.Async_SaveFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void ARamaSaveEngine::Async_SaveFinished(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveEngine.Async_SaveFinished");

	ARamaSaveEngine_Async_SaveFinished_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RamaSaveSystem.RamaSaveEngine.Async_SaveCancelled
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void ARamaSaveEngine::Async_SaveCancelled(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveEngine.Async_SaveCancelled");

	ARamaSaveEngine_Async_SaveCancelled_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RamaSaveSystem.RamaSaveEngine.Async_ProgressUpdate
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void ARamaSaveEngine::Async_ProgressUpdate(const struct FString& Filename, float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveEngine.Async_ProgressUpdate");

	ARamaSaveEngine_Async_ProgressUpdate_Params params;
	params.Filename = Filename;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RamaSaveSystem.RamaSaveLibrary.RenameFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Dest                           (Parm, ZeroConstructor)
// struct FString                 Source                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URamaSaveLibrary::STATIC_RenameFile(const struct FString& Dest, const struct FString& Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RenameFile");

	URamaSaveLibrary_RenameFile_Params params;
	params.Dest = Dest;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveLibrary.RemoveLevelPIEPrefix
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 LevelName                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString URamaSaveLibrary::STATIC_RemoveLevelPIEPrefix(const struct FString& LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RemoveLevelPIEPrefix");

	URamaSaveLibrary_RemoveLevelPIEPrefix_Params params;
	params.LevelName = LevelName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSavePaths_SavedDir
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString URamaSaveLibrary::STATIC_RamaSavePaths_SavedDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSavePaths_SavedDir");

	URamaSaveLibrary_RamaSavePaths_SavedDir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSavePaths_GameRootDirectory
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString URamaSaveLibrary::STATIC_RamaSavePaths_GameRootDirectory()
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSavePaths_GameRootDirectory");

	URamaSaveLibrary_RamaSavePaths_GameRootDirectory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSavePaths_BinaryLocation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString URamaSaveLibrary::STATIC_RamaSavePaths_BinaryLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSavePaths_BinaryLocation");

	URamaSaveLibrary_RamaSavePaths_BinaryLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_SaveToFile_WithTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Filename                       (Parm, ZeroConstructor)
// bool                           FileIOSuccess                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AllComponentsSaved             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         SaveOnlyActorsWithTags         (Parm, ZeroConstructor)
// struct FString                 SaveOnlyStreamingLevel         (Parm, ZeroConstructor)
// bool                           IgnoreStreamingActorsIfNoLevelSpecified (Parm, ZeroConstructor, IsPlainOldData)
// class URamaSaveObject*         StaticSaveData                 (Parm, ZeroConstructor, IsPlainOldData)

void URamaSaveLibrary::STATIC_RamaSave_SaveToFile_WithTags(class UObject* WorldContextObject, const struct FString& Filename, TArray<struct FString> SaveOnlyActorsWithTags, const struct FString& SaveOnlyStreamingLevel, bool IgnoreStreamingActorsIfNoLevelSpecified, class URamaSaveObject* StaticSaveData, bool* FileIOSuccess, bool* AllComponentsSaved)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_SaveToFile_WithTags");

	URamaSaveLibrary_RamaSave_SaveToFile_WithTags_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Filename = Filename;
	params.SaveOnlyActorsWithTags = SaveOnlyActorsWithTags;
	params.SaveOnlyStreamingLevel = SaveOnlyStreamingLevel;
	params.IgnoreStreamingActorsIfNoLevelSpecified = IgnoreStreamingActorsIfNoLevelSpecified;
	params.StaticSaveData = StaticSaveData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileIOSuccess != nullptr)
		*FileIOSuccess = params.FileIOSuccess;
	if (AllComponentsSaved != nullptr)
		*AllComponentsSaved = params.AllComponentsSaved;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_SaveToFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Filename                       (Parm, ZeroConstructor)
// bool                           FileIOSuccess                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AllComponentsSaved             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 SaveOnlyStreamingLevel         (Parm, ZeroConstructor)
// bool                           IgnoreStreamingActorsIfNoLevelSpecified (Parm, ZeroConstructor, IsPlainOldData)
// class URamaSaveObject*         StaticSaveData                 (Parm, ZeroConstructor, IsPlainOldData)

void URamaSaveLibrary::STATIC_RamaSave_SaveToFile(class UObject* WorldContextObject, const struct FString& Filename, const struct FString& SaveOnlyStreamingLevel, bool IgnoreStreamingActorsIfNoLevelSpecified, class URamaSaveObject* StaticSaveData, bool* FileIOSuccess, bool* AllComponentsSaved)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_SaveToFile");

	URamaSaveLibrary_RamaSave_SaveToFile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Filename = Filename;
	params.SaveOnlyStreamingLevel = SaveOnlyStreamingLevel;
	params.IgnoreStreamingActorsIfNoLevelSpecified = IgnoreStreamingActorsIfNoLevelSpecified;
	params.StaticSaveData = StaticSaveData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileIOSuccess != nullptr)
		*FileIOSuccess = params.FileIOSuccess;
	if (AllComponentsSaved != nullptr)
		*AllComponentsSaved = params.AllComponentsSaved;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_SaveOnlyStaticToFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)
// bool                           FileIOSuccess                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class URamaSaveObject*         StaticSaveData                 (Parm, ZeroConstructor, IsPlainOldData)

void URamaSaveLibrary::STATIC_RamaSave_SaveOnlyStaticToFile(const struct FString& Filename, class URamaSaveObject* StaticSaveData, bool* FileIOSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_SaveOnlyStaticToFile");

	URamaSaveLibrary_RamaSave_SaveOnlyStaticToFile_Params params;
	params.Filename = Filename;
	params.StaticSaveData = StaticSaveData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileIOSuccess != nullptr)
		*FileIOSuccess = params.FileIOSuccess;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadStreamingStateFromFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FileIOSuccess                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 Filename                       (Parm, ZeroConstructor)
// TArray<struct FString>         StreamingLevelsStates          (Parm, OutParm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URamaSaveLibrary::STATIC_RamaSave_LoadStreamingStateFromFile(class UObject* WorldContextObject, const struct FString& Filename, bool* FileIOSuccess, TArray<struct FString>* StreamingLevelsStates)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadStreamingStateFromFile");

	URamaSaveLibrary_RamaSave_LoadStreamingStateFromFile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileIOSuccess != nullptr)
		*FileIOSuccess = params.FileIOSuccess;
	if (StreamingLevelsStates != nullptr)
		*StreamingLevelsStates = params.StreamingLevelsStates;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadStaticDataFromFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           FileIOSuccess                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 Filename                       (Parm, ZeroConstructor)
// class URamaSaveObject*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URamaSaveObject* URamaSaveLibrary::STATIC_RamaSave_LoadStaticDataFromFile(const struct FString& Filename, bool* FileIOSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadStaticDataFromFile");

	URamaSaveLibrary_RamaSave_LoadStaticDataFromFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileIOSuccess != nullptr)
		*FileIOSuccess = params.FileIOSuccess;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadFromFileWithTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         LoadOnlyActorsWithSaveTags     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           FileIOSuccess                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 Filename                       (Parm, ZeroConstructor)
// bool                           DestroyActorsBeforeLoad        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DontLoadPlayerPawns            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HandleStreamingLevelsLoadingAndUnloading (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LoadOnlyStreamingLevel         (Parm, ZeroConstructor)

void URamaSaveLibrary::STATIC_RamaSave_LoadFromFileWithTags(class UObject* WorldContextObject, TArray<struct FString> LoadOnlyActorsWithSaveTags, const struct FString& Filename, bool DestroyActorsBeforeLoad, bool DontLoadPlayerPawns, bool HandleStreamingLevelsLoadingAndUnloading, const struct FString& LoadOnlyStreamingLevel, bool* FileIOSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadFromFileWithTags");

	URamaSaveLibrary_RamaSave_LoadFromFileWithTags_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LoadOnlyActorsWithSaveTags = LoadOnlyActorsWithSaveTags;
	params.Filename = Filename;
	params.DestroyActorsBeforeLoad = DestroyActorsBeforeLoad;
	params.DontLoadPlayerPawns = DontLoadPlayerPawns;
	params.HandleStreamingLevelsLoadingAndUnloading = HandleStreamingLevelsLoadingAndUnloading;
	params.LoadOnlyStreamingLevel = LoadOnlyStreamingLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileIOSuccess != nullptr)
		*FileIOSuccess = params.FileIOSuccess;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadFromFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FileIOSuccess                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 Filename                       (Parm, ZeroConstructor)
// bool                           DestroyActorsBeforeLoad        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DontLoadPlayerPawns            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HandleStreamingLevelsLoadingAndUnloading (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LoadOnlyStreamingLevel         (Parm, ZeroConstructor)

void URamaSaveLibrary::STATIC_RamaSave_LoadFromFile(class UObject* WorldContextObject, const struct FString& Filename, bool DestroyActorsBeforeLoad, bool DontLoadPlayerPawns, bool HandleStreamingLevelsLoadingAndUnloading, const struct FString& LoadOnlyStreamingLevel, bool* FileIOSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadFromFile");

	URamaSaveLibrary_RamaSave_LoadFromFile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Filename = Filename;
	params.DestroyActorsBeforeLoad = DestroyActorsBeforeLoad;
	params.DontLoadPlayerPawns = DontLoadPlayerPawns;
	params.HandleStreamingLevelsLoadingAndUnloading = HandleStreamingLevelsLoadingAndUnloading;
	params.LoadOnlyStreamingLevel = LoadOnlyStreamingLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileIOSuccess != nullptr)
		*FileIOSuccess = params.FileIOSuccess;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_GetFileTimeStampText
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor)
// bool                           Verbose                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText URamaSaveLibrary::STATIC_RamaSave_GetFileTimeStampText(const struct FString& File, bool Verbose)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_GetFileTimeStampText");

	URamaSaveLibrary_RamaSave_GetFileTimeStampText_Params params;
	params.File = File;
	params.Verbose = Verbose;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_GetFileTimeStamp
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor)
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FDateTime URamaSaveLibrary::STATIC_RamaSave_GetFileTimeStamp(const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_GetFileTimeStamp");

	URamaSaveLibrary_RamaSave_GetFileTimeStamp_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_FolderExists
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Dir                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URamaSaveLibrary::STATIC_RamaSave_FolderExists(const struct FString& Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_FolderExists");

	URamaSaveLibrary_RamaSave_FolderExists_Params params;
	params.Dir = Dir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_FileExists
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URamaSaveLibrary::STATIC_RamaSave_FileExists(const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_FileExists");

	URamaSaveLibrary_RamaSave_FileExists_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_DeleteFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 File                           (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URamaSaveLibrary::STATIC_RamaSave_DeleteFile(const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_DeleteFile");

	URamaSaveLibrary_RamaSave_DeleteFile_Params params;
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_DateTimeToString
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime               TheDateTime                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 AsString                       (Parm, OutParm, ZeroConstructor)

void URamaSaveLibrary::STATIC_RamaSave_DateTimeToString(const struct FDateTime& TheDateTime, struct FString* AsString)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_DateTimeToString");

	URamaSaveLibrary_RamaSave_DateTimeToString_Params params;
	params.TheDateTime = TheDateTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsString != nullptr)
		*AsString = params.AsString;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_DateTimeFromString
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 AsString                       (Parm, ZeroConstructor)
// struct FDateTime               TheDateTime                    (Parm, OutParm, ZeroConstructor)

void URamaSaveLibrary::STATIC_RamaSave_DateTimeFromString(const struct FString& AsString, struct FDateTime* TheDateTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_DateTimeFromString");

	URamaSaveLibrary_RamaSave_DateTimeFromString_Params params;
	params.AsString = AsString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TheDateTime != nullptr)
		*TheDateTime = params.TheDateTime;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_CopyFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Dest                           (Parm, ZeroConstructor)
// struct FString                 Src                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URamaSaveLibrary::STATIC_RamaSave_CopyFile(const struct FString& Dest, const struct FString& Src)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_CopyFile");

	URamaSaveLibrary_RamaSave_CopyFile_Params params;
	params.Dest = Dest;
	params.Src = Src;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_ClearLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DontDestroyPlayers             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ClearOnlyStreamingLevel        (Parm, ZeroConstructor)

void URamaSaveLibrary::STATIC_RamaSave_ClearLevel(class UObject* WorldContextObject, bool DontDestroyPlayers, const struct FString& ClearOnlyStreamingLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_ClearLevel");

	URamaSaveLibrary_RamaSave_ClearLevel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.DontDestroyPlayers = DontDestroyPlayers;
	params.ClearOnlyStreamingLevel = ClearOnlyStreamingLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_CancelAsyncSaveProcess
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URamaSaveLibrary::STATIC_RamaSave_CancelAsyncSaveProcess(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaSave_CancelAsyncSaveProcess");

	URamaSaveLibrary_RamaSave_CancelAsyncSaveProcess_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveLibrary.RamaFileIO_GetFiles
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FullPathOfBaseDir              (Parm, ZeroConstructor)
// TArray<struct FString>         FilenamesOut                   (Parm, OutParm, ZeroConstructor)
// bool                           Recursive                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FilterByExtension              (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URamaSaveLibrary::STATIC_RamaFileIO_GetFiles(const struct FString& FullPathOfBaseDir, bool Recursive, const struct FString& FilterByExtension, TArray<struct FString>* FilenamesOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.RamaFileIO_GetFiles");

	URamaSaveLibrary_RamaFileIO_GetFiles_Params params;
	params.FullPathOfBaseDir = FullPathOfBaseDir;
	params.Recursive = Recursive;
	params.FilterByExtension = FilterByExtension;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FilenamesOut != nullptr)
		*FilenamesOut = params.FilenamesOut;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveLibrary.GetDocumentsFolder
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString URamaSaveLibrary::STATIC_GetDocumentsFolder()
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.GetDocumentsFolder");

	URamaSaveLibrary_GetDocumentsFolder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveComponentsWithTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         SaveTags                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class URamaSaveComponent*> RamaSaveComponents             (Parm, OutParm, ZeroConstructor)
// struct FString                 GetOnlyStreamingLevelName      (Parm, ZeroConstructor)
// bool                           IgnoreStreamingActorsIfNoStreamingLevelSpecified (Parm, ZeroConstructor, IsPlainOldData)

void URamaSaveLibrary::STATIC_GetAllRamaSaveComponentsWithTags(class UObject* WorldContextObject, TArray<struct FString> SaveTags, const struct FString& GetOnlyStreamingLevelName, bool IgnoreStreamingActorsIfNoStreamingLevelSpecified, TArray<class URamaSaveComponent*>* RamaSaveComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveComponentsWithTags");

	URamaSaveLibrary_GetAllRamaSaveComponentsWithTags_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SaveTags = SaveTags;
	params.GetOnlyStreamingLevelName = GetOnlyStreamingLevelName;
	params.IgnoreStreamingActorsIfNoStreamingLevelSpecified = IgnoreStreamingActorsIfNoStreamingLevelSpecified;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RamaSaveComponents != nullptr)
		*RamaSaveComponents = params.RamaSaveComponents;
}


// Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveComponents
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class URamaSaveComponent*> RamaSaveComponents             (Parm, OutParm, ZeroConstructor)
// struct FString                 GetOnlyStreamingLevelName      (Parm, ZeroConstructor)
// bool                           IgnoreStreamingActorsIfNoStreamingLevelSpecified (Parm, ZeroConstructor, IsPlainOldData)

void URamaSaveLibrary::STATIC_GetAllRamaSaveComponents(class UObject* WorldContextObject, const struct FString& GetOnlyStreamingLevelName, bool IgnoreStreamingActorsIfNoStreamingLevelSpecified, TArray<class URamaSaveComponent*>* RamaSaveComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveComponents");

	URamaSaveLibrary_GetAllRamaSaveComponents_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GetOnlyStreamingLevelName = GetOnlyStreamingLevelName;
	params.IgnoreStreamingActorsIfNoStreamingLevelSpecified = IgnoreStreamingActorsIfNoStreamingLevelSpecified;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RamaSaveComponents != nullptr)
		*RamaSaveComponents = params.RamaSaveComponents;
}


// Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveActorsWithTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         SaveTags                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          RamaSaveActors                 (Parm, OutParm, ZeroConstructor)

void URamaSaveLibrary::STATIC_GetAllRamaSaveActorsWithTags(class UObject* WorldContextObject, TArray<struct FString> SaveTags, TArray<class AActor*>* RamaSaveActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveActorsWithTags");

	URamaSaveLibrary_GetAllRamaSaveActorsWithTags_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SaveTags = SaveTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RamaSaveActors != nullptr)
		*RamaSaveActors = params.RamaSaveActors;
}


// Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          RamaSaveActors                 (Parm, OutParm, ZeroConstructor)

void URamaSaveLibrary::STATIC_GetAllRamaSaveActors(class UObject* WorldContextObject, TArray<class AActor*>* RamaSaveActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveActors");

	URamaSaveLibrary_GetAllRamaSaveActors_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RamaSaveActors != nullptr)
		*RamaSaveActors = params.RamaSaveActors;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
