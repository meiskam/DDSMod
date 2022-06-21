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
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.Restack
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       SourceGuid                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       TargetGuid                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryComponent_C::Restack(const struct FGuid& SourceGuid, const struct FGuid& TargetGuid, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.Restack");
		
		UInventoryComponent_C_Restack_Params params {};
		params.SourceGuid = SourceGuid;
		params.TargetGuid = TargetGuid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.AddLoot
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UInventoryComponent_C::AddLoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.AddLoot");
		
		UInventoryComponent_C_AddLoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.UpdateBackpack
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewBackpack                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FromVendor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryComponent_C::UpdateBackpack(const class FName& NewBackpack, bool FromVendor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateBackpack");
		
		UInventoryComponent_C_UpdateBackpack_Params params {};
		params.NewBackpack = NewBackpack;
		params.FromVendor = FromVendor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.CountItemsOfType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CountAmounts                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutItems                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryComponent_C::CountItemsOfType(const class FName& ItemID, bool CountAmounts, int32_t* OutItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CountItemsOfType");
		
		UInventoryComponent_C_CountItemsOfType_Params params {};
		params.ItemID = ItemID;
		params.CountAmounts = CountAmounts;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItems != nullptr)
			*OutItems = params.OutItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.UseInventoryItem
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       LocalGuid                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AmountLeft                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryComponent_C::UseInventoryItem(int32_t Amount, const struct FGuid& LocalGuid, const class FName& ItemID, bool* Success, int32_t* AmountLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UseInventoryItem");
		
		UInventoryComponent_C_UseInventoryItem_Params params {};
		params.Amount = Amount;
		params.LocalGuid = LocalGuid;
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (AmountLeft != nullptr)
			*AmountLeft = params.AmountLeft;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.SetItemLooted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LootedState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryComponent_C::SetItemLooted(int32_t Index, bool LootedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.SetItemLooted");
		
		UInventoryComponent_C_SetItemLooted_Params params {};
		params.Index = Index;
		params.LootedState = LootedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.GetLootArray
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<bool>                                       LootArray                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void UInventoryComponent_C::GetLootArray(TArray<bool>* LootArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetLootArray");
		
		UInventoryComponent_C_GetLootArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LootArray != nullptr)
			*LootArray = params.LootArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.PurgeInventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               BackpackOnly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryComponent_C::PurgeInventory(bool BackpackOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.PurgeInventory");
		
		UInventoryComponent_C_PurgeInventory_Params params {};
		params.BackpackOnly = BackpackOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.HasAnyItems
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               HasItems                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryComponent_C::HasAnyItems(bool* HasItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.HasAnyItems");
		
		UInventoryComponent_C_HasAnyItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasItems != nullptr)
			*HasItems = params.HasItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.CheckCanAdd
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanAdd                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryComponent_C::CheckCanAdd(const class FName& ItemID, int32_t Quantity, int32_t Amount, bool* CanAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CheckCanAdd");
		
		UInventoryComponent_C_CheckCanAdd_Params params {};
		params.ItemID = ItemID;
		params.Quantity = Quantity;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanAdd != nullptr)
			*CanAdd = params.CanAdd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.AcceptVendorItems
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UInventoryComponent_C::AcceptVendorItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.AcceptVendorItems");
		
		UInventoryComponent_C_AcceptVendorItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.PurgeVendorItems
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UInventoryComponent_C::PurgeVendorItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.PurgeVendorItems");
		
		UInventoryComponent_C_PurgeVendorItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.CountVendorItemValue
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AshopInstance_C*                             ShopRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AllValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryComponent_C::CountVendorItemValue(class AshopInstance_C* ShopRef, int32_t* AllValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CountVendorItemValue");
		
		UInventoryComponent_C_CountVendorItemValue_Params params {};
		params.ShopRef = ShopRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllValue != nullptr)
			*AllValue = params.AllValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.DrawInventoryMoney
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasAmount                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryComponent_C::DrawInventoryMoney(int32_t Amount, bool* HasAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.DrawInventoryMoney");
		
		UInventoryComponent_C_DrawInventoryMoney_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasAmount != nullptr)
			*HasAmount = params.HasAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.CountInventoryMoney
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IncludeValuables                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AllMoney                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryComponent_C::CountInventoryMoney(bool IncludeValuables, int32_t* AllMoney)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CountInventoryMoney");
		
		UInventoryComponent_C_CountInventoryMoney_Params params {};
		params.IncludeValuables = IncludeValuables;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllMoney != nullptr)
			*AllMoney = params.AllMoney;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.GetItemOfGuid
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       LocalGuid                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FInventoryListStructure                     itemData                                                   (Parm, OutParm, HasGetValueTypeHash)
	 * 		bool                                               ItemFound                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryComponent_C::GetItemOfGuid(const struct FGuid& LocalGuid, struct FInventoryListStructure* itemData, bool* ItemFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetItemOfGuid");
		
		UInventoryComponent_C_GetItemOfGuid_Params params {};
		params.LocalGuid = LocalGuid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (itemData != nullptr)
			*itemData = params.itemData;
		if (ItemFound != nullptr)
			*ItemFound = params.ItemFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.RemoveItemOfType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryComponent_C::RemoveItemOfType(const class FName& ItemID, int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.RemoveItemOfType");
		
		UInventoryComponent_C_RemoveItemOfType_Params params {};
		params.ItemID = ItemID;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.RemoveItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       LocalGuid                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryComponent_C::RemoveItem(const struct FGuid& LocalGuid, int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.RemoveItem");
		
		UInventoryComponent_C_RemoveItem_Params params {};
		params.LocalGuid = LocalGuid;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.HandleOldBackpack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FinventoryItemStruct                        backpackData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		class FName                                        OutName                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryComponent_C::HandleOldBackpack(const struct FinventoryItemStruct& backpackData, class FName* OutName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.HandleOldBackpack");
		
		UInventoryComponent_C_HandleOldBackpack_Params params {};
		params.backpackData = backpackData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutName != nullptr)
			*OutName = params.OutName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.GetItemAtPocket
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PocketIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasItem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FInventoryListStructure                     OutItem                                                    (Parm, OutParm, HasGetValueTypeHash)
	 * 		int32_t                                            ArrayIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryComponent_C::GetItemAtPocket(int32_t PocketIndex, bool* HasItem, struct FInventoryListStructure* OutItem, int32_t* ArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetItemAtPocket");
		
		UInventoryComponent_C_GetItemAtPocket_Params params {};
		params.PocketIndex = PocketIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasItem != nullptr)
			*HasItem = params.HasItem;
		if (OutItem != nullptr)
			*OutItem = params.OutItem;
		if (ArrayIndex != nullptr)
			*ArrayIndex = params.ArrayIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.GetTotalWeight
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TotalWeight                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryComponent_C::GetTotalWeight(float* TotalWeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetTotalWeight");
		
		UInventoryComponent_C_GetTotalWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TotalWeight != nullptr)
			*TotalWeight = params.TotalWeight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.GetItemList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ItemsOfName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FilterByCategory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EitemCategories                                    Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       HeldInGuid                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IncludePockets                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FInventoryListStructure>             OutItems                                                   (Parm, OutParm, ZeroConstructor)
	 * 		bool                                               StackExceeded                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryComponent_C::GetItemList(const class FName& ItemsOfName, bool FilterByCategory, EitemCategories Category, const struct FGuid& HeldInGuid, bool IncludePockets, TArray<struct FInventoryListStructure>* OutItems, bool* StackExceeded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.GetItemList");
		
		UInventoryComponent_C_GetItemList_Params params {};
		params.ItemsOfName = ItemsOfName;
		params.FilterByCategory = FilterByCategory;
		params.Category = Category;
		params.HeldInGuid = HeldInGuid;
		params.IncludePockets = IncludePockets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItems != nullptr)
			*OutItems = params.OutItems;
		if (StackExceeded != nullptr)
			*StackExceeded = params.StackExceeded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.CountFrontItems
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               BackpackOnly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            FrontItemCount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryComponent_C::CountFrontItems(bool BackpackOnly, int32_t* FrontItemCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.CountFrontItems");
		
		UInventoryComponent_C_CountFrontItems_Params params {};
		params.BackpackOnly = BackpackOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FrontItemCount != nullptr)
			*FrontItemCount = params.FrontItemCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.AddItem
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CustomTagName                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMixProportionsStruct                       MixProportions                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		struct FGuid                                       SetHeldIn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ForceAdd                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               VendorItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PocketIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SetLooted                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CountOnly                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AllAdded                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            QuantityLeft                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       OutLocalGuid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryComponent_C::AddItem(const class FName& ItemID, const class FText& CustomTagName, int32_t Quantity, int32_t Amount, const struct FMixProportionsStruct& MixProportions, const struct FGuid& SetHeldIn, bool ForceAdd, bool VendorItem, int32_t PocketIndex, bool SetLooted, bool CountOnly, bool* AllAdded, int32_t* QuantityLeft, struct FGuid* OutLocalGuid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.AddItem");
		
		UInventoryComponent_C_AddItem_Params params {};
		params.ItemID = ItemID;
		params.CustomTagName = CustomTagName;
		params.Quantity = Quantity;
		params.Amount = Amount;
		params.MixProportions = MixProportions;
		params.SetHeldIn = SetHeldIn;
		params.ForceAdd = ForceAdd;
		params.VendorItem = VendorItem;
		params.PocketIndex = PocketIndex;
		params.SetLooted = SetLooted;
		params.CountOnly = CountOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllAdded != nullptr)
			*AllAdded = params.AllAdded;
		if (QuantityLeft != nullptr)
			*QuantityLeft = params.QuantityLeft;
		if (OutLocalGuid != nullptr)
			*OutLocalGuid = params.OutLocalGuid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.HandleOldInventory
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FinventoryItemStruct>                InventoryStructs                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	 * 		TArray<int32_t>                                    InventoryQuantities                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class AitemInventoryHolder_C*>              itemContents                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<int32_t>                                    PocketIndexes                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UInventoryComponent_C::HandleOldInventory(TArray<struct FinventoryItemStruct>* InventoryStructs, TArray<int32_t>* InventoryQuantities, TArray<class AitemInventoryHolder_C*>* itemContents, TArray<int32_t>* PocketIndexes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.HandleOldInventory");
		
		UInventoryComponent_C_HandleOldInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InventoryStructs != nullptr)
			*InventoryStructs = params.InventoryStructs;
		if (InventoryQuantities != nullptr)
			*InventoryQuantities = params.InventoryQuantities;
		if (itemContents != nullptr)
			*itemContents = params.itemContents;
		if (PocketIndexes != nullptr)
			*PocketIndexes = params.PocketIndexes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.BlockDisplatcher
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UInventoryComponent_C::BlockDisplatcher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.BlockDisplatcher");
		
		UInventoryComponent_C_BlockDisplatcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.UnlockDispatcher
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UInventoryComponent_C::UnlockDispatcher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UnlockDispatcher");
		
		UInventoryComponent_C_UnlockDispatcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.DispatchUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UInventoryComponent_C::DispatchUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.DispatchUpdate");
		
		UInventoryComponent_C_DispatchUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.UpdateInventorySerialization
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class URamaSaveComponent*                          RamaComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryComponent_C::UpdateInventorySerialization(class URamaSaveComponent* RamaComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.UpdateInventorySerialization");
		
		UInventoryComponent_C_UpdateInventorySerialization_Params params {};
		params.RamaComponent = RamaComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.ExecuteUbergraph_InventoryComponent
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryComponent_C::ExecuteUbergraph_InventoryComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.ExecuteUbergraph_InventoryComponent");
		
		UInventoryComponent_C_ExecuteUbergraph_InventoryComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.BackpackChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FromVendor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryComponent_C::BackpackChanged__DelegateSignature(bool FromVendor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.BackpackChanged__DelegateSignature");
		
		UInventoryComponent_C_BackpackChanged__DelegateSignature_Params params {};
		params.FromVendor = FromVendor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InventoryComponent.InventoryComponent_C.InventoryStateChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UInventoryComponent_C::InventoryStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryComponent.InventoryComponent_C.InventoryStateChanged__DelegateSignature");
		
		UInventoryComponent_C_InventoryStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInventoryComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InventoryComponent.InventoryComponent_C");
		return ptr;
	}

}


