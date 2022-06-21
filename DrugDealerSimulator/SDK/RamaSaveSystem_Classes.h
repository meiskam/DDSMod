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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class RamaSaveSystem.RamaSaveComponent
	 * Size -> 0x0110 (FullSize[0x0200] - InheritedSize[0x00F0])
	 */
	class URamaSaveComponent : public UActorComponent
	{
	public:
		struct FGuid                                               RamaSave_PersistentActorUniqueID;                        // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RamaSave_LogPersistentActorGUID;                         // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQB1[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      RamaSave_SaveTags;                                       // 0x0108(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              ActorStreamingLevel;                                     // 0x0118(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RamaSave_ShouldLoadActorWorldPosition;                   // 0x0128(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RamaSave_ShouldSaveActor;                                // 0x0129(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DestroyBeforeLoad;                                       // 0x012A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NH0E[0x5];                                   // 0x012B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      RamaSave_OwningActorVarsToSave;                          // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      RamaSave_ComponentVarsToSave;                            // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       RamaSave_VerboseLog;                                     // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RamaSave_LogAllSavedComponentProperties;                 // 0x0151(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RamaSave_SavePhysicsData;                                // 0x0152(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OGQB[0x5];                                   // 0x0153(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             RamaSaveEvent_ActorFullyLoaded;                          // 0x0158(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             RamaSaveEvent_PreSave;                                   // 0x0168(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             RamaSaveEvent_PreLoadDestroy;                            // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             RamaSaveEvent_PlayerLoaded;                              // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      LoadedGameVersion;                                       // 0x0198(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_36X0[0x4];                                   // 0x019C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCoreUObject_FTransform                             OwningActorTransform;                                    // 0x01A0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_047O[0x30];                                  // 0x01D0(0x0030) MISSED OFFSET (PADDING)

	public:
		void STATIC_Test(class UScriptStruct* Struct, TArray<unsigned char>* ByteData);
		void RamaSave_PreSave();
		void RamaSave_PostLoad();
		bool RamaSave_HasSaveTag(const class FString& SaveTag);
		bool RamaSave_HasAnyOfSaveTags(TArray<class FString> SaveTags);
		class FString GetActorStreamingLevelPackageName();
		bool GetActorIsInPersistentLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class RamaSaveSystem.RamaSaveEngine
	 * Size -> 0x0098 (FullSize[0x03C0] - InheritedSize[0x0328])
	 */
	class ARamaSaveEngine : public AActor
	{
	public:
		TArray<class URamaSaveComponent*>                          RamaSaveComponents;                                      // 0x0328(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class FString>                                      SaveOnlyActorsWithTags;                                  // 0x0338(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRamaAsyncSaveUnit>                          AsyncUnits;                                              // 0x0348(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0DXO[0x10];                                  // 0x0358(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRamaSaveEngineParams                               LoadParams;                                              // 0x0368(0x0038) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2TYP[0x8];                                   // 0x03A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ULevelStreaming*>                             Load_StreamingLevels;                                    // 0x03A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JGM2[0x8];                                   // 0x03B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SaveCancelledForStreamingLevel(const class FString& Filename);
		void LoadProcessFinished_PreActorFullyLoaded(const class FString& Filename);
		void LoadProcessFinished(const class FString& Filename);
		void Async_SaveStarted(const class FString& Filename);
		void Async_SaveFinished(const class FString& Filename);
		void Async_SaveCancelled(const class FString& Filename);
		void Async_ProgressUpdate(const class FString& Filename, float Progress);
		static UClass* StaticClass();
	};

	/**
	 * Class RamaSaveSystem.RamaSaveLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URamaSaveLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_RenameFile(const class FString& Dest, const class FString& Source);
		class FString STATIC_RemoveLevelPIEPrefix(const class FString& LevelName);
		class FString STATIC_RamaSavePaths_SavedDir();
		class FString STATIC_RamaSavePaths_GameRootDirectory();
		class FString STATIC_RamaSavePaths_BinaryLocation();
		void STATIC_RamaSave_SaveToFile_WithTags(class UObject* WorldContextObject, const class FString& Filename, bool* FileIOSuccess, bool* AllComponentsSaved, TArray<class FString> SaveOnlyActorsWithTags, const class FString& SaveOnlyStreamingLevel, bool IgnoreStreamingActorsIfNoLevelSpecified, class URamaSaveObject* StaticSaveData);
		void STATIC_RamaSave_SaveToFile(class UObject* WorldContextObject, const class FString& Filename, bool* FileIOSuccess, bool* AllComponentsSaved, const class FString& SaveOnlyStreamingLevel, bool IgnoreStreamingActorsIfNoLevelSpecified, class URamaSaveObject* StaticSaveData);
		void STATIC_RamaSave_SaveOnlyStaticToFile(const class FString& Filename, bool* FileIOSuccess, class URamaSaveObject* StaticSaveData);
		int32_t STATIC_RamaSave_LoadStreamingStateFromFile(class UObject* WorldContextObject, bool* FileIOSuccess, const class FString& Filename, TArray<class FString>* StreamingLevelsStates);
		class URamaSaveObject* STATIC_RamaSave_LoadStaticDataFromFile(bool* FileIOSuccess, const class FString& Filename);
		void STATIC_RamaSave_LoadFromFileWithTags(class UObject* WorldContextObject, TArray<class FString> LoadOnlyActorsWithSaveTags, bool* FileIOSuccess, const class FString& Filename, bool DestroyActorsBeforeLoad, bool DontLoadPlayerPawns, bool HandleStreamingLevelsLoadingAndUnloading, const class FString& LoadOnlyStreamingLevel);
		void STATIC_RamaSave_LoadFromFile(class UObject* WorldContextObject, bool* FileIOSuccess, const class FString& Filename, bool DestroyActorsBeforeLoad, bool DontLoadPlayerPawns, bool HandleStreamingLevelsLoadingAndUnloading, const class FString& LoadOnlyStreamingLevel);
		class FText STATIC_RamaSave_GetFileTimeStampText(const class FString& File, bool Verbose);
		struct FDateTime STATIC_RamaSave_GetFileTimeStamp(const class FString& File);
		bool STATIC_RamaSave_FolderExists(const class FString& Dir);
		bool STATIC_RamaSave_FileExists(const class FString& File);
		bool STATIC_RamaSave_DeleteFile(const class FString& File);
		void STATIC_RamaSave_DateTimeToString(const struct FDateTime& TheDateTime, class FString* AsString);
		void STATIC_RamaSave_DateTimeFromString(const class FString& AsString, struct FDateTime* TheDateTime);
		bool STATIC_RamaSave_CopyFile(const class FString& Dest, const class FString& Src);
		void STATIC_RamaSave_ClearLevel(class UObject* WorldContextObject, bool DontDestroyPlayers, const class FString& ClearOnlyStreamingLevel);
		bool STATIC_RamaSave_CancelAsyncSaveProcess(class UObject* WorldContextObject);
		bool STATIC_RamaFileIO_GetFiles(const class FString& FullPathOfBaseDir, TArray<class FString>* FilenamesOut, bool Recursive, const class FString& FilterByExtension);
		class FString STATIC_GetDocumentsFolder();
		void STATIC_GetAllRamaSaveComponentsWithTags(class UObject* WorldContextObject, TArray<class FString> SaveTags, TArray<class URamaSaveComponent*>* RamaSaveComponents, const class FString& GetOnlyStreamingLevelName, bool IgnoreStreamingActorsIfNoStreamingLevelSpecified);
		void STATIC_GetAllRamaSaveComponents(class UObject* WorldContextObject, TArray<class URamaSaveComponent*>* RamaSaveComponents, const class FString& GetOnlyStreamingLevelName, bool IgnoreStreamingActorsIfNoStreamingLevelSpecified);
		void STATIC_GetAllRamaSaveActorsWithTags(class UObject* WorldContextObject, TArray<class FString> SaveTags, TArray<class AActor*>* RamaSaveActors);
		void STATIC_GetAllRamaSaveActors(class UObject* WorldContextObject, TArray<class AActor*>* RamaSaveActors);
		static UClass* StaticClass();
	};

	/**
	 * Class RamaSaveSystem.RamaSaveObject
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class URamaSaveObject : public UObject
	{
	public:
		float                                                      GameVersion;                                             // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNK1[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RamaSaveSystem.RamaSaveSystemSettings
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class URamaSaveSystemSettings : public UDeveloperSettings
	{
	public:
		float                                                      GameVersion;                                             // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L8NT[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              RamaSaveEngineBP;                                        // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRamaSaveSystemAssetPathRemap>               RemappedVariablesAndClasses;                             // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic
		bool                                                       SaveAllPropertiesMarkedAsSaveGame;                       // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AsyncSave;                                               // 0x0059(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IX3H[0x2];                                   // 0x005A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AsyncSaveTickInterval;                                   // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AsyncSaveActorChunkSize;                                 // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Saving_PerformObjectValidityChecks;                      // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Loading_GlobalVerboseLogging;                            // 0x0065(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Loading_GlobalDisablePhysicsLoad;                        // 0x0066(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LogSavingAndLoadingOfEachStaticDataProperty;             // 0x0067(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LogLoadedActorClassPath;                                 // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFJ0[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RamaSaveSystem.RamaSaveUtility
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URamaSaveUtility : public UObject
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
