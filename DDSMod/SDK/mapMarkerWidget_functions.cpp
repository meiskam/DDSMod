
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

// Function mapMarkerWidget.mapMarkerWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UmapMarkerWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function mapMarkerWidget.mapMarkerWidget_C.Construct");

	UmapMarkerWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mapMarkerWidget.mapMarkerWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UmapMarkerWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function mapMarkerWidget.mapMarkerWidget_C.Tick");

	UmapMarkerWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mapMarkerWidget.mapMarkerWidget_C.checkDistance
// (BlueprintCallable, BlueprintEvent)

void UmapMarkerWidget_C::checkDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function mapMarkerWidget.mapMarkerWidget_C.checkDistance");

	UmapMarkerWidget_C_checkDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mapMarkerWidget.mapMarkerWidget_C.ExecuteUbergraph_mapMarkerWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UmapMarkerWidget_C::ExecuteUbergraph_mapMarkerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function mapMarkerWidget.mapMarkerWidget_C.ExecuteUbergraph_mapMarkerWidget");

	UmapMarkerWidget_C_ExecuteUbergraph_mapMarkerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
