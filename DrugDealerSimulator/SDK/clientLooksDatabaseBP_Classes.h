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
	 * BlueprintGeneratedClass clientLooksDatabaseBP.clientLooksDatabaseBP_C
	 * Size -> 0x00F4 (FullSize[0x041C] - InheritedSize[0x0328])
	 */
	class AclientLooksDatabaseBP_C : public AActor
	{
	public:
		class UBillboardComponent*                                 Billboard;                                               // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class USkeletalMesh*>                               ClientMaMainBodies;                                      // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class USkeletalMesh*>                               ClientMaHeads;                                           // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class USkeletalMesh*>                               ClientMaHair;                                            // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class USkeletalMesh*>                               ClientMaArms;                                            // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class USkeletalMesh*>                               ClientMaGlasses;                                         // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class USkeletalMesh*>                               ClientMaHats;                                            // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UMaterialInstance*>                           ClientMaBodyMats;                                        // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class USkeletalMesh*>                               ClientFeMainBodies;                                      // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class USkeletalMesh*>                               ClientFeHeads;                                           // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class USkeletalMesh*>                               ClientFeHair;                                            // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class USkeletalMesh*>                               ClientFeArms;                                            // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class USkeletalMesh*>                               ClientFeGlasses;                                         // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class USkeletalMesh*>                               ClientFeHats;                                            // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UMaterialInstance*>                           ClientFeBodyMat;                                         // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      curClientLevel;                                          // 0x0418(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		int32_t getRandomMeshID(TArray<class USkeletalMesh*> targetArray);
		void generateRandomClient(bool Male, float ClientLevel, struct FclientLooksData* Looks);
		void returnMyBody(const struct FclientLooksData& LooksData, bool isMale, class USkeletalMesh** MainBody, class USkeletalMesh** Head, class USkeletalMesh** Hair, class USkeletalMesh** Arms, class USkeletalMesh** Glasses, class USkeletalMesh** Hat, class UMaterialInstance** BodyMaterial);
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
