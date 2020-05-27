
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

// Function reputationChartWidget.reputationChartWidget_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AmainComputer_C*         mainComputerRef                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AsalesManager_C*         salesManagerRef                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AstatisticsManager_C*    statManagerRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UreputationChartWidget_C::Update(class AmainComputer_C* mainComputerRef, class AsalesManager_C* salesManagerRef, class AstatisticsManager_C* statManagerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function reputationChartWidget.reputationChartWidget_C.Update");

	UreputationChartWidget_C_Update_Params params;
	params.mainComputerRef = mainComputerRef;
	params.salesManagerRef = salesManagerRef;
	params.statManagerRef = statManagerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function reputationChartWidget.reputationChartWidget_C.ExecuteUbergraph_reputationChartWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UreputationChartWidget_C::ExecuteUbergraph_reputationChartWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function reputationChartWidget.reputationChartWidget_C.ExecuteUbergraph_reputationChartWidget");

	UreputationChartWidget_C_ExecuteUbergraph_reputationChartWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
