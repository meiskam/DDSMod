#pragma once

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class RamaSaveSystem.RamaSaveComponent
// 0x0110 (0x0200 - 0x00F0)
class URamaSaveComponent : public UActorComponent
{
public:
	struct FGuid                                       RamaSave_PersistentActorUniqueID;                         // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RamaSave_LogPersistentActorGUID;                          // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	TArray<struct FString>                             RamaSave_SaveTags;                                        // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ActorStreamingLevel;                                      // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               RamaSave_ShouldLoadActorWorldPosition;                    // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RamaSave_ShouldSaveActor;                                 // 0x0129(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DestroyBeforeLoad;                                        // 0x012A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x012B(0x0005) MISSED OFFSET
	TArray<struct FString>                             RamaSave_OwningActorVarsToSave;                           // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             RamaSave_ComponentVarsToSave;                             // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               RamaSave_VerboseLog;                                      // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RamaSave_LogAllSavedComponentProperties;                  // 0x0151(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RamaSave_SavePhysicsData;                                 // 0x0152(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0153(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    RamaSaveEvent_ActorFullyLoaded;                           // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    RamaSaveEvent_PreSave;                                    // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    RamaSaveEvent_PreLoadDestroy;                             // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    RamaSaveEvent_PlayerLoaded;                               // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              LoadedGameVersion;                                        // 0x0198(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x019C(0x0004) MISSED OFFSET
	struct FTransform                                  OwningActorTransform;                                     // 0x01A0(0x0030) (IsPlainOldData)
	unsigned char                                      UnknownData04[0x30];                                      // 0x01D0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RamaSaveSystem.RamaSaveComponent");
		return ptr;
	}


	void STATIC_Test(class UScriptStruct* Struct, TArray<unsigned char>* ByteData);
	void RamaSave_PreSave();
	void RamaSave_PostLoad();
	bool RamaSave_HasSaveTag(const struct FString& SaveTag);
	bool RamaSave_HasAnyOfSaveTags(TArray<struct FString> SaveTags);
	struct FString GetActorStreamingLevelPackageName();
	bool GetActorIsInPersistentLevel();
};


// Class RamaSaveSystem.RamaSaveEngine
// 0x0098 (0x03C0 - 0x0328)
class ARamaSaveEngine : public AActor
{
public:
	TArray<class URamaSaveComponent*>                  RamaSaveComponents;                                       // 0x0328(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FString>                             SaveOnlyActorsWithTags;                                   // 0x0338(0x0010) (ZeroConstructor)
	TArray<struct FRamaAsyncSaveUnit>                  AsyncUnits;                                               // 0x0348(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0358(0x0010) MISSED OFFSET
	struct FRamaSaveEngineParams                       LoadParams;                                               // 0x0368(0x0038)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03A0(0x0008) MISSED OFFSET
	TArray<class ULevelStreaming*>                     Load_StreamingLevels;                                     // 0x03A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RamaSaveSystem.RamaSaveEngine");
		return ptr;
	}


	void SaveCancelledForStreamingLevel(const struct FString& Filename);
	void LoadProcessFinished_PreActorFullyLoaded(const struct FString& Filename);
	void LoadProcessFinished(const struct FString& Filename);
	void Async_SaveStarted(const struct FString& Filename);
	void Async_SaveFinished(const struct FString& Filename);
	void Async_SaveCancelled(const struct FString& Filename);
	void Async_ProgressUpdate(const struct FString& Filename, float Progress);
};


