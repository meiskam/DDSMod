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
	 * BlueprintGeneratedClass theCity.theCity_C
	 * Size -> 0x0010 (FullSize[0x0340] - InheritedSize[0x0330])
	 */
	class AtheCity_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ACameraActor*                                        introCamera_ExecuteUbergraph_theCity_RefProperty;        // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_theCity(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
