
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

// Function policePatrolArea.policePatrolArea_C.getUnreachedPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ApolicePatrolPoint_C*    Patrol_Point                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ApolicePatrolArea_C::getUnreachedPoint(class ApolicePatrolPoint_C** Patrol_Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.getUnreachedPoint");

	ApolicePatrolArea_C_getUnreachedPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Patrol_Point != nullptr)
		*Patrol_Point = params.Patrol_Point;
}


// Function policePatrolArea.policePatrolArea_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApolicePatrolArea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.UserConstructionScript");

	ApolicePatrolArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policePatrolArea.policePatrolArea_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ApolicePatrolArea_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.ReceiveBeginPlay");

	ApolicePatrolArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policePatrolArea.policePatrolArea_C.resetPatrolArea
// (BlueprintCallable, BlueprintEvent)

void ApolicePatrolArea_C::resetPatrolArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.resetPatrolArea");

	ApolicePatrolArea_C_resetPatrolArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policePatrolArea.policePatrolArea_C.restartArea
// (BlueprintCallable, BlueprintEvent)

void ApolicePatrolArea_C::restartArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.restartArea");

	ApolicePatrolArea_C_restartArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policePatrolArea.policePatrolArea_C.ExecuteUbergraph_policePatrolArea
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApolicePatrolArea_C::ExecuteUbergraph_policePatrolArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolArea.policePatrolArea_C.ExecuteUbergraph_policePatrolArea");

	ApolicePatrolArea_C_ExecuteUbergraph_policePatrolArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
