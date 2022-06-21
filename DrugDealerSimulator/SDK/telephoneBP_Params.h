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
	 * Function telephoneBP.telephoneBP_C.pushNotification
	 */
	struct AtelephoneBP_C_pushNotification_Params
	{
	public:
		class UTexture2D*                                          icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       PlaySound;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function telephoneBP.telephoneBP_C.interfaceBack
	 */
	struct AtelephoneBP_C_interfaceBack_Params
	{	};

	/**
	 * Function telephoneBP.telephoneBP_C.interfaceEnter
	 */
	struct AtelephoneBP_C_interfaceEnter_Params
	{	};

	/**
	 * Function telephoneBP.telephoneBP_C.playMessageSound
	 */
	struct AtelephoneBP_C_playMessageSound_Params
	{	};

	/**
	 * Function telephoneBP.telephoneBP_C.addListCall
	 */
	struct AtelephoneBP_C_addListCall_Params
	{
	public:
		class FText                                                CallerName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              CallTime;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    callerID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Declined;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function telephoneBP.telephoneBP_C.pushNote
	 */
	struct AtelephoneBP_C_pushNote_Params
	{
	public:
		class FText                                                noteText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function telephoneBP.telephoneBP_C.pushMessage
	 */
	struct AtelephoneBP_C_pushMessage_Params
	{
	public:
		int32_t                                                    From;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Message;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    vcardID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function telephoneBP.telephoneBP_C.declineCall
	 */
	struct AtelephoneBP_C_declineCall_Params
	{	};

	/**
	 * Function telephoneBP.telephoneBP_C.acceptCall
	 */
	struct AtelephoneBP_C_acceptCall_Params
	{	};

	/**
	 * Function telephoneBP.telephoneBP_C.playRingtone
	 */
	struct AtelephoneBP_C_playRingtone_Params
	{	};

	/**
	 * Function telephoneBP.telephoneBP_C.displayIncommingCall
	 */
	struct AtelephoneBP_C_displayIncommingCall_Params
	{
	public:
		struct FcontactPersonStruct                                personData;                                              // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class USoundWave*                                          callSound;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CallTime;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    callerID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function telephoneBP.telephoneBP_C.UserConstructionScript
	 */
	struct AtelephoneBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function telephoneBP.telephoneBP_C.phoneNextSlide
	 */
	struct AtelephoneBP_C_phoneNextSlide_Params
	{	};

	/**
	 * Function telephoneBP.telephoneBP_C.phonePrevSlider
	 */
	struct AtelephoneBP_C_phonePrevSlider_Params
	{	};

	/**
	 * Function telephoneBP.telephoneBP_C.endCall
	 */
	struct AtelephoneBP_C_endCall_Params
	{	};

	/**
	 * Function telephoneBP.telephoneBP_C.hidePhone
	 */
	struct AtelephoneBP_C_hidePhone_Params
	{	};

	/**
	 * Function telephoneBP.telephoneBP_C.lockPhone
	 */
	struct AtelephoneBP_C_lockPhone_Params
	{	};

	/**
	 * Function telephoneBP.telephoneBP_C.showPhone
	 */
	struct AtelephoneBP_C_showPhone_Params
	{	};

	/**
	 * Function telephoneBP.telephoneBP_C.initialisePhone
	 */
	struct AtelephoneBP_C_initialisePhone_Params
	{	};

	/**
	 * Function telephoneBP.telephoneBP_C.unlockPhone
	 */
	struct AtelephoneBP_C_unlockPhone_Params
	{	};

	/**
	 * Function telephoneBP.telephoneBP_C.displayCallSubtitle
	 */
	struct AtelephoneBP_C_displayCallSubtitle_Params
	{
	public:
		float                                                      Length;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function telephoneBP.telephoneBP_C.ExecuteUbergraph_telephoneBP
	 */
	struct AtelephoneBP_C_ExecuteUbergraph_telephoneBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
