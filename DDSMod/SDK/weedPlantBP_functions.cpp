
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

// Function weedPlantBP.weedPlantBP_C.generateDrugIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Quan                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EdrugForm>         Form                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              IconOut                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AweedPlantBP_C::generateDrugIcon(int Quan, TEnumAsByte<EdrugForm> Form, class UTexture2D** IconOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function weedPlantBP.weedPlantBP_C.generateDrugIcon");

	AweedPlantBP_C_generateDrugIcon_Params params;
	params.Quan = Quan;
	params.Form = Form;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconOut != nullptr)
		*IconOut = params.IconOut;
}


// Function weedPlantBP.weedPlantBP_C.calculateHarvest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AweedPlantBP_C::calculateHarvest()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedPlantBP.weedPlantBP_C.calculateHarvest");

	AweedPlantBP_C_calculateHarvest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedPlantBP.weedPlantBP_C.getPlantOptions
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           Names                          (Parm, OutParm, ZeroConstructor)
// TArray<struct FString>         functions                      (Parm, OutParm, ZeroConstructor)

void AweedPlantBP_C::getPlantOptions(TArray<struct FText>* Names, TArray<struct FString>* functions)
{
	static auto fn = UObject::FindObject<UFunction>("Function weedPlantBP.weedPlantBP_C.getPlantOptions");

	AweedPlantBP_C_getPlantOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Names != nullptr)
		*Names = params.Names;
	if (functions != nullptr)
		*functions = params.functions;
}


// Function weedPlantBP.weedPlantBP_C.useWater
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          waterToUse                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AweedPlantBP_C::useWater(float waterToUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function weedPlantBP.weedPlantBP_C.useWater");

	AweedPlantBP_C_useWater_Params params;
	params.waterToUse = waterToUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedPlantBP.weedPlantBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AweedPlantBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedPlantBP.weedPlantBP_C.UserConstructionScript");

	AweedPlantBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedPlantBP.weedPlantBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AweedPlantBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedPlantBP.weedPlantBP_C.ReceiveBeginPlay");

	AweedPlantBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedPlantBP.weedPlantBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AweedPlantBP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function weedPlantBP.weedPlantBP_C.ReceiveTick");

	AweedPlantBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedPlantBP.weedPlantBP_C.updateGrowth
// (BlueprintCallable, BlueprintEvent)

void AweedPlantBP_C::updateGrowth()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedPlantBP.weedPlantBP_C.updateGrowth");

	AweedPlantBP_C_updateGrowth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedPlantBP.weedPlantBP_C.harvestPlant
// (BlueprintCallable, BlueprintEvent)

void AweedPlantBP_C::harvestPlant()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedPlantBP.weedPlantBP_C.harvestPlant");

	AweedPlantBP_C_harvestPlant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedPlantBP.weedPlantBP_C.activateMe
// (BlueprintCallable, BlueprintEvent)

void AweedPlantBP_C::activateMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedPlantBP.weedPlantBP_C.activateMe");

	AweedPlantBP_C_activateMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedPlantBP.weedPlantBP_C.hydratePlant
// (BlueprintCallable, BlueprintEvent)

void AweedPlantBP_C::hydratePlant()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedPlantBP.weedPlantBP_C.hydratePlant");

	AweedPlantBP_C_hydratePlant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedPlantBP.weedPlantBP_C.fertilisePlant
// (BlueprintCallable, BlueprintEvent)

void AweedPlantBP_C::fertilisePlant()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedPlantBP.weedPlantBP_C.fertilisePlant");

	AweedPlantBP_C_fertilisePlant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedPlantBP.weedPlantBP_C.removePlant
// (BlueprintCallable, BlueprintEvent)

void AweedPlantBP_C::removePlant()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedPlantBP.weedPlantBP_C.removePlant");

	AweedPlantBP_C_removePlant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedPlantBP.weedPlantBP_C.showDetails
// (BlueprintCallable, BlueprintEvent)

void AweedPlantBP_C::showDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedPlantBP.weedPlantBP_C.showDetails");

	AweedPlantBP_C_showDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedPlantBP.weedPlantBP_C.hideDetails
// (BlueprintCallable, BlueprintEvent)

void AweedPlantBP_C::hideDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedPlantBP.weedPlantBP_C.hideDetails");

	AweedPlantBP_C_hideDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedPlantBP.weedPlantBP_C.PlantDied
// (BlueprintCallable, BlueprintEvent)

void AweedPlantBP_C::PlantDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedPlantBP.weedPlantBP_C.PlantDied");

	AweedPlantBP_C_PlantDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedPlantBP.weedPlantBP_C.forceLastUpdate
// (BlueprintCallable, BlueprintEvent)

void AweedPlantBP_C::forceLastUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function weedPlantBP.weedPlantBP_C.forceLastUpdate");

	AweedPlantBP_C_forceLastUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weedPlantBP.weedPlantBP_C.ExecuteUbergraph_weedPlantBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AweedPlantBP_C::ExecuteUbergraph_weedPlantBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function weedPlantBP.weedPlantBP_C.ExecuteUbergraph_weedPlantBP");

	AweedPlantBP_C_ExecuteUbergraph_weedPlantBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
