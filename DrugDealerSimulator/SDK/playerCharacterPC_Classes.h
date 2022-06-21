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
	 * BlueprintGeneratedClass playerCharacterPC.playerCharacterPC_C
	 * Size -> 0x0018 (FullSize[0x0690] - InheritedSize[0x0678])
	 */
	class AplayerCharacterPC_C : public APlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0678(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UUserWidget*>                                 FrontWidgets;                                            // 0x0680(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void HasFrontWidgets(bool* HasWidgets);
		void CloseFrontWidget();
		void RegisterFrontWidget(class UUserWidget* NewItem);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_playerCharacterPC(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
