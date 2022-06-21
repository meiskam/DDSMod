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
	 * Function SmuggleBox.SmuggleBox_C.CanAccessContainer
	 */
	struct ASmuggleBox_C_CanAccessContainer_Params
	{
	public:
		bool                                                       CanAccess;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                DeclineReason;                                           // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function SmuggleBox.SmuggleBox_C.UserConstructionScript
	 */
	struct ASmuggleBox_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SmuggleBox.SmuggleBox_C.SmuggleContents
	 */
	struct ASmuggleBox_C_SmuggleContents_Params
	{	};

	/**
	 * Function SmuggleBox.SmuggleBox_C.openEventScript
	 */
	struct ASmuggleBox_C_openEventScript_Params
	{	};

	/**
	 * Function SmuggleBox.SmuggleBox_C.closeEventScript
	 */
	struct ASmuggleBox_C_closeEventScript_Params
	{	};

	/**
	 * Function SmuggleBox.SmuggleBox_C.RamaLoaded
	 */
	struct ASmuggleBox_C_RamaLoaded_Params
	{	};

	/**
	 * Function SmuggleBox.SmuggleBox_C.ExecuteUbergraph_SmuggleBox
	 */
	struct ASmuggleBox_C_ExecuteUbergraph_SmuggleBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
