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
	 * BlueprintGeneratedClass doorsExtWood01_PlayerAppartment.doorsExtWood01_PlayerAppartment_C
	 * Size -> 0x000E (FullSize[0x0538] - InheritedSize[0x052A])
	 */
	class AdoorsExtWood01_PlayerAppartment_C : public AdoorBase_C
	{
	public:
		unsigned char                                              UnknownData_KOK0[0x6];                                   // 0x052A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0530(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void eventDoorActivated();
		void EnableHouseDoor();
		void DisableHouseDoor();
		void ExecuteUbergraph_doorsExtWood01_PlayerAppartment(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
