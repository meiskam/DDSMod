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
	 * BlueprintGeneratedClass decoTrashFloorLamp.decoTrashFloorLamp_C
	 * Size -> 0x0010 (FullSize[0x0470] - InheritedSize[0x0460])
	 */
	class AdecoTrashFloorLamp_C : public AdecoModernFloorLamp1_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0460(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMaterialInstanceDynamic*                            LightSwitch;                                             // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void InputToggleOff();
		void InputToggleOn();
		void ExecuteUbergraph_decoTrashFloorLamp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
