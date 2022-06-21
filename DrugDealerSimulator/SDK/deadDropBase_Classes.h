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
	 * BlueprintGeneratedClass deadDropBase.deadDropBase_C
	 * Size -> 0x0027 (FullSize[0x0518] - InheritedSize[0x04F1])
	 */
	class AdeadDropBase_C : public AcontainerBase_C
	{
	public:
		unsigned char                                              UnknownData_4FYY[0x7];                                   // 0x04F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Box;                                                     // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    deadDropID;                                              // 0x0508(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    retrieveTaskID;                                          // 0x050C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeItemsStored;                                         // 0x0510(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       playerAway;                                              // 0x0514(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       itemsStored;                                             // 0x0515(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       itemsStolen;                                             // 0x0516(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       secondSide;                                              // 0x0517(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void checkNoDrugs(bool* DrugsTaken);
		void stealProbability(float* Percent);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void closeEventScript();
		void LongRadiusChanged(bool InRadius);
		void testItemSteal();
		void clearContainer();
		void openEventScript();
		void ShortRadiusChanged(bool InRadius);
		void ExecuteUbergraph_deadDropBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
