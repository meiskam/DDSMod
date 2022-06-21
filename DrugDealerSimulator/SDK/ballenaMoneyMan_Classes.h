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
	 * BlueprintGeneratedClass ballenaMoneyMan.ballenaMoneyMan_C
	 * Size -> 0x0015 (FullSize[0x0AE9] - InheritedSize[0x0AD4])
	 */
	class AballenaMoneyMan_C : public AbaseNPC_C
	{
	public:
		unsigned char                                              UnknownData_UP3V[0x4];                                   // 0x0AD4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AD8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AsuitcaseBP_C*                                       moneySpawn;                                              // 0x0AE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       waitingForPlayer;                                        // 0x0AE8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void tryGoingHome();
		void ExecuteUbergraph_ballenaMoneyMan(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
