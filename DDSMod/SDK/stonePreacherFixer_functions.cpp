
#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function stonePreacherFixer.stonePreacherFixer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AstonePreacherFixer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function stonePreacherFixer.stonePreacherFixer_C.UserConstructionScript");

	AstonePreacherFixer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function stonePreacherFixer.stonePreacherFixer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AstonePreacherFixer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function stonePreacherFixer.stonePreacherFixer_C.ReceiveBeginPlay");

	AstonePreacherFixer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function stonePreacherFixer.stonePreacherFixer_C.ExecuteUbergraph_stonePreacherFixer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AstonePreacherFixer_C::ExecuteUbergraph_stonePreacherFixer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function stonePreacherFixer.stonePreacherFixer_C.ExecuteUbergraph_stonePreacherFixer");

	AstonePreacherFixer_C_ExecuteUbergraph_stonePreacherFixer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
