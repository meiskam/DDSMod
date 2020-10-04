
#include "SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function DrugSalePoint.DrugSalePoint_C.peopleOverlaping
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Clear                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADrugSalePoint_C::peopleOverlaping(bool* Clear)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugSalePoint.DrugSalePoint_C.peopleOverlaping");

	ADrugSalePoint_C_peopleOverlaping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Clear != nullptr)
		*Clear = params.Clear;
}


// Function DrugSalePoint.DrugSalePoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADrugSalePoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugSalePoint.DrugSalePoint_C.UserConstructionScript");

	ADrugSalePoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugSalePoint.DrugSalePoint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrugSalePoint_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugSalePoint.DrugSalePoint_C.ReceiveTick");

	ADrugSalePoint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugSalePoint.DrugSalePoint_C.ExecuteUbergraph_DrugSalePoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrugSalePoint_C::ExecuteUbergraph_DrugSalePoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugSalePoint.DrugSalePoint_C.ExecuteUbergraph_DrugSalePoint");

	ADrugSalePoint_C_ExecuteUbergraph_DrugSalePoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
