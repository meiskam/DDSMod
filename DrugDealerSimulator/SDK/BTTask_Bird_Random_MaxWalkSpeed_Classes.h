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
	 * BlueprintGeneratedClass BTTask_Bird_Random_MaxWalkSpeed.BTTask_Bird_Random_MaxWalkSpeed_C
	 * Size -> 0x0010 (FullSize[0x00B0] - InheritedSize[0x00A0])
	 */
	class UBTTask_Bird_Random_MaxWalkSpeed_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      MinWalkSpeed;                                            // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxWalkSpeed;                                            // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_BTTask_Bird_Random_MaxWalkSpeed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
