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
	 * BlueprintGeneratedClass SectorC_GateGuard.SectorC_GateGuard_C
	 * Size -> 0x000C (FullSize[0x0AE0] - InheritedSize[0x0AD4])
	 */
	class ASectorC_GateGuard_C : public AbaseNPC_C
	{
	public:
		unsigned char                                              UnknownData_E3FC[0x4];                                   // 0x0AD4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AD8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void RamaLoadedEvent();
		void ExecuteUbergraph_SectorC_GateGuard(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
