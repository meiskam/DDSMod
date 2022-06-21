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
	 * Function worldMapUI_Marker.worldMapUI_Marker_C.checkAreaUnlocked
	 */
	struct UworldMapUI_Marker_C_checkAreaUnlocked_Params
	{
	public:
		bool                                                       Unlocked;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function worldMapUI_Marker.worldMapUI_Marker_C.OnMouseButtonDoubleClick
	 */
	struct UworldMapUI_Marker_C_OnMouseButtonDoubleClick_Params
	{
	public:
		struct FGeometry                                           InMyGeometry;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function worldMapUI_Marker.worldMapUI_Marker_C.Get_mainCanvas_ToolTipWidget_1
	 */
	struct UworldMapUI_Marker_C_Get_mainCanvas_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function worldMapUI_Marker.worldMapUI_Marker_C.Get_mainCanvas_bIsEnabled_1
	 */
	struct UworldMapUI_Marker_C_Get_mainCanvas_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function worldMapUI_Marker.worldMapUI_Marker_C.OnMouseEnter
	 */
	struct UworldMapUI_Marker_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function worldMapUI_Marker.worldMapUI_Marker_C.OnMouseLeave
	 */
	struct UworldMapUI_Marker_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function worldMapUI_Marker.worldMapUI_Marker_C.Setup
	 */
	struct UworldMapUI_Marker_C_Setup_Params
	{
	public:
		class FText                                                MarkerName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EmapMarkerCategories                                       MarkerType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           basePos;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ToolTip;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       dealer;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              AreaString;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function worldMapUI_Marker.worldMapUI_Marker_C.ExecuteUbergraph_worldMapUI_Marker
	 */
	struct UworldMapUI_Marker_C_ExecuteUbergraph_worldMapUI_Marker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
