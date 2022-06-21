﻿#pragma once

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
	 * BlueprintGeneratedClass decoOldschoolCeilingLamp4.decoOldschoolCeilingLamp4_C
	 * Size -> 0x0012 (FullSize[0x0458] - InheritedSize[0x0446])
	 */
	class AdecoOldschoolCeilingLamp4_C : public AdecoOldschoolArmchair_C
	{
	public:
		unsigned char                                              UnknownData_KYC6[0x2];                                   // 0x0446(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0448(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPointLightComponent*                                PointLight;                                              // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_decoOldschoolCeilingLamp4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif