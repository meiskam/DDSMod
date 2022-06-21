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
	 * Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
	 */
	struct ULevelSequenceBurnInOptions_SetBurnIn_Params
	{
	public:
		struct FSoftClassPath                                      InBurnInClass;                                           // 0x0000(0x0018)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.SetSequence
	 */
	struct ALevelSequenceActor_SetSequence_Params
	{
	public:
		class ULevelSequence*                                      InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.SetEventReceivers
	 */
	struct ALevelSequenceActor_SetEventReceivers_Params
	{
	public:
		TArray<class AActor*>                                      AdditionalReceivers;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.SetBinding
	 */
	struct ALevelSequenceActor_SetBinding_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          Binding;                                                 // 0x0000(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      Actors;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bAllowBindingsFromAsset;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.ResetBindings
	 */
	struct ALevelSequenceActor_ResetBindings_Params
	{	};

	/**
	 * Function LevelSequence.LevelSequenceActor.ResetBinding
	 */
	struct ALevelSequenceActor_ResetBinding_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          Binding;                                                 // 0x0000(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.RemoveBinding
	 */
	struct ALevelSequenceActor_RemoveBinding_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          Binding;                                                 // 0x0000(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.GetSequence
	 */
	struct ALevelSequenceActor_GetSequence_Params
	{
	public:
		bool                                                       bLoad;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitializePlayer;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULevelSequence*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.AddBinding
	 */
	struct ALevelSequenceActor_AddBinding_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          Binding;                                                 // 0x0000(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowBindingsFromAsset;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceBurnIn.SetSettings
	 */
	struct ULevelSequenceBurnIn_SetSettings_Params
	{
	public:
		class UObject*                                             InSettings;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	 */
	struct ULevelSequenceBurnIn_GetSettingsClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceDirector.OnCreated
	 */
	struct ULevelSequenceDirector_OnCreated_Params
	{	};

	/**
	 * Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	 */
	struct ULevelSequencePlayer_CreateLevelSequencePlayer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULevelSequence*                                      LevelSequence;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMovieSceneSequencePlaybackSettings                 Settings;                                                // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class ALevelSequenceActor*                                 OutActor;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULevelSequencePlayer*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
