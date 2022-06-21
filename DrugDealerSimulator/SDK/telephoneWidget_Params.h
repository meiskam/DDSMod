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
	 * Function telephoneWidget.telephoneWidget_C.renderNotifications
	 */
	struct UtelephoneWidget_C_renderNotifications_Params
	{	};

	/**
	 * Function telephoneWidget.telephoneWidget_C.renderMessages
	 */
	struct UtelephoneWidget_C_renderMessages_Params
	{
	public:
		class AtelephoneBP_C*                                      phoneRef;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       renderUserMsg;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UserID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function telephoneWidget.telephoneWidget_C.renderCallList
	 */
	struct UtelephoneWidget_C_renderCallList_Params
	{
	public:
		class AtelephoneBP_C*                                      phoneRef;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function telephoneWidget.telephoneWidget_C.Tick
	 */
	struct UtelephoneWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function telephoneWidget.telephoneWidget_C.slideNext
	 */
	struct UtelephoneWidget_C_slideNext_Params
	{	};

	/**
	 * Function telephoneWidget.telephoneWidget_C.slidePrevious
	 */
	struct UtelephoneWidget_C_slidePrevious_Params
	{	};

	/**
	 * Function telephoneWidget.telephoneWidget_C.setSlide
	 */
	struct UtelephoneWidget_C_setSlide_Params
	{
	public:
		int32_t                                                    slideNum;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function telephoneWidget.telephoneWidget_C.Construct
	 */
	struct UtelephoneWidget_C_Construct_Params
	{	};

	/**
	 * Function telephoneWidget.telephoneWidget_C.hideCallWidget
	 */
	struct UtelephoneWidget_C_hideCallWidget_Params
	{	};

	/**
	 * Function telephoneWidget.telephoneWidget_C.showCallWidget
	 */
	struct UtelephoneWidget_C_showCallWidget_Params
	{
	public:
		struct FcontactPersonStruct                                userData;                                                // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function telephoneWidget.telephoneWidget_C.callAccepted
	 */
	struct UtelephoneWidget_C_callAccepted_Params
	{	};

	/**
	 * Function telephoneWidget.telephoneWidget_C.callTick
	 */
	struct UtelephoneWidget_C_callTick_Params
	{	};

	/**
	 * Function telephoneWidget.telephoneWidget_C.updateTime
	 */
	struct UtelephoneWidget_C_updateTime_Params
	{	};

	/**
	 * Function telephoneWidget.telephoneWidget_C.ExecuteUbergraph_telephoneWidget
	 */
	struct UtelephoneWidget_C_ExecuteUbergraph_telephoneWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
