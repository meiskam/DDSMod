#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function RamaSaveSystem.RamaSaveComponent.Test
struct URamaSaveComponent_Test_Params
{
	class UScriptStruct*                               Struct;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ByteData;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function RamaSaveSystem.RamaSaveComponent.RamaSave_PreSave
struct URamaSaveComponent_RamaSave_PreSave_Params
{
};

// Function RamaSaveSystem.RamaSaveComponent.RamaSave_PostLoad
struct URamaSaveComponent_RamaSave_PostLoad_Params
{
};

// Function RamaSaveSystem.RamaSaveComponent.RamaSave_HasSaveTag
struct URamaSaveComponent_RamaSave_HasSaveTag_Params
{
	struct FString                                     SaveTag;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RamaSaveSystem.RamaSaveComponent.RamaSave_HasAnyOfSaveTags
struct URamaSaveComponent_RamaSave_HasAnyOfSaveTags_Params
{
	TArray<struct FString>                             SaveTags;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RamaSaveSystem.RamaSaveComponent.GetActorStreamingLevelPackageName
struct URamaSaveComponent_GetActorStreamingLevelPackageName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RamaSaveSystem.RamaSaveComponent.GetActorIsInPersistentLevel
struct URamaSaveComponent_GetActorIsInPersistentLevel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RamaSaveSystem.RamaSaveEngine.SaveCancelledForStreamingLevel
struct ARamaSaveEngine_SaveCancelledForStreamingLevel_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function RamaSaveSystem.RamaSaveEngine.LoadProcessFinished_PreActorFullyLoaded
struct ARamaSaveEngine_LoadProcessFinished_PreActorFullyLoaded_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function RamaSaveSystem.RamaSaveEngine.LoadProcessFinished
struct ARamaSaveEngine_LoadProcessFinished_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function RamaSaveSystem.RamaSaveEngine.Async_SaveStarted
struct ARamaSaveEngine_Async_SaveStarted_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function RamaSaveSystem.RamaSaveEngine.Async_SaveFinished
struct ARamaSaveEngine_Async_SaveFinished_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function RamaSaveSystem.RamaSaveEngine.Async_SaveCancelled
struct ARamaSaveEngine_Async_SaveCancelled_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function RamaSaveSystem.RamaSaveEngine.Async_ProgressUpdate
struct ARamaSaveEngine_Async_ProgressUpdate_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RamaSaveSystem.RamaSaveLibrary.RenameFile
struct URamaSaveLibrary_RenameFile_Params
{
	struct FString                                     Dest;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Source;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RamaSaveSystem.RamaSaveLibrary.RemoveLevelPIEPrefix
struct URamaSaveLibrary_RemoveLevelPIEPrefix_Params
{
	struct FString                                     LevelName;                                                // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSavePaths_SavedDir
struct URamaSaveLibrary_RamaSavePaths_SavedDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSavePaths_GameRootDirectory
struct URamaSaveLibrary_RamaSavePaths_GameRootDirectory_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSavePaths_BinaryLocation
struct URamaSaveLibrary_RamaSavePaths_BinaryLocation_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_SaveToFile_WithTags
struct URamaSaveLibrary_RamaSave_SaveToFile_WithTags_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               FileIOSuccess;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AllComponentsSaved;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             SaveOnlyActorsWithTags;                                   // (Parm, ZeroConstructor)
	struct FString                                     SaveOnlyStreamingLevel;                                   // (Parm, ZeroConstructor)
	bool                                               IgnoreStreamingActorsIfNoLevelSpecified;                  // (Parm, ZeroConstructor, IsPlainOldData)
	class URamaSaveObject*                             StaticSaveData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_SaveToFile
struct URamaSaveLibrary_RamaSave_SaveToFile_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               FileIOSuccess;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AllComponentsSaved;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SaveOnlyStreamingLevel;                                   // (Parm, ZeroConstructor)
	bool                                               IgnoreStreamingActorsIfNoLevelSpecified;                  // (Parm, ZeroConstructor, IsPlainOldData)
	class URamaSaveObject*                             StaticSaveData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_SaveOnlyStaticToFile
struct URamaSaveLibrary_RamaSave_SaveOnlyStaticToFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               FileIOSuccess;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class URamaSaveObject*                             StaticSaveData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadStreamingStateFromFile
struct URamaSaveLibrary_RamaSave_LoadStreamingStateFromFile_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FileIOSuccess;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	TArray<struct FString>                             StreamingLevelsStates;                                    // (Parm, OutParm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadStaticDataFromFile
struct URamaSaveLibrary_RamaSave_LoadStaticDataFromFile_Params
{
	bool                                               FileIOSuccess;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	class URamaSaveObject*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadFromFileWithTags
struct URamaSaveLibrary_RamaSave_LoadFromFileWithTags_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             LoadOnlyActorsWithSaveTags;                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               FileIOSuccess;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               DestroyActorsBeforeLoad;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DontLoadPlayerPawns;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HandleStreamingLevelsLoadingAndUnloading;                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LoadOnlyStreamingLevel;                                   // (Parm, ZeroConstructor)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadFromFile
struct URamaSaveLibrary_RamaSave_LoadFromFile_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FileIOSuccess;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               DestroyActorsBeforeLoad;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DontLoadPlayerPawns;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HandleStreamingLevelsLoadingAndUnloading;                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LoadOnlyStreamingLevel;                                   // (Parm, ZeroConstructor)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_GetFileTimeStampText
struct URamaSaveLibrary_RamaSave_GetFileTimeStampText_Params
{
	struct FString                                     File;                                                     // (Parm, ZeroConstructor)
	bool                                               Verbose;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_GetFileTimeStamp
struct URamaSaveLibrary_RamaSave_GetFileTimeStamp_Params
{
	struct FString                                     File;                                                     // (Parm, ZeroConstructor)
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_FolderExists
struct URamaSaveLibrary_RamaSave_FolderExists_Params
{
	struct FString                                     Dir;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_FileExists
struct URamaSaveLibrary_RamaSave_FileExists_Params
{
	struct FString                                     File;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_DeleteFile
struct URamaSaveLibrary_RamaSave_DeleteFile_Params
{
	struct FString                                     File;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_DateTimeToString
struct URamaSaveLibrary_RamaSave_DateTimeToString_Params
{
	struct FDateTime                                   TheDateTime;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     AsString;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_DateTimeFromString
struct URamaSaveLibrary_RamaSave_DateTimeFromString_Params
{
	struct FString                                     AsString;                                                 // (Parm, ZeroConstructor)
	struct FDateTime                                   TheDateTime;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_CopyFile
struct URamaSaveLibrary_RamaSave_CopyFile_Params
{
	struct FString                                     Dest;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Src;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_ClearLevel
struct URamaSaveLibrary_RamaSave_ClearLevel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DontDestroyPlayers;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ClearOnlyStreamingLevel;                                  // (Parm, ZeroConstructor)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaSave_CancelAsyncSaveProcess
struct URamaSaveLibrary_RamaSave_CancelAsyncSaveProcess_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RamaSaveSystem.RamaSaveLibrary.RamaFileIO_GetFiles
struct URamaSaveLibrary_RamaFileIO_GetFiles_Params
{
	struct FString                                     FullPathOfBaseDir;                                        // (Parm, ZeroConstructor)
	TArray<struct FString>                             FilenamesOut;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               Recursive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FilterByExtension;                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RamaSaveSystem.RamaSaveLibrary.GetDocumentsFolder
struct URamaSaveLibrary_GetDocumentsFolder_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveComponentsWithTags
struct URamaSaveLibrary_GetAllRamaSaveComponentsWithTags_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             SaveTags;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class URamaSaveComponent*>                  RamaSaveComponents;                                       // (Parm, OutParm, ZeroConstructor)
	struct FString                                     GetOnlyStreamingLevelName;                                // (Parm, ZeroConstructor)
	bool                                               IgnoreStreamingActorsIfNoStreamingLevelSpecified;         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveComponents
struct URamaSaveLibrary_GetAllRamaSaveComponents_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class URamaSaveComponent*>                  RamaSaveComponents;                                       // (Parm, OutParm, ZeroConstructor)
	struct FString                                     GetOnlyStreamingLevelName;                                // (Parm, ZeroConstructor)
	bool                                               IgnoreStreamingActorsIfNoStreamingLevelSpecified;         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveActorsWithTags
struct URamaSaveLibrary_GetAllRamaSaveActorsWithTags_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             SaveTags;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              RamaSaveActors;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveActors
struct URamaSaveLibrary_GetAllRamaSaveActors_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              RamaSaveActors;                                           // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
