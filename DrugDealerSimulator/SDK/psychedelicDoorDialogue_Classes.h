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
	 * BlueprintGeneratedClass psychedelicDoorDialogue.psychedelicDoorDialogue_C
	 * Size -> 0x0016 (FullSize[0x03A8] - InheritedSize[0x0392])
	 */
	class ApsychedelicDoorDialogue_C : public AdialogueInstance_C
	{
	public:
		unsigned char                                              UnknownData_O4MO[0x6];                                   // 0x0392(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0398(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ApsychedelicDoorNPC_C*                               doorHandlerRef;                                          // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void unlockGangDoor();
		void ExecuteUbergraph_psychedelicDoorDialogue(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
