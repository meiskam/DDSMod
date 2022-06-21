#pragma once

/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function RamaSaveSystem.RamaSaveComponent.Test
	 */
	struct URamaSaveComponent_Test_Params
	{
	public:
		class UScriptStruct*                                       Struct;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      ByteData;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveComponent.RamaSave_PreSave
	 */
	struct URamaSaveComponent_RamaSave_PreSave_Params
	{	};

	/**
	 * Function RamaSaveSystem.RamaSaveComponent.RamaSave_PostLoad
	 */
	struct URamaSaveComponent_RamaSave_PostLoad_Params
	{	};

	/**
	 * Function RamaSaveSystem.RamaSaveComponent.RamaSave_HasSaveTag
	 */
	struct URamaSaveComponent_RamaSave_HasSaveTag_Params
	{
	public:
		class FString                                              SaveTag;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveComponent.RamaSave_HasAnyOfSaveTags
	 */
	struct URamaSaveComponent_RamaSave_HasAnyOfSaveTags_Params
	{
	public:
		TArray<class FString>                                      SaveTags;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveComponent.GetActorStreamingLevelPackageName
	 */
	struct URamaSaveComponent_GetActorStreamingLevelPackageName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveComponent.GetActorIsInPersistentLevel
	 */
	struct URamaSaveComponent_GetActorIsInPersistentLevel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveEngine.SaveCancelledForStreamingLevel
	 */
	struct ARamaSaveEngine_SaveCancelledForStreamingLevel_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveEngine.LoadProcessFinished_PreActorFullyLoaded
	 */
	struct ARamaSaveEngine_LoadProcessFinished_PreActorFullyLoaded_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveEngine.LoadProcessFinished
	 */
	struct ARamaSaveEngine_LoadProcessFinished_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveEngine.Async_SaveStarted
	 */
	struct ARamaSaveEngine_Async_SaveStarted_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveEngine.Async_SaveFinished
	 */
	struct ARamaSaveEngine_Async_SaveFinished_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveEngine.Async_SaveCancelled
	 */
	struct ARamaSaveEngine_Async_SaveCancelled_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveEngine.Async_ProgressUpdate
	 */
	struct ARamaSaveEngine_Async_ProgressUpdate_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Progress;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RenameFile
	 */
	struct URamaSaveLibrary_RenameFile_Params
	{
	public:
		class FString                                              Dest;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Source;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RemoveLevelPIEPrefix
	 */
	struct URamaSaveLibrary_RemoveLevelPIEPrefix_Params
	{
	public:
		class FString                                              LevelName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSavePaths_SavedDir
	 */
	struct URamaSaveLibrary_RamaSavePaths_SavedDir_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSavePaths_GameRootDirectory
	 */
	struct URamaSaveLibrary_RamaSavePaths_GameRootDirectory_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSavePaths_BinaryLocation
	 */
	struct URamaSaveLibrary_RamaSavePaths_BinaryLocation_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSave_SaveToFile_WithTags
	 */
	struct URamaSaveLibrary_RamaSave_SaveToFile_WithTags_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       FileIOSuccess;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       AllComponentsSaved;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      SaveOnlyActorsWithTags;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FString                                              SaveOnlyStreamingLevel;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IgnoreStreamingActorsIfNoLevelSpecified;                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URamaSaveObject*                                     StaticSaveData;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSave_SaveToFile
	 */
	struct URamaSaveLibrary_RamaSave_SaveToFile_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       FileIOSuccess;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       AllComponentsSaved;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SaveOnlyStreamingLevel;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IgnoreStreamingActorsIfNoLevelSpecified;                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URamaSaveObject*                                     StaticSaveData;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSave_SaveOnlyStaticToFile
	 */
	struct URamaSaveLibrary_RamaSave_SaveOnlyStaticToFile_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       FileIOSuccess;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URamaSaveObject*                                     StaticSaveData;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadStreamingStateFromFile
	 */
	struct URamaSaveLibrary_RamaSave_LoadStreamingStateFromFile_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       FileIOSuccess;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      StreamingLevelsStates;                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadStaticDataFromFile
	 */
	struct URamaSaveLibrary_RamaSave_LoadStaticDataFromFile_Params
	{
	public:
		bool                                                       FileIOSuccess;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URamaSaveObject*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadFromFileWithTags
	 */
	struct URamaSaveLibrary_RamaSave_LoadFromFileWithTags_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      LoadOnlyActorsWithSaveTags;                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       FileIOSuccess;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DestroyActorsBeforeLoad;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DontLoadPlayerPawns;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       HandleStreamingLevelsLoadingAndUnloading;                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              LoadOnlyStreamingLevel;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSave_LoadFromFile
	 */
	struct URamaSaveLibrary_RamaSave_LoadFromFile_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       FileIOSuccess;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DestroyActorsBeforeLoad;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DontLoadPlayerPawns;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       HandleStreamingLevelsLoadingAndUnloading;                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              LoadOnlyStreamingLevel;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSave_GetFileTimeStampText
	 */
	struct URamaSaveLibrary_RamaSave_GetFileTimeStampText_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Verbose;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSave_GetFileTimeStamp
	 */
	struct URamaSaveLibrary_RamaSave_GetFileTimeStamp_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDateTime                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSave_FolderExists
	 */
	struct URamaSaveLibrary_RamaSave_FolderExists_Params
	{
	public:
		class FString                                              Dir;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSave_FileExists
	 */
	struct URamaSaveLibrary_RamaSave_FileExists_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSave_DeleteFile
	 */
	struct URamaSaveLibrary_RamaSave_DeleteFile_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSave_DateTimeToString
	 */
	struct URamaSaveLibrary_RamaSave_DateTimeToString_Params
	{
	public:
		struct FDateTime                                           TheDateTime;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AsString;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSave_DateTimeFromString
	 */
	struct URamaSaveLibrary_RamaSave_DateTimeFromString_Params
	{
	public:
		class FString                                              AsString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDateTime                                           TheDateTime;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSave_CopyFile
	 */
	struct URamaSaveLibrary_RamaSave_CopyFile_Params
	{
	public:
		class FString                                              Dest;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Src;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSave_ClearLevel
	 */
	struct URamaSaveLibrary_RamaSave_ClearLevel_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DontDestroyPlayers;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ClearOnlyStreamingLevel;                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaSave_CancelAsyncSaveProcess
	 */
	struct URamaSaveLibrary_RamaSave_CancelAsyncSaveProcess_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.RamaFileIO_GetFiles
	 */
	struct URamaSaveLibrary_RamaFileIO_GetFiles_Params
	{
	public:
		class FString                                              FullPathOfBaseDir;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      FilenamesOut;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       Recursive;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FilterByExtension;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.GetDocumentsFolder
	 */
	struct URamaSaveLibrary_GetDocumentsFolder_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveComponentsWithTags
	 */
	struct URamaSaveLibrary_GetAllRamaSaveComponentsWithTags_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      SaveTags;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class URamaSaveComponent*>                          RamaSaveComponents;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class FString                                              GetOnlyStreamingLevelName;                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IgnoreStreamingActorsIfNoStreamingLevelSpecified;        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveComponents
	 */
	struct URamaSaveLibrary_GetAllRamaSaveComponents_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class URamaSaveComponent*>                          RamaSaveComponents;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class FString                                              GetOnlyStreamingLevelName;                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IgnoreStreamingActorsIfNoStreamingLevelSpecified;        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveActorsWithTags
	 */
	struct URamaSaveLibrary_GetAllRamaSaveActorsWithTags_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      SaveTags;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      RamaSaveActors;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RamaSaveSystem.RamaSaveLibrary.GetAllRamaSaveActors
	 */
	struct URamaSaveLibrary_GetAllRamaSaveActors_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      RamaSaveActors;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
