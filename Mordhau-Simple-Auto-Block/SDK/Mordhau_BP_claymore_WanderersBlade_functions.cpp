// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_claymore_WanderersBlade.BP_claymore_WanderersBlade_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_claymore_WanderersBlade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_claymore_WanderersBlade.BP_claymore_WanderersBlade_C.UserConstructionScript");

	UBP_claymore_WanderersBlade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_claymore_WanderersBlade.BP_claymore_WanderersBlade_C.ReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void UBP_claymore_WanderersBlade_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_claymore_WanderersBlade.BP_claymore_WanderersBlade_C.ReceiveBeginPlay");

	UBP_claymore_WanderersBlade_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_claymore_WanderersBlade.BP_claymore_WanderersBlade_C.ReceiveActorBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_claymore_WanderersBlade_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_claymore_WanderersBlade.BP_claymore_WanderersBlade_C.ReceiveActorBeginOverlap");

	UBP_claymore_WanderersBlade_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_claymore_WanderersBlade.BP_claymore_WanderersBlade_C.ReceiveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_claymore_WanderersBlade_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_claymore_WanderersBlade.BP_claymore_WanderersBlade_C.ReceiveTick");

	UBP_claymore_WanderersBlade_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_claymore_WanderersBlade.BP_claymore_WanderersBlade_C.ExecuteUbergraph_BP_claymore_WanderersBlade
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_claymore_WanderersBlade_C::ExecuteUbergraph_BP_claymore_WanderersBlade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_claymore_WanderersBlade.BP_claymore_WanderersBlade_C.ExecuteUbergraph_BP_claymore_WanderersBlade");

	UBP_claymore_WanderersBlade_C_ExecuteUbergraph_BP_claymore_WanderersBlade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif