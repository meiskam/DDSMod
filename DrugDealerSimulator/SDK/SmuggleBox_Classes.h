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
	 * BlueprintGeneratedClass SmuggleBox.SmuggleBox_C
	 * Size -> 0x0020 (FullSize[0x0511] - InheritedSize[0x04F1])
	 */
	class ASmuggleBox_C : public AcontainerBase_C
	{
	public:
		unsigned char                                              UnknownData_OBTP[0x7];                                   // 0x04F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_Cardboard_box_01;                                     // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ASmuggleBox_C*                                       OtherBox;                                                // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Sent;                                                    // 0x0510(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CanAccessContainer(bool* CanAccess, class FText* DeclineReason);
		void UserConstructionScript();
		void SmuggleContents();
		void openEventScript();
		void closeEventScript();
		void RamaLoaded();
		void ExecuteUbergraph_SmuggleBox(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
