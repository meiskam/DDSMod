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
	 * Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.removeMe
	 */
	struct UnarratorSubtitlesWidget_C_removeMe_Params
	{	};

	/**
	 * Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.Tick
	 */
	struct UnarratorSubtitlesWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.Setup
	 */
	struct UnarratorSubtitlesWidget_C_Setup_Params
	{
	public:
		class FText                                                Monologue;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.Construct
	 */
	struct UnarratorSubtitlesWidget_C_Construct_Params
	{	};

	/**
	 * Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.ExecuteUbergraph_narratorSubtitlesWidget
	 */
	struct UnarratorSubtitlesWidget_C_ExecuteUbergraph_narratorSubtitlesWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
