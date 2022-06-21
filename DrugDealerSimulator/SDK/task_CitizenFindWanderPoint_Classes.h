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
	 * BlueprintGeneratedClass task_CitizenFindWanderPoint.task_CitizenFindWanderPoint_C
	 * Size -> 0x0018 (FullSize[0x00B8] - InheritedSize[0x00A0])
	 */
	class Utask_CitizenFindWanderPoint_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class ApolicePatrolPoint_C*>                        possiblePoints;                                          // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_task_CitizenFindWanderPoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
