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
	 * BlueprintGeneratedClass smugglerShopDialogueInstance.smugglerShopDialogueInstance_C
	 * Size -> 0x001A (FullSize[0x03AC] - InheritedSize[0x0392])
	 */
	class AsmugglerShopDialogueInstance_C : public AdialogueInstance_C
	{
	public:
		unsigned char                                              UnknownData_TTD2[0x6];                                   // 0x0392(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0398(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ASmuggleBox_C*                                       SmugglingBox;                                            // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SmuggleCost;                                             // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void DialogueLoaded();
		void DialogueActivated();
		void EngageSmuggle();
		void SmugglersTask();
		void ExecuteUbergraph_smugglerShopDialogueInstance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
