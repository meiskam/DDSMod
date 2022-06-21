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
	 * UserDefinedStruct Bird_EnemySelection_Structure.Bird_EnemySelection_Structure
	 * Size -> 0x0014
	 */
	struct FBird_EnemySelection_Structure
	{
	public:
		class AActor*                                              Actor_2_9F3699F344F7A605C2832DA413AE8B60;                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Weight_5_59058897443C6304C72E8E9E2158C5FB;               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastSeen_8_8B030DA3437BDDCE100DF5BFD50C8FDA;             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageRecieved_15_FDF644AA4831F7E0D2670786C4762050;      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
