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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.getRandomMeshID
	 */
	struct AclientLooksDatabaseBP_C_getRandomMeshID_Params
	{
	public:
		TArray<class USkeletalMesh*>                               targetArray;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.generateRandomClient
	 */
	struct AclientLooksDatabaseBP_C_generateRandomClient_Params
	{
	public:
		bool                                                       Male;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ClientLevel;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FclientLooksData                                    Looks;                                                   // 0x0000(0x0014)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.returnMyBody
	 */
	struct AclientLooksDatabaseBP_C_returnMyBody_Params
	{
	public:
		struct FclientLooksData                                    LooksData;                                               // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isMale;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMesh*                                       MainBody;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMesh*                                       Head;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMesh*                                       Hair;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMesh*                                       Arms;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMesh*                                       Glasses;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMesh*                                       Hat;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstance*                                   BodyMaterial;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.UserConstructionScript
	 */
	struct AclientLooksDatabaseBP_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
