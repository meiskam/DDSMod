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
	 * Function shadyCommInterface.shadyCommInterface_C.Get_btnAddToOrder_bIsEnabled_1
	 */
	struct UshadyCommInterface_C_Get_btnAddToOrder_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.GetText_1
	 */
	struct UshadyCommInterface_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.PopulatePTCCombo
	 */
	struct UshadyCommInterface_C_PopulatePTCCombo_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.CloseArrestList
	 */
	struct UshadyCommInterface_C_CloseArrestList_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.OpenArrestList
	 */
	struct UshadyCommInterface_C_OpenArrestList_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.Get_TextBlock_28_Text_1
	 */
	struct UshadyCommInterface_C_Get_TextBlock_28_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.determineSector
	 */
	struct UshadyCommInterface_C_determineSector_Params
	{
	public:
		class FString                                              AreaNam;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    SectorNum;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.toggleAreaDetails
	 */
	struct UshadyCommInterface_C_toggleAreaDetails_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              AreaString;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Unlocked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.spawnSeedGuy
	 */
	struct UshadyCommInterface_C_spawnSeedGuy_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.checkUserResetReadMessages
	 */
	struct UshadyCommInterface_C_checkUserResetReadMessages_Params
	{
	public:
		int32_t                                                    UserID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.Get_txtStatusClientSatisfaction_ToolTipWidget_1
	 */
	struct UshadyCommInterface_C_Get_txtStatusClientSatisfaction_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.Get_txtStatusDeliveryTime_ToolTipWidget_1
	 */
	struct UshadyCommInterface_C_Get_txtStatusDeliveryTime_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.countAverageSatisfaction
	 */
	struct UshadyCommInterface_C_countAverageSatisfaction_Params
	{
	public:
		TArray<bool>                                               clientsLost;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<float>                                              ClientSatisfaction;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<int32_t>                                            ClientNumSales;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_4
	 */
	struct UshadyCommInterface_C_GetToolTipWidget_4_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_3
	 */
	struct UshadyCommInterface_C_GetToolTipWidget_3_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_2
	 */
	struct UshadyCommInterface_C_GetToolTipWidget_2_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.renderAreas
	 */
	struct UshadyCommInterface_C_renderAreas_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.countAverageDeliveryTime
	 */
	struct UshadyCommInterface_C_countAverageDeliveryTime_Params
	{
	public:
		TArray<bool>                                               OrdersClosed;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<float>                                              DeliveryTimes;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.renderWarnings
	 */
	struct UshadyCommInterface_C_renderWarnings_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.GetToolTipWidget_1
	 */
	struct UshadyCommInterface_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.spawnEquipmentGuy
	 */
	struct UshadyCommInterface_C_spawnEquipmentGuy_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.spawnLaunderingGuy
	 */
	struct UshadyCommInterface_C_spawnLaunderingGuy_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.generateMeetingPhrase
	 */
	struct UshadyCommInterface_C_generateMeetingPhrase_Params
	{
	public:
		bool                                                       Response;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Decline;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                QuestionText;                                            // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.renderGroupContacts
	 */
	struct UshadyCommInterface_C_renderGroupContacts_Params
	{
	public:
		class AcontactsManager_C*                                  contactsManager;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            idsGroup;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.putContactListSection
	 */
	struct UshadyCommInterface_C_putContactListSection_Params
	{
	public:
		class FText                                                Nam;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.clearNewMessages
	 */
	struct UshadyCommInterface_C_clearNewMessages_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.findSalePointByAreaID
	 */
	struct UshadyCommInterface_C_findSalePointByAreaID_Params
	{
	public:
		class FString                                              stringID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADrugSalePoint_C*                                    SalePoint;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.spawnClientOnMap
	 */
	struct UshadyCommInterface_C_spawnClientOnMap_Params
	{
	public:
		class AsalesManager_C*                                     SaleManager;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OrderId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.checkOptionAvailability
	 */
	struct UshadyCommInterface_C_checkOptionAvailability_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.switchContact
	 */
	struct UshadyCommInterface_C_switchContact_Params
	{
	public:
		int32_t                                                    newContactID;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.Get_btnBankAccount_ToolTipWidget_1
	 */
	struct UshadyCommInterface_C_Get_btnBankAccount_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.Get_txtWalletCryptoPrice_ToolTipWidget_1
	 */
	struct UshadyCommInterface_C_Get_txtWalletCryptoPrice_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.Get_txtWalletCrypto_ToolTipWidget_1
	 */
	struct UshadyCommInterface_C_Get_txtWalletCrypto_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.updateWallet
	 */
	struct UshadyCommInterface_C_updateWallet_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.renderPriceList
	 */
	struct UshadyCommInterface_C_renderPriceList_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.renderMessages
	 */
	struct UshadyCommInterface_C_renderMessages_Params
	{
	public:
		int32_t                                                    UserID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.renderDrugs
	 */
	struct UshadyCommInterface_C_renderDrugs_Params
	{
	public:
		class AmainComputer_C*                                     Computer;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.renderContacts
	 */
	struct UshadyCommInterface_C_renderContacts_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.Construct
	 */
	struct UshadyCommInterface_C_Construct_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.Tick
	 */
	struct UshadyCommInterface_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.Setup
	 */
	struct UshadyCommInterface_C_Setup_Params
	{
	public:
		class AmainComputer_C*                                     parentRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnOpenOptions_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__btnOpenOptions_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnSendMessage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__btnSendMessage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnCloseOptions_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__btnCloseOptions_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.closeOptions
	 */
	struct UshadyCommInterface_C_closeOptions_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.showPriceEdit
	 */
	struct UshadyCommInterface_C_showPriceEdit_Params
	{
	public:
		int32_t                                                    DrugIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__drugPriceEditInput_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__drugPriceEditInput_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETextCommit                                                CommitMethod;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnBankAccount_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__btnBankAccount_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__BTNuSERoPTIONS_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__BTNuSERoPTIONS_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.hideUserOptions
	 */
	struct UshadyCommInterface_C_hideUserOptions_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnConfirmOrder_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__btnConfirmOrder_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnHire_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__btnHire_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnDontHire_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__btnDontHire_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnDeclineOrder_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__btnDeclineOrder_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnHireAdditional_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__btnHireAdditional_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.openUserOptionsDialogue
	 */
	struct UshadyCommInterface_C_openUserOptionsDialogue_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnEddieCash_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__btnEddieCash_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnHideoutsOffer_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__btnHideoutsOffer_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnAskMeeting_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__btnAskMeeting_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnDesktop_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__btnDesktop_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.UpdateDesktop
	 */
	struct UshadyCommInterface_C_UpdateDesktop_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.meetingResponse
	 */
	struct UshadyCommInterface_C_meetingResponse_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.SendDealerMsg
	 */
	struct UshadyCommInterface_C_SendDealerMsg_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.QueueDealerResponse
	 */
	struct UshadyCommInterface_C_QueueDealerResponse_Params
	{
	public:
		bool                                                       Positive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    DealerID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.randomWobble
	 */
	struct UshadyCommInterface_C_randomWobble_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.OpenBuyPTC
	 */
	struct UshadyCommInterface_C_OpenBuyPTC_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnBuyPtc01_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__btnBuyPtc01_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__orderDropOverlay_K2Node_ComponentBoundEvent_25_ClickedBuytPTC__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__orderDropOverlay_K2Node_ComponentBoundEvent_25_ClickedBuytPTC__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__BuyPtcSourceCombo_K2Node_ComponentBoundEvent_26_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__BuyPtcSourceCombo_K2Node_ComponentBoundEvent_26_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.BndEvt__btnPtcCancel_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
	 */
	struct UshadyCommInterface_C_BndEvt__btnPtcCancel_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.Destruct
	 */
	struct UshadyCommInterface_C_Destruct_Params
	{	};

	/**
	 * Function shadyCommInterface.shadyCommInterface_C.ExecuteUbergraph_shadyCommInterface
	 */
	struct UshadyCommInterface_C_ExecuteUbergraph_shadyCommInterface_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
