
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

// Function plantStasWidget.plantStasWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UplantStasWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function plantStasWidget.plantStasWidget_C.Construct");

	UplantStasWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function plantStasWidget.plantStasWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UplantStasWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function plantStasWidget.plantStasWidget_C.Tick");

	UplantStasWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function plantStasWidget.plantStasWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AweedPlantBP_C*          PlantRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UplantStasWidget_C::setup(class AweedPlantBP_C* PlantRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function plantStasWidget.plantStasWidget_C.setup");

	UplantStasWidget_C_setup_Params params;
	params.PlantRef = PlantRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function plantStasWidget.plantStasWidget_C.updateMe
// (BlueprintCallable, BlueprintEvent)

void UplantStasWidget_C::updateMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function plantStasWidget.plantStasWidget_C.updateMe");

	UplantStasWidget_C_updateMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function plantStasWidget.plantStasWidget_C.ExecuteUbergraph_plantStasWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UplantStasWidget_C::ExecuteUbergraph_plantStasWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function plantStasWidget.plantStasWidget_C.ExecuteUbergraph_plantStasWidget");

	UplantStasWidget_C_ExecuteUbergraph_plantStasWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
