
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

// Function eddieWalkPoint.eddieWalkPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AeddieWalkPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieWalkPoint.eddieWalkPoint_C.UserConstructionScript");

	AeddieWalkPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieWalkPoint.eddieWalkPoint_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AeddieWalkPoint_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieWalkPoint.eddieWalkPoint_C.ReceiveActorBeginOverlap");

	AeddieWalkPoint_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieWalkPoint.eddieWalkPoint_C.ExecuteUbergraph_eddieWalkPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AeddieWalkPoint_C::ExecuteUbergraph_eddieWalkPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieWalkPoint.eddieWalkPoint_C.ExecuteUbergraph_eddieWalkPoint");

	AeddieWalkPoint_C_ExecuteUbergraph_eddieWalkPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
