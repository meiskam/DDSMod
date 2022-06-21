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
	 * Class ActorSequence.ActorSequence
	 * Size -> 0x0028 (FullSize[0x0370] - InheritedSize[0x0348])
	 */
	class UActorSequence : public UMovieSceneSequence
	{
	public:
		class UMovieScene*                                         MovieScene;                                              // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FActorSequenceObjectReferenceMap                    ObjectReferences;                                        // 0x0350(0x0020) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActorSequence.ActorSequenceComponent
	 * Size -> 0x0058 (FullSize[0x0148] - InheritedSize[0x00F0])
	 */
	class UActorSequenceComponent : public UActorComponent
	{
	public:
		bool                                                       bAutoPlay;                                               // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UDG8[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSequencePlaybackSettings                 PlaybackSettings;                                        // 0x00F8(0x0040) Edit, Protected, NativeAccessSpecifierProtected
		class UActorSequence*                                      Sequence;                                                // 0x0138(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UActorSequencePlayer*                                SequencePlayer;                                          // 0x0140(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActorSequence.ActorSequencePlayer
	 * Size -> 0x0000 (FullSize[0x07C8] - InheritedSize[0x07C8])
	 */
	class UActorSequencePlayer : public UMovieSceneSequencePlayer
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
