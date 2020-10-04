
#include "SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function workStationManualListWidget.workStationManualListWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UworkStationManualListWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationManualListWidget.workStationManualListWidget_C.PreConstruct");

	UworkStationManualListWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationManualListWidget.workStationManualListWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UworkStationManualListWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationManualListWidget.workStationManualListWidget_C.Construct");

	UworkStationManualListWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationManualListWidget.workStationManualListWidget_C.ExecuteUbergraph_workStationManualListWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UworkStationManualListWidget_C::ExecuteUbergraph_workStationManualListWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationManualListWidget.workStationManualListWidget_C.ExecuteUbergraph_workStationManualListWidget");

	UworkStationManualListWidget_C_ExecuteUbergraph_workStationManualListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
