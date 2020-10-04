#pragma once

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DrugSaleArea.DrugSaleArea_C
// 0x004D (0x0375 - 0x0328)
class ADrugSaleArea_C : public AActor
{
public:
	class UBillboardComponent*                         Billboard;                                                // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     AreaID;                                                   // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       AreaParentName;                                           // 0x0348(0x0018) (Edit, BlueprintVisible)
	TArray<class ADrugSalePoint_C*>                    salePoints;                                               // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int                                                areaMinLevel;                                             // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               areaLocked;                                               // 0x0374(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DrugSaleArea.DrugSaleArea_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
