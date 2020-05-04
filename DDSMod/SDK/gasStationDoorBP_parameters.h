#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function gasStationDoorBP.gasStationDoorBP_C.playDoorSound
struct AgasStationDoorBP_C_playDoorSound_Params
{
};

// Function gasStationDoorBP.gasStationDoorBP_C.UserConstructionScript
struct AgasStationDoorBP_C_UserConstructionScript_Params
{
};

// Function gasStationDoorBP.gasStationDoorBP_C.openPercent__FinishedFunc
struct AgasStationDoorBP_C_openPercent__FinishedFunc_Params
{
};

// Function gasStationDoorBP.gasStationDoorBP_C.openPercent__UpdateFunc
struct AgasStationDoorBP_C_openPercent__UpdateFunc_Params
{
};

// Function gasStationDoorBP.gasStationDoorBP_C.ReceiveBeginPlay
struct AgasStationDoorBP_C_ReceiveBeginPlay_Params
{
};

// Function gasStationDoorBP.gasStationDoorBP_C.ReceiveTick
struct AgasStationDoorBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function gasStationDoorBP.gasStationDoorBP_C.openDoor
struct AgasStationDoorBP_C_openDoor_Params
{
};

// Function gasStationDoorBP.gasStationDoorBP_C.closeDoor
struct AgasStationDoorBP_C_closeDoor_Params
{
};

// Function gasStationDoorBP.gasStationDoorBP_C.BndEvt__entryBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AgasStationDoorBP_C_BndEvt__entryBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function gasStationDoorBP.gasStationDoorBP_C.ExecuteUbergraph_gasStationDoorBP
struct AgasStationDoorBP_C_ExecuteUbergraph_gasStationDoorBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
