
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

// Function BTTask_Bird_Set_FlyAway_ToTrue.BTTask_Bird_Set_FlyAway_ToTrue_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Bird_Set_FlyAway_ToTrue_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Bird_Set_FlyAway_ToTrue.BTTask_Bird_Set_FlyAway_ToTrue_C.ReceiveExecuteAI");

	UBTTask_Bird_Set_FlyAway_ToTrue_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_Bird_Set_FlyAway_ToTrue.BTTask_Bird_Set_FlyAway_ToTrue_C.ExecuteUbergraph_BTTask_Bird_Set_FlyAway_ToTrue
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_Bird_Set_FlyAway_ToTrue_C::ExecuteUbergraph_BTTask_Bird_Set_FlyAway_ToTrue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_Bird_Set_FlyAway_ToTrue.BTTask_Bird_Set_FlyAway_ToTrue_C.ExecuteUbergraph_BTTask_Bird_Set_FlyAway_ToTrue");

	UBTTask_Bird_Set_FlyAway_ToTrue_C_ExecuteUbergraph_BTTask_Bird_Set_FlyAway_ToTrue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
