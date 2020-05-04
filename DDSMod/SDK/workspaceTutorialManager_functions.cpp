
#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function workspaceTutorialManager.workspaceTutorialManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AworkspaceTutorialManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function workspaceTutorialManager.workspaceTutorialManager_C.UserConstructionScript");

	AworkspaceTutorialManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workspaceTutorialManager.workspaceTutorialManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AworkspaceTutorialManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function workspaceTutorialManager.workspaceTutorialManager_C.ReceiveBeginPlay");

	AworkspaceTutorialManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workspaceTutorialManager.workspaceTutorialManager_C.StartTutorial
// (BlueprintCallable, BlueprintEvent)

void AworkspaceTutorialManager_C::StartTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function workspaceTutorialManager.workspaceTutorialManager_C.StartTutorial");

	AworkspaceTutorialManager_C_StartTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workspaceTutorialManager.workspaceTutorialManager_C.NextStep
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           moveMarker                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MoveLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworkspaceTutorialManager_C::NextStep(bool moveMarker, const struct FVector& MoveLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function workspaceTutorialManager.workspaceTutorialManager_C.NextStep");

	AworkspaceTutorialManager_C_NextStep_Params params;
	params.moveMarker = moveMarker;
	params.MoveLocation = MoveLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workspaceTutorialManager.workspaceTutorialManager_C.AnihilateTutorial
// (BlueprintCallable, BlueprintEvent)

void AworkspaceTutorialManager_C::AnihilateTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function workspaceTutorialManager.workspaceTutorialManager_C.AnihilateTutorial");

	AworkspaceTutorialManager_C_AnihilateTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workspaceTutorialManager.workspaceTutorialManager_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AworkspaceTutorialManager_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function workspaceTutorialManager.workspaceTutorialManager_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AworkspaceTutorialManager_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function workspaceTutorialManager.workspaceTutorialManager_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworkspaceTutorialManager_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function workspaceTutorialManager.workspaceTutorialManager_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AworkspaceTutorialManager_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workspaceTutorialManager.workspaceTutorialManager_C.ExecuteUbergraph_workspaceTutorialManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworkspaceTutorialManager_C::ExecuteUbergraph_workspaceTutorialManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function workspaceTutorialManager.workspaceTutorialManager_C.ExecuteUbergraph_workspaceTutorialManager");

	AworkspaceTutorialManager_C_ExecuteUbergraph_workspaceTutorialManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
