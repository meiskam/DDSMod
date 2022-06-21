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
	 * BlueprintGeneratedClass psychedelicMinionDialogue.psychedelicMinionDialogue_C
	 * Size -> 0x022E (FullSize[0x05C0] - InheritedSize[0x0392])
	 */
	class ApsychedelicMinionDialogue_C : public AdialogueInstance_C
	{
	public:
		unsigned char                                              UnknownData_MUGO[0x6];                                   // 0x0392(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0398(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<struct FdialogueData>                               retrieveEnvelopeLines;                                   // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       allowBypass;                                             // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PSN0[0x7];                                   // 0x03B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FdialogueData                                       bypassDialOption;                                        // 0x03B8(0x0100) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FdialogueData                                       noBypassDialOption;                                      // 0x04B8(0x0100) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class ApsychedelicGangManager_C*                           gangManRef;                                              // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void checkPlayerForDocuments(bool* hasDocuments);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void firstChatEnded();
		void configureDialogue();
		void takeEnvelope();
		void startPoliceMission();
		void policeStationDone();
		void johnTask();
		void nextEnvelopeMission();
		void missionTestingBypass();
		void checkDestroy();
		void ExecuteUbergraph_psychedelicMinionDialogue(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
