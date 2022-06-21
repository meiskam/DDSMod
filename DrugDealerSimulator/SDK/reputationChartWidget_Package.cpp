/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function reputationChartWidget.reputationChartWidget_C.Update
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AmainComputer_C*                             mainComputerRef                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AsalesManager_C*                             salesManagerRef                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AstatisticsManager_C*                        statManagerRef                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UreputationChartWidget_C::Update(class AmainComputer_C* mainComputerRef, class AsalesManager_C* salesManagerRef, class AstatisticsManager_C* statManagerRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function reputationChartWidget.reputationChartWidget_C.Update");
		
		UreputationChartWidget_C_Update_Params params {};
		params.mainComputerRef = mainComputerRef;
		params.salesManagerRef = salesManagerRef;
		params.statManagerRef = statManagerRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function reputationChartWidget.reputationChartWidget_C.ExecuteUbergraph_reputationChartWidget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UreputationChartWidget_C::ExecuteUbergraph_reputationChartWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function reputationChartWidget.reputationChartWidget_C.ExecuteUbergraph_reputationChartWidget");
		
		UreputationChartWidget_C_ExecuteUbergraph_reputationChartWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UreputationChartWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UreputationChartWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass reputationChartWidget.reputationChartWidget_C");
		return ptr;
	}

}


