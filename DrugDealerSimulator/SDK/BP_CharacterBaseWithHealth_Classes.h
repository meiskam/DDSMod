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
	 * BlueprintGeneratedClass BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C
	 * Size -> 0x000D (FullSize[0x074D] - InheritedSize[0x0740])
	 */
	class ABP_CharacterBaseWithHealth_C : public ACharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0740(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Health;                                                  // 0x0748(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AmI_Alive_;                                              // 0x074C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void Damage(float Damage);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_CharacterBaseWithHealth(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
