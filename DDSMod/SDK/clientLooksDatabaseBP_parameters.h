#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.getRandomMeshID
struct AclientLooksDatabaseBP_C_getRandomMeshID_Params
{
	TArray<class USkeletalMesh*>                       TargetArray;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.generateRandomClient
struct AclientLooksDatabaseBP_C_generateRandomClient_Params
{
	bool                                               male;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ClientLevel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FclientLooksData                            Looks;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.returnMyBody
struct AclientLooksDatabaseBP_C_returnMyBody_Params
{
	struct FclientLooksData                            LooksData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isMale;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               MainBody;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               head;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Hair;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Arms;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Glasses;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Hat;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           BodyMaterial;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.UserConstructionScript
struct AclientLooksDatabaseBP_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
