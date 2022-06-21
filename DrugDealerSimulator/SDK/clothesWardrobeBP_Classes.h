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
	 * BlueprintGeneratedClass clothesWardrobeBP.clothesWardrobeBP_C
	 * Size -> 0x0012 (FullSize[0x043A] - InheritedSize[0x0428])
	 */
	class AclothesWardrobeBP_C : public AinteractiveBaseObject_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URamaSaveComponent*                                  RamaSave;                                                // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       changingClothes;                                         // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       respawned;                                               // 0x0439(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void endCopAlert();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ChangeClothes();
		void unlockChange();
		void ExecuteUbergraph_clothesWardrobeBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
