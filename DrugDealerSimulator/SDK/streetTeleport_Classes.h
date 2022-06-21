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
	 * BlueprintGeneratedClass streetTeleport.streetTeleport_C
	 * Size -> 0x0030 (FullSize[0x0458] - InheritedSize[0x0428])
	 */
	class AstreetTeleport_C : public AinteractiveBaseObject_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                drzwiWejsciowe;                                          // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AteleportDestination_C*                              teleportLocation;                                        // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                akcja;                                                   // 0x0440(0x0018) Edit, BlueprintVisible

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void chujDupaCyce();
		void ExecuteUbergraph_streetTeleport(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
