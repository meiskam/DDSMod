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
	 * 		Name   -> Function containerBase.containerBase_C.ExpandRama
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AcontainerBase_C::ExpandRama()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.ExpandRama");
		
		AcontainerBase_C_ExpandRama_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.ParseOldInventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AcontainerBase_C::ParseOldInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.ParseOldInventory");
		
		AcontainerBase_C_ParseOldInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.CanAccessContainer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanAccess                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        DeclineReason                                              (Parm, OutParm)
	 */
	void AcontainerBase_C::CanAccessContainer(bool* CanAccess, class FText* DeclineReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.CanAccessContainer");
		
		AcontainerBase_C_CanAccessContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanAccess != nullptr)
			*CanAccess = params.CanAccess;
		if (DeclineReason != nullptr)
			*DeclineReason = params.DeclineReason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.AcceptsCategory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EitemCategories                                    Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ok                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AcontainerBase_C::AcceptsCategory(EitemCategories Category, bool* ok)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.AcceptsCategory");
		
		AcontainerBase_C_AcceptsCategory_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ok != nullptr)
			*ok = params.ok;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.CheckFullyLooted
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NotLooted                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AcontainerBase_C::CheckFullyLooted(bool* NotLooted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.CheckFullyLooted");
		
		AcontainerBase_C_CheckFullyLooted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NotLooted != nullptr)
			*NotLooted = params.NotLooted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.EndLootingSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AcontainerBase_C::EndLootingSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.EndLootingSound");
		
		AcontainerBase_C_EndLootingSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.GetOpenState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AcontainerBase_C::GetOpenState(bool* IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.GetOpenState");
		
		AcontainerBase_C_GetOpenState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOpen != nullptr)
			*IsOpen = params.IsOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.reconstructContentsReferences
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AcontainerBase_C::reconstructContentsReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.reconstructContentsReferences");
		
		AcontainerBase_C_reconstructContentsReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.respawnFurniture
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AcontainerBase_C::respawnFurniture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.respawnFurniture");
		
		AcontainerBase_C_respawnFurniture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.setBackpackDefaults
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AcontainerBase_C::setBackpackDefaults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.setBackpackDefaults");
		
		AcontainerBase_C_setBackpackDefaults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.returnItemSizing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FinventoryItemStruct                        Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		float                                              Size                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Weight                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AcontainerBase_C::returnItemSizing(const struct FinventoryItemStruct& Data, float* Size, float* Weight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.returnItemSizing");
		
		AcontainerBase_C_returnItemSizing_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Size != nullptr)
			*Size = params.Size;
		if (Weight != nullptr)
			*Weight = params.Weight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.resetContentSizes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AcontainerBase_C::resetContentSizes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.resetContentSizes");
		
		AcontainerBase_C_resetContentSizes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.RemoveItem
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AcontainerBase_C::RemoveItem(int32_t ItemIndex, int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.RemoveItem");
		
		AcontainerBase_C_RemoveItem_Params params {};
		params.ItemIndex = ItemIndex;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.AddItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FinventoryItemStruct                        itemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		int32_t                                            itemQuantity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ForceLooted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AddedIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               QuanChanged                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AcontainerBase_C::AddItem(const struct FinventoryItemStruct& itemData, int32_t itemQuantity, bool ForceLooted, int32_t* AddedIndex, bool* QuanChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.AddItem");
		
		AcontainerBase_C_AddItem_Params params {};
		params.itemData = itemData;
		params.itemQuantity = itemQuantity;
		params.ForceLooted = ForceLooted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AddedIndex != nullptr)
			*AddedIndex = params.AddedIndex;
		if (QuanChanged != nullptr)
			*QuanChanged = params.QuanChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AcontainerBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.UserConstructionScript");
		
		AcontainerBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AcontainerBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.ReceiveBeginPlay");
		
		AcontainerBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.openContainer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AcontainerBase_C::openContainer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.openContainer");
		
		AcontainerBase_C_openContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.openEventScript
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AcontainerBase_C::openEventScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.openEventScript");
		
		AcontainerBase_C_openEventScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.closeContainer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AcontainerBase_C::closeContainer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.closeContainer");
		
		AcontainerBase_C_closeContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.closeEventScript
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AcontainerBase_C::closeEventScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.closeEventScript");
		
		AcontainerBase_C_closeEventScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.purgeContainer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AcontainerBase_C::purgeContainer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.purgeContainer");
		
		AcontainerBase_C_purgeContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class URamaSaveComponent*                          RamaSaveComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      LevelPackageName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AcontainerBase_C::BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature");
		
		AcontainerBase_C_BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params params {};
		params.RamaSaveComponent = RamaSaveComponent;
		params.LevelPackageName = LevelPackageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.RamaLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AcontainerBase_C::RamaLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.RamaLoaded");
		
		AcontainerBase_C_RamaLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_InventoryStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AcontainerBase_C::BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_InventoryStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_InventoryStateChanged__DelegateSignature");
		
		AcontainerBase_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_InventoryStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function containerBase.containerBase_C.ExecuteUbergraph_containerBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AcontainerBase_C::ExecuteUbergraph_containerBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.ExecuteUbergraph_containerBase");
		
		AcontainerBase_C_ExecuteUbergraph_containerBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AcontainerBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AcontainerBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass containerBase.containerBase_C");
		return ptr;
	}

}


