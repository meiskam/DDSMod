/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.getRandomMeshID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class USkeletalMesh*>                       targetArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t AclientLooksDatabaseBP_C::getRandomMeshID(TArray<class USkeletalMesh*> targetArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.getRandomMeshID");
		
		AclientLooksDatabaseBP_C_getRandomMeshID_Params params {};
		params.targetArray = targetArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.generateRandomClient
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Male                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ClientLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FclientLooksData                            Looks                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AclientLooksDatabaseBP_C::generateRandomClient(bool Male, float ClientLevel, struct FclientLooksData* Looks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.generateRandomClient");
		
		AclientLooksDatabaseBP_C_generateRandomClient_Params params {};
		params.Male = Male;
		params.ClientLevel = ClientLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Looks != nullptr)
			*Looks = params.Looks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.returnMyBody
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FclientLooksData                            LooksData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isMale                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMesh*                               MainBody                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMesh*                               Head                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMesh*                               Hair                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMesh*                               Arms                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMesh*                               Glasses                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMesh*                               Hat                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstance*                           BodyMaterial                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AclientLooksDatabaseBP_C::returnMyBody(const struct FclientLooksData& LooksData, bool isMale, class USkeletalMesh** MainBody, class USkeletalMesh** Head, class USkeletalMesh** Hair, class USkeletalMesh** Arms, class USkeletalMesh** Glasses, class USkeletalMesh** Hat, class UMaterialInstance** BodyMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.returnMyBody");
		
		AclientLooksDatabaseBP_C_returnMyBody_Params params {};
		params.LooksData = LooksData;
		params.isMale = isMale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MainBody != nullptr)
			*MainBody = params.MainBody;
		if (Head != nullptr)
			*Head = params.Head;
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

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AclientLooksDatabaseBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function clientLooksDatabaseBP.clientLooksDatabaseBP_C.UserConstructionScript");
		
		AclientLooksDatabaseBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AclientLooksDatabaseBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AclientLooksDatabaseBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass clientLooksDatabaseBP.clientLooksDatabaseBP_C");
		return ptr;
	}

}


