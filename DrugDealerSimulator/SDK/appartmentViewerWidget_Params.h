#pragma once

/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function appartmentViewerWidget.appartmentViewerWidget_C.refreshAccBalance
	 */
	struct UappartmentViewerWidget_C_refreshAccBalance_Params
	{	};

	/**
	 * Function appartmentViewerWidget.appartmentViewerWidget_C.setStatistics
	 */
	struct UappartmentViewerWidget_C_setStatistics_Params
	{
	public:
		class ArentAppartmentArea_C*                               areaRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                AreaNam;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function appartmentViewerWidget.appartmentViewerWidget_C.Construct
	 */
	struct UappartmentViewerWidget_C_Construct_Params
	{	};

	/**
	 * Function appartmentViewerWidget.appartmentViewerWidget_C.Setup
	 */
	struct UappartmentViewerWidget_C_Setup_Params
	{
	public:
		bool                                                       Owned;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Forever;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       terminated;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       savePoint;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Raided;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                AppartmentName;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                AppartmentDesc;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Address;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      Meterage;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Price;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Floors;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    daysTillPayment;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Boost;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ArentAppartmentArea_C*                               ApartmentRef;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function appartmentViewerWidget.appartmentViewerWidget_C.openConfirmDialogue
	 */
	struct UappartmentViewerWidget_C_openConfirmDialogue_Params
	{
	public:
		class ArentAppartmentArea_C*                               Appartment;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       StartRenting;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function appartmentViewerWidget.appartmentViewerWidget_C.closeConfirmPanel
	 */
	struct UappartmentViewerWidget_C_closeConfirmPanel_Params
	{	};

	/**
	 * Function appartmentViewerWidget.appartmentViewerWidget_C.rentConfirmed
	 */
	struct UappartmentViewerWidget_C_rentConfirmed_Params
	{
	public:
		int32_t                                                    DaysLeft;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Price;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function appartmentViewerWidget.appartmentViewerWidget_C.rentWentBad
	 */
	struct UappartmentViewerWidget_C_rentWentBad_Params
	{	};

	/**
	 * Function appartmentViewerWidget.appartmentViewerWidget_C.rentTerminated
	 */
	struct UappartmentViewerWidget_C_rentTerminated_Params
	{
	public:
		int32_t                                                    DaysLeft;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function appartmentViewerWidget.appartmentViewerWidget_C.ExecuteUbergraph_appartmentViewerWidget
	 */
	struct UappartmentViewerWidget_C_ExecuteUbergraph_appartmentViewerWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
