
#include "SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.updateSkyWeatherConditions
// (Public, BlueprintCallable, BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::updateSkyWeatherConditions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.updateSkyWeatherConditions");

	AUltra_Dynamic_Sky_BP_C_updateSkyWeatherConditions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables
// (Public, BlueprintCallable, BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::Set_Material_Variables()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables");

	AUltra_Dynamic_Sky_BP_C_Set_Material_Variables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Solar Angle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::Set_Solar_Angle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Solar Angle");

	AUltra_Dynamic_Sky_BP_C_Set_Solar_Angle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UserConstructionScript");

	AUltra_Dynamic_Sky_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay");

	AUltra_Dynamic_Sky_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.updateSkyLight
// (BlueprintCallable, BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::updateSkyLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.updateSkyLight");

	AUltra_Dynamic_Sky_BP_C_updateSkyLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveTick");

	AUltra_Dynamic_Sky_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.randomCloundCap
// (BlueprintCallable, BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::randomCloundCap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.randomCloundCap");

	AUltra_Dynamic_Sky_BP_C_randomCloundCap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::ExecuteUbergraph_Ultra_Dynamic_Sky_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP");

	AUltra_Dynamic_Sky_BP_C_ExecuteUbergraph_Ultra_Dynamic_Sky_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
