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
	 * BlueprintGeneratedClass nightClubLookTrigger.nightClubLookTrigger_C
	 * Size -> 0x000B (FullSize[0x0360] - InheritedSize[0x0355])
	 */
	class AnightClubLookTrigger_C : public AlookAtTrigger_C
	{
	public:
		unsigned char                                              UnknownData_SF8P[0x3];                                   // 0x0355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void playerLookedAt();
		void ExecuteUbergraph_nightClubLookTrigger(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
