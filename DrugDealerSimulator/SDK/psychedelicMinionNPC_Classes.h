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
	 * BlueprintGeneratedClass psychedelicMinionNPC.psychedelicMinionNPC_C
	 * Size -> 0x0014 (FullSize[0x0AE8] - InheritedSize[0x0AD4])
	 */
	class ApsychedelicMinionNPC_C : public AbaseNPC_C
	{
	public:
		unsigned char                                              UnknownData_22F8[0x4];                                   // 0x0AD4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AD8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ApsychedelicGangManager_C*                           gangManager;                                             // 0x0AE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void checkCanTalk();
		void retryInitiate();
		void ExecuteUbergraph_psychedelicMinionNPC(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
