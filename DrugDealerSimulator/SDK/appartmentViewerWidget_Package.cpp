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
	 * 		Name   -> Function appartmentViewerWidget.appartmentViewerWidget_C.refreshAccBalance
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UappartmentViewerWidget_C::refreshAccBalance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerWidget.appartmentViewerWidget_C.refreshAccBalance");
		
		UappartmentViewerWidget_C_refreshAccBalance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerWidget.appartmentViewerWidget_C.setStatistics
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ArentAppartmentArea_C*                       areaRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        AreaNam                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UappartmentViewerWidget_C::setStatistics(class ArentAppartmentArea_C* areaRef, const class FText& AreaNam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerWidget.appartmentViewerWidget_C.setStatistics");
		
		UappartmentViewerWidget_C_setStatistics_Params params {};
		params.areaRef = areaRef;
		params.AreaNam = AreaNam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerWidget.appartmentViewerWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UappartmentViewerWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerWidget.appartmentViewerWidget_C.Construct");
		
		UappartmentViewerWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerWidget.appartmentViewerWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Owned                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Forever                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               terminated                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               savePoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Raided                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        AppartmentName                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        AppartmentDesc                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Address                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              Meterage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Price                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Floors                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            daysTillPayment                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Boost                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ArentAppartmentArea_C*                       ApartmentRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UappartmentViewerWidget_C::Setup(bool Owned, bool Forever, bool terminated, bool savePoint, bool Raided, const class FText& AppartmentName, const class FText& AppartmentDesc, const class FText& Address, float Meterage, float Price, int32_t Floors, int32_t daysTillPayment, float Boost, class ArentAppartmentArea_C* ApartmentRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerWidget.appartmentViewerWidget_C.Setup");
		
		UappartmentViewerWidget_C_Setup_Params params {};
		params.Owned = Owned;
		params.Forever = Forever;
		params.terminated = terminated;
		params.savePoint = savePoint;
		params.Raided = Raided;
		params.AppartmentName = AppartmentName;
		params.AppartmentDesc = AppartmentDesc;
		params.Address = Address;
		params.Meterage = Meterage;
		params.Price = Price;
		params.Floors = Floors;
		params.daysTillPayment = daysTillPayment;
		params.Boost = Boost;
		params.ApartmentRef = ApartmentRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerWidget.appartmentViewerWidget_C.openConfirmDialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ArentAppartmentArea_C*                       Appartment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               StartRenting                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UappartmentViewerWidget_C::openConfirmDialogue(class ArentAppartmentArea_C* Appartment, bool StartRenting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerWidget.appartmentViewerWidget_C.openConfirmDialogue");
		
		UappartmentViewerWidget_C_openConfirmDialogue_Params params {};
		params.Appartment = Appartment;
		params.StartRenting = StartRenting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerWidget.appartmentViewerWidget_C.closeConfirmPanel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UappartmentViewerWidget_C::closeConfirmPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerWidget.appartmentViewerWidget_C.closeConfirmPanel");
		
		UappartmentViewerWidget_C_closeConfirmPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerWidget.appartmentViewerWidget_C.rentConfirmed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DaysLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Price                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UappartmentViewerWidget_C::rentConfirmed(int32_t DaysLeft, float Price)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerWidget.appartmentViewerWidget_C.rentConfirmed");
		
		UappartmentViewerWidget_C_rentConfirmed_Params params {};
		params.DaysLeft = DaysLeft;
		params.Price = Price;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerWidget.appartmentViewerWidget_C.rentWentBad
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UappartmentViewerWidget_C::rentWentBad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerWidget.appartmentViewerWidget_C.rentWentBad");
		
		UappartmentViewerWidget_C_rentWentBad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerWidget.appartmentViewerWidget_C.rentTerminated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DaysLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UappartmentViewerWidget_C::rentTerminated(int32_t DaysLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerWidget.appartmentViewerWidget_C.rentTerminated");
		
		UappartmentViewerWidget_C_rentTerminated_Params params {};
		params.DaysLeft = DaysLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function appartmentViewerWidget.appartmentViewerWidget_C.ExecuteUbergraph_appartmentViewerWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UappartmentViewerWidget_C::ExecuteUbergraph_appartmentViewerWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function appartmentViewerWidget.appartmentViewerWidget_C.ExecuteUbergraph_appartmentViewerWidget");
		
		UappartmentViewerWidget_C_ExecuteUbergraph_appartmentViewerWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UappartmentViewerWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UappartmentViewerWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass appartmentViewerWidget.appartmentViewerWidget_C");
		return ptr;
	}

}


