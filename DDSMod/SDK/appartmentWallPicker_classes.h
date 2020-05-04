#pragma once

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass appartmentWallPicker.appartmentWallPicker_C
// 0x0048 (0x0370 - 0x0328)
class AappartmentWallPicker_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AStaticMeshActor*>                    wallsToHighlight;                                         // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              highlightValue;                                           // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            dynMats;                                                  // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AappartmentViewerPawn_C*                     appartmentViewer;                                         // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass appartmentWallPicker.appartmentWallPicker_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void highlightAppartment();
	void disableHighlight();
	void ExecuteUbergraph_appartmentWallPicker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
