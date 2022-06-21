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
	 * Function ConfirmPopupInterface.ConfirmPopupInterface_C.UserClickedCancel
	 */
	struct UConfirmPopupInterface_C_UserClickedCancel_Params
	{
	public:
		class FString                                              ActionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConfirmPopupInterface.ConfirmPopupInterface_C.UserClickedConfirm
	 */
	struct UConfirmPopupInterface_C_UserClickedConfirm_Params
	{
	public:
		class FString                                              ActionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
