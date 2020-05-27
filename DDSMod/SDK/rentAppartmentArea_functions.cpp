
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

// Function rentAppartmentArea.rentAppartmentArea_C.checkWeedStatus
// (Public, BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::checkWeedStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.checkWeedStatus");

	ArentAppartmentArea_C_checkWeedStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.mapMarkerCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::mapMarkerCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.mapMarkerCheck");

	ArentAppartmentArea_C_mapMarkerCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.markerOpc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           showing                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ArentAppartmentArea_C::markerOpc(bool showing)
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.markerOpc");

	ArentAppartmentArea_C_markerOpc_Params params;
	params.showing = showing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.updateHideoutSetup
// (Public, BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::updateHideoutSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.updateHideoutSetup");

	ArentAppartmentArea_C_updateHideoutSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.updateAreaNam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::updateAreaNam()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.updateAreaNam");

	ArentAppartmentArea_C_updateAreaNam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.observationCountdown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ArentAppartmentArea_C::observationCountdown(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.observationCountdown");

	ArentAppartmentArea_C_observationCountdown_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.vanCanSpawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AdeaRaidManager_C*       raidManager                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AdeaRaidCarSpawnPoint_C* suvSpawnPoint                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CanSpawn                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ArentAppartmentArea_C::vanCanSpawn(class AdeaRaidManager_C* raidManager, class AdeaRaidCarSpawnPoint_C** suvSpawnPoint, bool* CanSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.vanCanSpawn");

	ArentAppartmentArea_C_vanCanSpawn_Params params;
	params.raidManager = raidManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (suvSpawnPoint != nullptr)
		*suvSpawnPoint = params.suvSpawnPoint;
	if (CanSpawn != nullptr)
		*CanSpawn = params.CanSpawn;
}


// Function rentAppartmentArea.rentAppartmentArea_C.suvCanSpawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AdeaRaidManager_C*       raidManager                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AdeaRaidCarSpawnPoint_C* suvSpawnPoint                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CanSpawn                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ArentAppartmentArea_C::suvCanSpawn(class AdeaRaidManager_C* raidManager, class AdeaRaidCarSpawnPoint_C** suvSpawnPoint, bool* CanSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.suvCanSpawn");

	ArentAppartmentArea_C_suvCanSpawn_Params params;
	params.raidManager = raidManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (suvSpawnPoint != nullptr)
		*suvSpawnPoint = params.suvSpawnPoint;
	if (CanSpawn != nullptr)
		*CanSpawn = params.CanSpawn;
}


// Function rentAppartmentArea.rentAppartmentArea_C.spawnFlashBang
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::spawnFlashBang()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.spawnFlashBang");

	ArentAppartmentArea_C_spawnFlashBang_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.addInventoryItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FappartmentEquipment    eqData                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ArentAppartmentArea_C::addInventoryItem(const struct FappartmentEquipment& eqData, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.addInventoryItem");

	ArentAppartmentArea_C_addInventoryItem_Params params;
	params.eqData = eqData;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.removeInventoryItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ArentAppartmentArea_C::removeInventoryItem(int Index, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.removeInventoryItem");

	ArentAppartmentArea_C_removeInventoryItem_Params params;
	params.Index = Index;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.checkPlayerOverlaping
// (Public, BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::checkPlayerOverlaping()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.checkPlayerOverlaping");

	ArentAppartmentArea_C_checkPlayerOverlaping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.UserConstructionScript");

	ArentAppartmentArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ArentAppartmentArea_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.ReceiveBeginPlay");

	ArentAppartmentArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ArentAppartmentArea_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.ReceiveActorBeginOverlap");

	ArentAppartmentArea_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ArentAppartmentArea_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.ReceiveTick");

	ArentAppartmentArea_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ArentAppartmentArea_C::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.ReceiveActorEndOverlap");

	ArentAppartmentArea_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.purgeAppartment
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::purgeAppartment()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.purgeAppartment");

	ArentAppartmentArea_C_purgeAppartment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.unlockAppartment
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::unlockAppartment()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.unlockAppartment");

	ArentAppartmentArea_C_unlockAppartment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.areaRaidStarted
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::areaRaidStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.areaRaidStarted");

	ArentAppartmentArea_C_areaRaidStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.areaRaidEnded
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::areaRaidEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.areaRaidEnded");

	ArentAppartmentArea_C_areaRaidEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.deaMoveIn
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::deaMoveIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.deaMoveIn");

	ArentAppartmentArea_C_deaMoveIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.nextFlashBang
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::nextFlashBang()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.nextFlashBang");

	ArentAppartmentArea_C_nextFlashBang_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.startAreaDEA_Obeservation
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::startAreaDEA_Obeservation()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.startAreaDEA_Obeservation");

	ArentAppartmentArea_C_startAreaDEA_Obeservation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.endAreaDEA_Observation
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::endAreaDEA_Observation()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.endAreaDEA_Observation");

	ArentAppartmentArea_C_endAreaDEA_Observation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.deaObservationUpdate
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::deaObservationUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.deaObservationUpdate");

	ArentAppartmentArea_C_deaObservationUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.resetDeaRaid
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::resetDeaRaid()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.resetDeaRaid");

	ArentAppartmentArea_C_resetDeaRaid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.showEscapeRouts
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::showEscapeRouts()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.showEscapeRouts");

	ArentAppartmentArea_C_showEscapeRouts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.tryCleanupRaid
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::tryCleanupRaid()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.tryCleanupRaid");

	ArentAppartmentArea_C_tryCleanupRaid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.PlayerBustedByDEA
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::PlayerBustedByDEA()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.PlayerBustedByDEA");

	ArentAppartmentArea_C_PlayerBustedByDEA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.tryRestoreWallPicker
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::tryRestoreWallPicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.tryRestoreWallPicker");

	ArentAppartmentArea_C_tryRestoreWallPicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.resetApartment
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::resetApartment()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.resetApartment");

	ArentAppartmentArea_C_resetApartment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.tryResetMe
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::tryResetMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.tryResetMe");

	ArentAppartmentArea_C_tryResetMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.updateMarker
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::updateMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.updateMarker");

	ArentAppartmentArea_C_updateMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.weedPotentialFail
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::weedPotentialFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.weedPotentialFail");

	ArentAppartmentArea_C_weedPotentialFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.resetFailStatusRefresh
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::resetFailStatusRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.resetFailStatusRefresh");

	ArentAppartmentArea_C_resetFailStatusRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.resetFilterWarning
// (BlueprintCallable, BlueprintEvent)

void ArentAppartmentArea_C::resetFilterWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.resetFilterWarning");

	ArentAppartmentArea_C_resetFilterWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function rentAppartmentArea.rentAppartmentArea_C.ExecuteUbergraph_rentAppartmentArea
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ArentAppartmentArea_C::ExecuteUbergraph_rentAppartmentArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function rentAppartmentArea.rentAppartmentArea_C.ExecuteUbergraph_rentAppartmentArea");

	ArentAppartmentArea_C_ExecuteUbergraph_rentAppartmentArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
