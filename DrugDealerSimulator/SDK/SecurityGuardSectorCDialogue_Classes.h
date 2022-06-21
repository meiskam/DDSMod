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
	 * BlueprintGeneratedClass SecurityGuardSectorCDialogue.SecurityGuardSectorCDialogue_C
	 * Size -> 0x0012 (FullSize[0x03A4] - InheritedSize[0x0392])
	 */
	class ASecurityGuardSectorCDialogue_C : public AdialogueInstance_C
	{
	public:
		unsigned char                                              UnknownData_MHRK[0x6];                                   // 0x0392(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0398(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    KeyPrice;                                                // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void DialogueLoaded();
		void tryHandleKey();
		void ExecuteUbergraph_SecurityGuardSectorCDialogue(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
