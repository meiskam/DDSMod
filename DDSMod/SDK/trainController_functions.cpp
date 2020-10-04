
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

// Function trainController.trainController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AtrainController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function trainController.trainController_C.UserConstructionScript");

	AtrainController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function trainController.trainController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AtrainController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function trainController.trainController_C.ReceiveBeginPlay");

	AtrainController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function trainController.trainController_C.Activate
// (BlueprintCallable, BlueprintEvent)

void AtrainController_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function trainController.trainController_C.Activate");

	AtrainController_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function trainController.trainController_C.SpawnTrain
// (BlueprintCallable, BlueprintEvent)

void AtrainController_C::SpawnTrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function trainController.trainController_C.SpawnTrain");

	AtrainController_C_SpawnTrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function trainController.trainController_C.playTrainHorn
// (BlueprintCallable, BlueprintEvent)

void AtrainController_C::playTrainHorn()
{
	static auto fn = UObject::FindObject<UFunction>("Function trainController.trainController_C.playTrainHorn");

	AtrainController_C_playTrainHorn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function trainController.trainController_C.ExecuteUbergraph_trainController
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtrainController_C::ExecuteUbergraph_trainController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function trainController.trainController_C.ExecuteUbergraph_trainController");

	AtrainController_C_ExecuteUbergraph_trainController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
