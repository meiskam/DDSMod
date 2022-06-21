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
	 * Class MRMesh.MeshReconstructorBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshReconstructorBase : public UObject
	{
	public:
		void StopReconstruction();
		void StartReconstruction();
		void PauseReconstruction();
		bool IsReconstructionStarted();
		bool IsReconstructionPaused();
		void DisconnectMRMesh();
		void ConnectMRMesh(class UMRMeshComponent* Mesh);
		static UClass* StaticClass();
	};

	/**
	 * Class MRMesh.MRMeshComponent
	 * Size -> 0x0040 (FullSize[0x05A0] - InheritedSize[0x0560])
	 */
	class UMRMeshComponent : public UPrimitiveComponent
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0560(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCreateMeshProxySections;                                // 0x0568(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUpdateNavMeshOnMeshUpdate;                              // 0x0569(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UVS6[0x6];                                   // 0x056A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBodySetup*>                                  BodySetups;                                              // 0x0570(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0E39[0x20];                                  // 0x0580(0x0020) MISSED OFFSET (PADDING)

	public:
		bool IsConnected();
		void ForceNavMeshUpdate();
		void Clear();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
