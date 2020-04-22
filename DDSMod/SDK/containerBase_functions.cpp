
#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function containerBase.containerBase_C.setBackpackDefaults
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::setBackpackDefaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.setBackpackDefaults");

	AcontainerBase_C_setBackpackDefaults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.returnItemSizing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FinventoryItemStruct    Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Size                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AcontainerBase_C::returnItemSizing(const struct FinventoryItemStruct& Data, float* Size, float* Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.returnItemSizing");

	AcontainerBase_C_returnItemSizing_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;
	if (Weight != nullptr)
		*Weight = params.Weight;
}


// Function containerBase.containerBase_C.resetContentSizes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::resetContentSizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.resetContentSizes");

	AcontainerBase_C_resetContentSizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.removeItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AcontainerBase_C::removeItem(int ItemIndex, int quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.removeItem");

	AcontainerBase_C_removeItem_Params params;
	params.ItemIndex = ItemIndex;
	params.quantity = quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.AddItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FinventoryItemStruct    itemData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            itemQuantity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AddedIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AcontainerBase_C::AddItem(const struct FinventoryItemStruct& itemData, int itemQuantity, int* AddedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.AddItem");

	AcontainerBase_C_AddItem_Params params;
	params.itemData = itemData;
	params.itemQuantity = itemQuantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AddedIndex != nullptr)
		*AddedIndex = params.AddedIndex;
}


// Function containerBase.containerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.UserConstructionScript");

	AcontainerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AcontainerBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.ReceiveBeginPlay");

	AcontainerBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.openContainer
// (BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::openContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.openContainer");

	AcontainerBase_C_openContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.openEventScript
// (BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::openEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.openEventScript");

	AcontainerBase_C_openEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.closeContainer
// (BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::closeContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.closeContainer");

	AcontainerBase_C_closeContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.closeEventScript
// (BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::closeEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.closeEventScript");

	AcontainerBase_C_closeEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.purgeContainer
// (BlueprintCallable, BlueprintEvent)

void AcontainerBase_C::purgeContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.purgeContainer");

	AcontainerBase_C_purgeContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function containerBase.containerBase_C.ExecuteUbergraph_containerBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AcontainerBase_C::ExecuteUbergraph_containerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function containerBase.containerBase_C.ExecuteUbergraph_containerBase");

	AcontainerBase_C_ExecuteUbergraph_containerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
