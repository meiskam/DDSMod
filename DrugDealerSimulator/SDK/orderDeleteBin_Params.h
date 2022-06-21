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
	 * Function orderDeleteBin.orderDeleteBin_C.OnDrop
	 */
	struct UorderDeleteBin_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function orderDeleteBin.orderDeleteBin_C.OnDragEnter
	 */
	struct UorderDeleteBin_C_OnDragEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function orderDeleteBin.orderDeleteBin_C.OnDragLeave
	 */
	struct UorderDeleteBin_C_OnDragLeave_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function orderDeleteBin.orderDeleteBin_C.ExecuteUbergraph_orderDeleteBin
	 */
	struct UorderDeleteBin_C_ExecuteUbergraph_orderDeleteBin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
