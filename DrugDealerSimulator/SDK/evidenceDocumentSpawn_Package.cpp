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
	 * 		Name   -> Function evidenceDocumentSpawn.evidenceDocumentSpawn_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AevidenceDocumentSpawn_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function evidenceDocumentSpawn.evidenceDocumentSpawn_C.UserConstructionScript");
		
		AevidenceDocumentSpawn_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function evidenceDocumentSpawn.evidenceDocumentSpawn_C.spawnTheDocuments
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AevidenceDocumentSpawn_C::spawnTheDocuments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function evidenceDocumentSpawn.evidenceDocumentSpawn_C.spawnTheDocuments");
		
		AevidenceDocumentSpawn_C_spawnTheDocuments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function evidenceDocumentSpawn.evidenceDocumentSpawn_C.ExecuteUbergraph_evidenceDocumentSpawn
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AevidenceDocumentSpawn_C::ExecuteUbergraph_evidenceDocumentSpawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function evidenceDocumentSpawn.evidenceDocumentSpawn_C.ExecuteUbergraph_evidenceDocumentSpawn");
		
		AevidenceDocumentSpawn_C_ExecuteUbergraph_evidenceDocumentSpawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AevidenceDocumentSpawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AevidenceDocumentSpawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass evidenceDocumentSpawn.evidenceDocumentSpawn_C");
		return ptr;
	}

}


