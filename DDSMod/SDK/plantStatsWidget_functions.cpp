
#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function plantStatsWidget.plantStatsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UplantStatsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function plantStatsWidget.plantStatsWidget_C.Construct");

	UplantStatsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function plantStatsWidget.plantStatsWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UplantStatsWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function plantStatsWidget.plantStatsWidget_C.Tick");

	UplantStatsWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function plantStatsWidget.plantStatsWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AweedPlantBP_C*          PlantRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UplantStatsWidget_C::setup(class AweedPlantBP_C* PlantRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function plantStatsWidget.plantStatsWidget_C.setup");

	UplantStatsWidget_C_setup_Params params;
	params.PlantRef = PlantRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function plantStatsWidget.plantStatsWidget_C.updateMe
// (BlueprintCallable, BlueprintEvent)

void UplantStatsWidget_C::updateMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function plantStatsWidget.plantStatsWidget_C.updateMe");

	UplantStatsWidget_C_updateMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function plantStatsWidget.plantStatsWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UplantStatsWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function plantStatsWidget.plantStatsWidget_C.Destruct");

	UplantStatsWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function plantStatsWidget.plantStatsWidget_C.ExecuteUbergraph_plantStatsWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UplantStatsWidget_C::ExecuteUbergraph_plantStatsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function plantStatsWidget.plantStatsWidget_C.ExecuteUbergraph_plantStatsWidget");

	UplantStatsWidget_C_ExecuteUbergraph_plantStatsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
