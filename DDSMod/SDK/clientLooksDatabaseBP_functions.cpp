
#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.getRandomMeshID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class USkeletalMesh*>   TargetArray                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AclientLooksDatabaseBP_C::getRandomMeshID(TArray<class USkeletalMesh*> TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.getRandomMeshID");

	AclientLooksDatabaseBP_C_getRandomMeshID_Params params;
	params.TargetArray = TargetArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.generateRandomClient
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           male                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ClientLevel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FclientLooksData        Looks                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AclientLooksDatabaseBP_C::generateRandomClient(bool male, float ClientLevel, struct FclientLooksData* Looks)
{
	static auto fn = UObject::FindObject<UFunction>("Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.generateRandomClient");

	AclientLooksDatabaseBP_C_generateRandomClient_Params params;
	params.male = male;
	params.ClientLevel = ClientLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Looks != nullptr)
		*Looks = params.Looks;
}


// Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.returnMyBody
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FclientLooksData        LooksData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isMale                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           MainBody                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           head                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           Hair                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           Arms                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           Glasses                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           Hat                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstance*       BodyMaterial                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AclientLooksDatabaseBP_C::returnMyBody(const struct FclientLooksData& LooksData, bool isMale, class USkeletalMesh** MainBody, class USkeletalMesh** head, class USkeletalMesh** Hair, class USkeletalMesh** Arms, class USkeletalMesh** Glasses, class USkeletalMesh** Hat, class UMaterialInstance** BodyMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.returnMyBody");

	AclientLooksDatabaseBP_C_returnMyBody_Params params;
	params.LooksData = LooksData;
	params.isMale = isMale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MainBody != nullptr)
		*MainBody = params.MainBody;
	if (head != nullptr)
		*head = params.head;
	if (Hair != nullptr)
		*Hair = params.Hair;
	if (Arms != nullptr)
		*Arms = params.Arms;
	if (Glasses != nullptr)
		*Glasses = params.Glasses;
	if (Hat != nullptr)
		*Hat = params.Hat;
	if (BodyMaterial != nullptr)
		*BodyMaterial = params.BodyMaterial;
}


// Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AclientLooksDatabaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.UserConstructionScript");

	AclientLooksDatabaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
