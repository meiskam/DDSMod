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
	 * 		Name   -> Function shopInstance.shopInstance_C.GetShopMeta
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FShopDataStruct                             ShopData                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void AshopInstance_C::GetShopMeta(struct FShopDataStruct* ShopData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shopInstance.shopInstance_C.GetShopMeta");
		
		AshopInstance_C_GetShopMeta_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShopData != nullptr)
			*ShopData = params.ShopData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shopInstance.shopInstance_C.updateShopClassDefaults
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AshopInstance_C::updateShopClassDefaults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shopInstance.shopInstance_C.updateShopClassDefaults");
		
		AshopInstance_C_updateShopClassDefaults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shopInstance.shopInstance_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AshopInstance_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shopInstance.shopInstance_C.UserConstructionScript");
		
		AshopInstance_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shopInstance.shopInstance_C.checkShopResupply
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AshopInstance_C::checkShopResupply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shopInstance.shopInstance_C.checkShopResupply");
		
		AshopInstance_C_checkShopResupply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shopInstance.shopInstance_C.resupplyShop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AshopInstance_C::resupplyShop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shopInstance.shopInstance_C.resupplyShop");
		
		AshopInstance_C_resupplyShop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shopInstance.shopInstance_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AshopInstance_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shopInstance.shopInstance_C.ReceiveBeginPlay");
		
		AshopInstance_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shopInstance.shopInstance_C.scriptResupplyEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AshopInstance_C::scriptResupplyEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shopInstance.shopInstance_C.scriptResupplyEvent");
		
		AshopInstance_C_scriptResupplyEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shopInstance.shopInstance_C.ExecuteUbergraph_shopInstance
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AshopInstance_C::ExecuteUbergraph_shopInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shopInstance.shopInstance_C.ExecuteUbergraph_shopInstance");
		
		AshopInstance_C_ExecuteUbergraph_shopInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AshopInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AshopInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass shopInstance.shopInstance_C");
		return ptr;
	}

}


