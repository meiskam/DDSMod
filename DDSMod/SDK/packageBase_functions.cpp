
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

// Function packageBase.packageBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApackageBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function packageBase.packageBase_C.UserConstructionScript");

	ApackageBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function packageBase.packageBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ApackageBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function packageBase.packageBase_C.ReceiveBeginPlay");

	ApackageBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function packageBase.packageBase_C.takeContents
// (BlueprintCallable, BlueprintEvent)

void ApackageBase_C::takeContents()
{
	static auto fn = UObject::FindObject<UFunction>("Function packageBase.packageBase_C.takeContents");

	ApackageBase_C_takeContents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function packageBase.packageBase_C.setup
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FinventoryItemStruct> contents                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    quantities                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          TotalSize                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TotalWeight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApackageBase_C::setup(TArray<struct FinventoryItemStruct> contents, TArray<int> quantities, float TotalSize, float TotalWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function packageBase.packageBase_C.setup");

	ApackageBase_C_setup_Params params;
	params.contents = contents;
	params.quantities = quantities;
	params.TotalSize = TotalSize;
	params.TotalWeight = TotalWeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function packageBase.packageBase_C.ExecuteUbergraph_packageBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApackageBase_C::ExecuteUbergraph_packageBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function packageBase.packageBase_C.ExecuteUbergraph_packageBase");

	ApackageBase_C_ExecuteUbergraph_packageBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
