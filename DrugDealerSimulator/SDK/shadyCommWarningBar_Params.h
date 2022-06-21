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
	 * Function shadyCommWarningBar.shadyCommWarningBar_C.Get_mainCanvas_ToolTipWidget_1
	 */
	struct UshadyCommWarningBar_C_Get_mainCanvas_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommWarningBar.shadyCommWarningBar_C.Construct
	 */
	struct UshadyCommWarningBar_C_Construct_Params
	{	};

	/**
	 * Function shadyCommWarningBar.shadyCommWarningBar_C.Setup
	 */
	struct UshadyCommWarningBar_C_Setup_Params
	{
	public:
		class FText                                                Content;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ToolTip;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function shadyCommWarningBar.shadyCommWarningBar_C.playPing
	 */
	struct UshadyCommWarningBar_C_playPing_Params
	{	};

	/**
	 * Function shadyCommWarningBar.shadyCommWarningBar_C.OnMouseEnter
	 */
	struct UshadyCommWarningBar_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function shadyCommWarningBar.shadyCommWarningBar_C.OnMouseLeave
	 */
	struct UshadyCommWarningBar_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function shadyCommWarningBar.shadyCommWarningBar_C.ExecuteUbergraph_shadyCommWarningBar
	 */
	struct UshadyCommWarningBar_C_ExecuteUbergraph_shadyCommWarningBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
