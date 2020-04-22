
#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function CitizenFemale02_AnimBP.CitizenFemale02_AnimBP_C.ExecuteUbergraph_CitizenFemale02_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCitizenFemale02_AnimBP_C::ExecuteUbergraph_CitizenFemale02_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CitizenFemale02_AnimBP.CitizenFemale02_AnimBP_C.ExecuteUbergraph_CitizenFemale02_AnimBP");

	UCitizenFemale02_AnimBP_C_ExecuteUbergraph_CitizenFemale02_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
