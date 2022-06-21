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
	 * BlueprintGeneratedClass SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C
	 * Size -> 0x0016 (FullSize[0x03A8] - InheritedSize[0x0392])
	 */
	class ASectorC_GateGuardDialogue_C : public AdialogueInstance_C
	{
	public:
		unsigned char                                              UnknownData_43X1[0x6];                                   // 0x0392(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0398(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ASectorCWicket_C*                                    Gate;                                                    // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheckPlayerPass(bool* Pass);
		void UserConstructionScript();
		void DialogueLoaded();
		void RecheckPlayerPass();
		void tryOpenPass();
		void DialogueActivated();
		void ExecuteUbergraph_SectorC_GateGuardDialogue(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
