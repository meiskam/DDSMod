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
	 * BlueprintGeneratedClass psychedelicDoorNPC.psychedelicDoorNPC_C
	 * Size -> 0x0014 (FullSize[0x0AE8] - InheritedSize[0x0AD4])
	 */
	class ApsychedelicDoorNPC_C : public AbaseNPC_C
	{
	public:
		unsigned char                                              UnknownData_TWV2[0x4];                                   // 0x0AD4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AD8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AdoorsExtWoodPsychedelicHideout_C*                   psychDoorRef;                                            // 0x0AE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void checkDoorOpen();
		void ExecuteUbergraph_psychedelicDoorNPC(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
