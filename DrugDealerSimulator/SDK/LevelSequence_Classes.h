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
	 * Class LevelSequence.DefaultLevelSequenceInstanceData
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UDefaultLevelSequenceInstanceData : public UObject
	{
	public:
		unsigned char                                              UnknownData_FRTI[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TransformOriginActor;                                    // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PAHG[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCoreUObject_FTransform                             TransformOrigin;                                         // 0x0040(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequence
	 * Size -> 0x0150 (FullSize[0x0498] - InheritedSize[0x0348])
	 */
	class ULevelSequence : public UMovieSceneSequence
	{
	public:
		class UMovieScene*                                         MovieScene;                                              // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlueprintGeneratedClass*                            DirectorClass;                                           // 0x0350(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLevelSequenceObjectReferenceMap                    ObjectReferences;                                        // 0x0358(0x0050) Protected, NativeAccessSpecifierProtected
		struct FLevelSequenceBindingReferences                     BindingReferences;                                       // 0x03A8(0x00A0) Protected, NativeAccessSpecifierProtected
		TMap<class FString, struct FLevelSequenceObject>           PossessedObjects;                                        // 0x0448(0x0050) ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceBurnInInitSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULevelSequenceBurnInInitSettings : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceBurnInOptions
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class ULevelSequenceBurnInOptions : public UObject
	{
	public:
		bool                                                       bUseBurnIn;                                              // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QU58[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      BurnInClass;                                             // 0x0030(0x0018) Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic
		class ULevelSequenceBurnInInitSettings*                    Settings;                                                // 0x0048(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetBurnIn(const struct FSoftClassPath& InBurnInClass);
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceActor
	 * Size -> 0x00A8 (FullSize[0x03D0] - InheritedSize[0x0328])
	 */
	class ALevelSequenceActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_ONCS[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAutoPlay;                                               // 0x0330(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8WIS[0x7];                                   // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSequencePlaybackSettings                 PlaybackSettings;                                        // 0x0338(0x0040) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class ULevelSequencePlayer*                                SequencePlayer;                                          // 0x0378(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     LevelSequence;                                           // 0x0380(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      AdditionalEventReceivers;                                // 0x0398(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class ULevelSequenceBurnInOptions*                         BurnInOptions;                                           // 0x03A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMovieSceneBindingOverrides*                         BindingOverrides;                                        // 0x03B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideInstanceData;                                   // 0x03B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LVJB[0x7];                                   // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             DefaultInstanceData;                                     // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevelSequenceBurnIn*                                BurnInInstance;                                          // 0x03C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetSequence(class ULevelSequence* InSequence);
		void SetEventReceivers(TArray<class AActor*> AdditionalReceivers);
		void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
		void ResetBindings();
		void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
		void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
		class ULevelSequence* GetSequence(bool bLoad, bool bInitializePlayer);
		void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceBurnIn
	 * Size -> 0x0090 (FullSize[0x0298] - InheritedSize[0x0208])
	 */
	class ULevelSequenceBurnIn : public UUserWidget
	{
	public:
		struct FLevelSequencePlayerSnapshot                        FrameInformation;                                        // 0x0208(0x0088) BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class ALevelSequenceActor*                                 LevelSequenceActor;                                      // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetSettings(class UObject* InSettings);
		class UClass* GetSettingsClass();
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceDirector
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class ULevelSequenceDirector : public UObject
	{
	public:
		class ULevelSequencePlayer*                                Player;                                                  // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnCreated();
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequencePlayer
	 * Size -> 0x00A0 (FullSize[0x0868] - InheritedSize[0x07C8])
	 */
	class ULevelSequencePlayer : public UMovieSceneSequencePlayer
	{
	public:
		class FScriptMulticastDelegate                             OnCameraCut;                                             // 0x07C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KNAP[0x30];                                  // 0x07D8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     AdditionalEventReceivers;                                // 0x0808(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N6Y4[0x50];                                  // 0x0818(0x0050) MISSED OFFSET (PADDING)

	public:
		class ULevelSequencePlayer* STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
