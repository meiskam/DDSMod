#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function doorBase.doorBase_C.playDoorSound
struct AdoorBase_C_playDoorSound_Params
{
	class USoundCue*                                   Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function doorBase.doorBase_C.getDoorOptions
struct AdoorBase_C_getDoorOptions_Params
{
	TArray<struct FText>                               ActionNames;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<struct FString>                             Actions;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function doorBase.doorBase_C.UserConstructionScript
struct AdoorBase_C_UserConstructionScript_Params
{
};

// Function doorBase.doorBase_C.doorOpening__FinishedFunc
struct AdoorBase_C_doorOpening__FinishedFunc_Params
{
};

// Function doorBase.doorBase_C.doorOpening__UpdateFunc
struct AdoorBase_C_doorOpening__UpdateFunc_Params
{
};

// Function doorBase.doorBase_C.Timeline_0__FinishedFunc
struct AdoorBase_C_Timeline_0__FinishedFunc_Params
{
};

// Function doorBase.doorBase_C.Timeline_0__UpdateFunc
struct AdoorBase_C_Timeline_0__UpdateFunc_Params
{
};

// Function doorBase.doorBase_C.ReceiveBeginPlay
struct AdoorBase_C_ReceiveBeginPlay_Params
{
};

// Function doorBase.doorBase_C.openDoor
struct AdoorBase_C_openDoor_Params
{
};

// Function doorBase.doorBase_C.closeDoor
struct AdoorBase_C_closeDoor_Params
{
};

// Function doorBase.doorBase_C.toggleDoor
struct AdoorBase_C_toggleDoor_Params
{
};

// Function doorBase.doorBase_C.closeDoorAuto
struct AdoorBase_C_closeDoorAuto_Params
{
};

// Function doorBase.doorBase_C.BndEvt__doorOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct AdoorBase_C_BndEvt__doorOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function doorBase.doorBase_C.executeDoorOption
struct AdoorBase_C_executeDoorOption_Params
{
	struct FString                                     doorActionName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function doorBase.doorBase_C.doorBreachEnd
struct AdoorBase_C_doorBreachEnd_Params
{
};

// Function doorBase.doorBase_C.breachDoor
struct AdoorBase_C_breachDoor_Params
{
};

// Function doorBase.doorBase_C.eventDoorActivated
struct AdoorBase_C_eventDoorActivated_Params
{
};

// Function doorBase.doorBase_C.lockpickReset
struct AdoorBase_C_lockpickReset_Params
{
};

// Function doorBase.doorBase_C.ExecuteUbergraph_doorBase
struct AdoorBase_C_ExecuteUbergraph_doorBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