// Class RamaSaveSystem.RamaSaveLibrary
// 0x0000 (0x0028 - 0x0028)
class URamaSaveLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RamaSaveSystem.RamaSaveLibrary");
		return ptr;
	}


	bool STATIC_RenameFile(const struct FString& Dest, const struct FString& Source);
	struct FString STATIC_RemoveLevelPIEPrefix(const struct FString& LevelName);
	struct FString STATIC_RamaSavePaths_SavedDir();
	struct FString STATIC_RamaSavePaths_GameRootDirectory();
	struct FString STATIC_RamaSavePaths_BinaryLocation();
	void STATIC_RamaSave_SaveToFile_WithTags(class UObject* WorldContextObject, const struct FString& Filename, TArray<struct FString> SaveOnlyActorsWithTags, const struct FString& SaveOnlyStreamingLevel, bool IgnoreStreamingActorsIfNoLevelSpecified, class URamaSaveObject* StaticSaveData, bool* FileIOSuccess, bool* AllComponentsSaved);
	void STATIC_RamaSave_SaveToFile(class UObject* WorldContextObject, const struct FString& Filename, const struct FString& SaveOnlyStreamingLevel, bool IgnoreStreamingActorsIfNoLevelSpecified, class URamaSaveObject* StaticSaveData, bool* FileIOSuccess, bool* AllComponentsSaved);
	void STATIC_RamaSave_SaveOnlyStaticToFile(const struct FString& Filename, class URamaSaveObject* StaticSaveData, bool* FileIOSuccess);
	int STATIC_RamaSave_LoadStreamingStateFromFile(class UObject* WorldContextObject, const struct FString& Filename, bool* FileIOSuccess, TArray<struct FString>* StreamingLevelsStates);
	class URamaSaveObject* STATIC_RamaSave_LoadStaticDataFromFile(const struct FString& Filename, bool* FileIOSuccess);
	void STATIC_RamaSave_LoadFromFileWithTags(class UObject* WorldContextObject, TArray<struct FString> LoadOnlyActorsWithSaveTags, const struct FString& Filename, bool DestroyActorsBeforeLoad, bool DontLoadPlayerPawns, bool HandleStreamingLevelsLoadingAndUnloading, const struct FString& LoadOnlyStreamingLevel, bool* FileIOSuccess);
	void STATIC_RamaSave_LoadFromFile(class UObject* WorldContextObject, const struct FString& Filename, bool DestroyActorsBeforeLoad, bool DontLoadPlayerPawns, bool HandleStreamingLevelsLoadingAndUnloading, const struct FString& LoadOnlyStreamingLevel, bool* FileIOSuccess);
	struct FText STATIC_RamaSave_GetFileTimeStampText(const struct FString& File, bool Verbose);
	struct FDateTime STATIC_RamaSave_GetFileTimeStamp(const struct FString& File);
	bool STATIC_RamaSave_FolderExists(const struct FString& Dir);
	bool STATIC_RamaSave_FileExists(const struct FString& File);
	bool STATIC_RamaSave_DeleteFile(const struct FString& File);
	void STATIC_RamaSave_DateTimeToString(const struct FDateTime& TheDateTime, struct FString* AsString);
	void STATIC_RamaSave_DateTimeFromString(const struct FString& AsString, struct FDateTime* TheDateTime);
	bool STATIC_RamaSave_CopyFile(const struct FString& Dest, const struct FString& Src);
	void STATIC_RamaSave_ClearLevel(class UObject* WorldContextObject, bool DontDestroyPlayers, const struct FString& ClearOnlyStreamingLevel);
	bool STATIC_RamaSave_CancelAsyncSaveProcess(class UObject* WorldContextObject);
	bool STATIC_RamaFileIO_GetFiles(const struct FString& FullPathOfBaseDir, bool Recursive, const struct FString& FilterByExtension, TArray<struct FString>* FilenamesOut);
	struct FString STATIC_GetDocumentsFolder();
	void STATIC_GetAllRamaSaveComponentsWithTags(class UObject* WorldContextObject, TArray<struct FString> SaveTags, const struct FString& GetOnlyStreamingLevelName, bool IgnoreStreamingActorsIfNoStreamingLevelSpecified, TArray<class URamaSaveComponent*>* RamaSaveComponents);
	void STATIC_GetAllRamaSaveComponents(class UObject* WorldContextObject, const struct FString& GetOnlyStreamingLevelName, bool IgnoreStreamingActorsIfNoStreamingLevelSpecified, TArray<class URamaSaveComponent*>* RamaSaveComponents);
	void STATIC_GetAllRamaSaveActorsWithTags(class UObject* WorldContextObject, TArray<struct FString> SaveTags, TArray<class AActor*>* RamaSaveActors);
	void STATIC_GetAllRamaSaveActors(class UObject* WorldContextObject, TArray<class AActor*>* RamaSaveActors);
};


// Class RamaSaveSystem.RamaSaveObject
// 0x0008 (0x0030 - 0x0028)
class URamaSaveObject : public UObject
{
public:
	float                                              GameVersion;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RamaSaveSystem.RamaSaveObject");
		return ptr;
	}

};


// Class RamaSaveSystem.RamaSaveSystemSettings
// 0x0038 (0x0070 - 0x0038)
class URamaSaveSystemSettings : public UDeveloperSettings
{
public:
	float                                              GameVersion;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UClass*                                      RamaSaveEngineBP;                                         // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FRamaSaveSystemAssetPathRemap>       RemappedVariablesAndClasses;                              // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	bool                                               SaveAllPropertiesMarkedAsSaveGame;                        // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               AsyncSave;                                                // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	float                                              AsyncSaveTickInterval;                                    // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              AsyncSaveActorChunkSize;                                  // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               Saving_PerformObjectValidityChecks;                       // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               Loading_GlobalVerboseLogging;                             // 0x0065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               Loading_GlobalDisablePhysicsLoad;                         // 0x0066(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               LogSavingAndLoadingOfEachStaticDataProperty;              // 0x0067(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               LogLoadedActorClassPath;                                  // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RamaSaveSystem.RamaSaveSystemSettings");
		return ptr;
	}

};


// Class RamaSaveSystem.RamaSaveUtility
// 0x0000 (0x0028 - 0x0028)
class URamaSaveUtility : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RamaSaveSystem.RamaSaveUtility");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
