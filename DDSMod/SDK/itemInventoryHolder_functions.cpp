
#include "SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function itemInventoryHolder.itemInventoryHolder_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AitemInventoryHolder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function itemInventoryHolder.itemInventoryHolder_C.UserConstructionScript");

	AitemInventoryHolder_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function itemInventoryHolder.itemInventoryHolder_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AitemInventoryHolder_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function itemInventoryHolder.itemInventoryHolder_C.ReceiveBeginPlay");

	AitemInventoryHolder_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function itemInventoryHolder.itemInventoryHolder_C.SetContents
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FinventoryItemStruct> contents                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Quantities                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          TotalSize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TotalWieght                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AitemInventoryHolder_C::SetContents(TArray<struct FinventoryItemStruct> contents, TArray<int> Quantities, float TotalSize, float TotalWieght, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function itemInventoryHolder.itemInventoryHolder_C.SetContents");

	AitemInventoryHolder_C_SetContents_Params params;
	params.contents = contents;
	params.Quantities = Quantities;
	params.TotalSize = TotalSize;
	params.TotalWieght = TotalWieght;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function itemInventoryHolder.itemInventoryHolder_C.ExecuteUbergraph_itemInventoryHolder
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AitemInventoryHolder_C::ExecuteUbergraph_itemInventoryHolder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function itemInventoryHolder.itemInventoryHolder_C.ExecuteUbergraph_itemInventoryHolder");

	AitemInventoryHolder_C_ExecuteUbergraph_itemInventoryHolder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
