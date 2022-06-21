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
	 * Function worldMapWidget.worldMapWidget_C.Get_playerPosition_Visibility_1
	 */
	struct UworldMapWidget_C_Get_playerPosition_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function worldMapWidget.worldMapWidget_C.OnMouseButtonDoubleClick
	 */
	struct UworldMapWidget_C_OnMouseButtonDoubleClick_Params
	{
	public:
		struct FGeometry                                           InMyGeometry;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function worldMapWidget.worldMapWidget_C.adjustMarkersToMap
	 */
	struct UworldMapWidget_C_adjustMarkersToMap_Params
	{	};

	/**
	 * Function worldMapWidget.worldMapWidget_C.OnMouseButtonUp
	 */
	struct UworldMapWidget_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function worldMapWidget.worldMapWidget_C.OnMouseButtonDown
	 */
	struct UworldMapWidget_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function worldMapWidget.worldMapWidget_C.Construct
	 */
	struct UworldMapWidget_C_Construct_Params
	{	};

	/**
	 * Function worldMapWidget.worldMapWidget_C.Tick
	 */
	struct UworldMapWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function worldMapWidget.worldMapWidget_C.setPlayerMarker
	 */
	struct UworldMapWidget_C_setPlayerMarker_Params
	{	};

	/**
	 * Function worldMapWidget.worldMapWidget_C.renderMapMarkers
	 */
	struct UworldMapWidget_C_renderMapMarkers_Params
	{	};

	/**
	 * Function worldMapWidget.worldMapWidget_C.killMap
	 */
	struct UworldMapWidget_C_killMap_Params
	{	};

	/**
	 * Function worldMapWidget.worldMapWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UworldMapWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function worldMapWidget.worldMapWidget_C.AddSingleMarker
	 */
	struct UworldMapWidget_C_AddSingleMarker_Params
	{
	public:
		class AworldMapMarker_C*                                   MarkerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function worldMapWidget.worldMapWidget_C.mapZoomIn
	 */
	struct UworldMapWidget_C_mapZoomIn_Params
	{	};

	/**
	 * Function worldMapWidget.worldMapWidget_C.mapZoomOut
	 */
	struct UworldMapWidget_C_mapZoomOut_Params
	{	};

	/**
	 * Function worldMapWidget.worldMapWidget_C.Destruct
	 */
	struct UworldMapWidget_C_Destruct_Params
	{	};

	/**
	 * Function worldMapWidget.worldMapWidget_C.UpdateMapZoom
	 */
	struct UworldMapWidget_C_UpdateMapZoom_Params
	{	};

	/**
	 * Function worldMapWidget.worldMapWidget_C.ExecuteUbergraph_worldMapWidget
	 */
	struct UworldMapWidget_C_ExecuteUbergraph_worldMapWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
