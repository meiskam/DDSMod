
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

// Function policeManager.policeManager_C.adaptDifficulty
// (Public, BlueprintCallable, BlueprintEvent)

void ApoliceManager_C::adaptDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.adaptDifficulty");

	ApoliceManager_C_adaptDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeManager.policeManager_C.calcDrugQuanPenalty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Fine                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ApoliceManager_C::calcDrugQuanPenalty(int* Fine)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.calcDrugQuanPenalty");

	ApoliceManager_C_calcDrugQuanPenalty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Fine != nullptr)
		*Fine = params.Fine;
}


// Function policeManager.policeManager_C.calcDrugGramsPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ApoliceManager_C::calcDrugGramsPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.calcDrugGramsPlayer");

	ApoliceManager_C_calcDrugGramsPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeManager.policeManager_C.applyPenalties
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ApoliceManager_C::applyPenalties()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.applyPenalties");

	ApoliceManager_C_applyPenalties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeManager.policeManager_C.queuePenalty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Reson                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AddDrugAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApoliceManager_C::queuePenalty(const struct FText& Reson, int Amount, bool AddDrugAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.queuePenalty");

	ApoliceManager_C_queuePenalty_Params params;
	params.Reson = Reson;
	params.Amount = Amount;
	params.AddDrugAmount = AddDrugAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeManager.policeManager_C.refreshPolicemenStatus
// (Public, BlueprintCallable, BlueprintEvent)

void ApoliceManager_C::refreshPolicemenStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.refreshPolicemenStatus");

	ApoliceManager_C_refreshPolicemenStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeManager.policeManager_C.resetAllAreas
// (Public, BlueprintCallable, BlueprintEvent)

void ApoliceManager_C::resetAllAreas()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.resetAllAreas");

	ApoliceManager_C_resetAllAreas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeManager.policeManager_C.getMinPatrols
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            minPatrols                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ApoliceManager_C::getMinPatrols(int* minPatrols)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.getMinPatrols");

	ApoliceManager_C_getMinPatrols_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (minPatrols != nullptr)
		*minPatrols = params.minPatrols;
}


// Function policeManager.policeManager_C.checkWorldStatus
// (Public, BlueprintCallable, BlueprintEvent)

void ApoliceManager_C::checkWorldStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.checkWorldStatus");

	ApoliceManager_C_checkWorldStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeManager.policeManager_C.recallOnePatrol
// (Public, BlueprintCallable, BlueprintEvent)

void ApoliceManager_C::recallOnePatrol()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.recallOnePatrol");

	ApoliceManager_C_recallOnePatrol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeManager.policeManager_C.spawnNewPatrol
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Dog                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnAtSecondary               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApoliceManager_C::spawnNewPatrol(bool Dog, bool SpawnAtSecondary)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.spawnNewPatrol");

	ApoliceManager_C_spawnNewPatrol_Params params;
	params.Dog = Dog;
	params.SpawnAtSecondary = SpawnAtSecondary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeManager.policeManager_C.assignPatrolArea
// (Public, BlueprintCallable, BlueprintEvent)

void ApoliceManager_C::assignPatrolArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.assignPatrolArea");

	ApoliceManager_C_assignPatrolArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeManager.policeManager_C.refreshAreaStatus
// (Public, BlueprintCallable, BlueprintEvent)

void ApoliceManager_C::refreshAreaStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.refreshAreaStatus");

	ApoliceManager_C_refreshAreaStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeManager.policeManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApoliceManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.UserConstructionScript");

	ApoliceManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeManager.policeManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ApoliceManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.ReceiveBeginPlay");

	ApoliceManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeManager.policeManager_C.requestPatrolArea
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APolicemanBaseClass_C*   Querier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApoliceManager_C::requestPatrolArea(class APolicemanBaseClass_C* Querier)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.requestPatrolArea");

	ApoliceManager_C_requestPatrolArea_Params params;
	params.Querier = Querier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeManager.policeManager_C.checkRequestQuery
// (BlueprintCallable, BlueprintEvent)

void ApoliceManager_C::checkRequestQuery()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.checkRequestQuery");

	ApoliceManager_C_checkRequestQuery_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeManager.policeManager_C.playRadioComs
// (BlueprintCallable, BlueprintEvent)

void ApoliceManager_C::playRadioComs()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.playRadioComs");

	ApoliceManager_C_playRadioComs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeManager.policeManager_C.trySpawnPatrol
// (BlueprintCallable, BlueprintEvent)

void ApoliceManager_C::trySpawnPatrol()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.trySpawnPatrol");

	ApoliceManager_C_trySpawnPatrol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeManager.policeManager_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ApoliceManager_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ApoliceManager_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeManager.policeManager_C.tryDisplayPenalty
// (BlueprintCallable, BlueprintEvent)

void ApoliceManager_C::tryDisplayPenalty()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.tryDisplayPenalty");

	ApoliceManager_C_tryDisplayPenalty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeManager.policeManager_C.ExecuteUbergraph_policeManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApoliceManager_C::ExecuteUbergraph_policeManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeManager.policeManager_C.ExecuteUbergraph_policeManager");

	ApoliceManager_C_ExecuteUbergraph_policeManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
