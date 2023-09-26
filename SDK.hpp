#pragma once

// Made with <3 by me [Encryqed] && you [Fischsalat] + him [TempAccountNull]

// ArkGame
// 4.25.4-0+++UE4+Release-4.25-NEXT

// Main-package: ArkGame

#include <string>
#include <Windows.h>
#include <iostream>
#include <type_traits>

typedef __int8 int8;
typedef __int16 int16;
typedef __int32 int32;
typedef __int64 int64;

typedef unsigned __int8 uint8;
typedef unsigned __int16 uint16;
typedef unsigned __int32 uint32;
typedef unsigned __int64 uint64;

namespace Offsets
{
	constexpr int32 GObjects          = 0x08491788;
	constexpr int32 AppendString      = 0x02F2FCA0;
	constexpr int32 GNames            = 0x148465040 - 0x140000000;
	constexpr int32 ProcessEvent      = 0x03081390;
	constexpr int32 ProcessEventIdx   = 0x00000046;
	constexpr int32 GWorld			  = 0x14865C7E8 - 0x140000000;
}

#include "PropertyFixup.hpp"

#include "SDK/Basic.hpp"

#include "SDK/CoreUObject_structs.hpp"
#include "SDK/InputCore_structs.hpp"
#include "SDK/SlateCore_structs.hpp"
#include "SDK/Slate_structs.hpp"
#include "SDK/AudioPlatformConfiguration_structs.hpp"
#include "SDK/AudioExtensions_structs.hpp"
#include "SDK/PhysicsCore_structs.hpp"
#include "SDK/Engine_structs.hpp"
#include "SDK/ProceduralMeshComponent_structs.hpp"
#include "SDK/MovieScene_structs.hpp"
#include "SDK/AkAudio_structs.hpp"
#include "SDK/GameplayTags_structs.hpp"
#include "SDK/GameplayAbilities_structs.hpp"
#include "SDK/MovieSceneTracks_structs.hpp"
#include "SDK/PropertyPath_structs.hpp"
#include "SDK/UMG_structs.hpp"
#include "SDK/GameplayTasks_structs.hpp"
#include "SDK/AIModule_structs.hpp"
#include "SDK/AnimationCore_structs.hpp"
#include "SDK/AnimGraphRuntime_structs.hpp"
#include "SDK/CustomAnimNode_structs.hpp"
#include "SDK/XDNAContext_Module_structs.hpp"
#include "SDK/AnimationBudgetAllocator_structs.hpp"
#include "SDK/ArkMotionMatching_structs.hpp"
#include "SDK/ArkGame_structs.hpp"
#include "SDK/CoreUObject_classes.hpp"
#include "SDK/PacketHandler_structs.hpp"
#include "SDK/PacketHandler_classes.hpp"
#include "SDK/Engine_classes.hpp"
#include "SDK/MovieScene_classes.hpp"
#include "SDK/MovieSceneTracks_classes.hpp"
#include "SDK/UMG_classes.hpp"
#include "SDK/AkAudio_classes.hpp"
#include "SDK/GameplayTasks_classes.hpp"
#include "SDK/GameplayAbilities_classes.hpp"
#include "SDK/NavigationSystem_structs.hpp"
#include "SDK/NavigationSystem_classes.hpp"
#include "SDK/AIModule_classes.hpp"
#include "SDK/ApexDestruction_structs.hpp"
#include "SDK/ApexDestruction_classes.hpp"
#include "SDK/CinematicCamera_structs.hpp"
#include "SDK/CinematicCamera_classes.hpp"
#include "SDK/G6Base_structs.hpp"
#include "SDK/G6Base_classes.hpp"
#include "SDK/DSGame_structs.hpp"
#include "SDK/DSGame_classes.hpp"
#include "SDK/AnimationBudgetAllocator_classes.hpp"
#include "SDK/Foliage_structs.hpp"
#include "SDK/Foliage_classes.hpp"
#include "SDK/ReplicationGraph_structs.hpp"
#include "SDK/ReplicationGraph_classes.hpp"
#include "SDK/SignificanceManager_structs.hpp"
#include "SDK/SignificanceManager_classes.hpp"
#include "SDK/NiagaraCore_structs.hpp"
#include "SDK/NiagaraShader_structs.hpp"
#include "SDK/Niagara_structs.hpp"
#include "SDK/NiagaraCore_classes.hpp"
#include "SDK/NiagaraShader_classes.hpp"
#include "SDK/Niagara_classes.hpp"
#include "SDK/GameplayTags_classes.hpp"
#include "SDK/EventStateMachine_structs.hpp"
#include "SDK/EventStateMachine_classes.hpp"
#include "SDK/ArkGame_classes.hpp"
#include "SDK/CoreUObject_parameters.hpp"
#include "SDK/InputCore_parameters.hpp"
#include "SDK/SlateCore_parameters.hpp"
#include "SDK/Slate_parameters.hpp"
#include "SDK/AudioPlatformConfiguration_parameters.hpp"
#include "SDK/AudioExtensions_parameters.hpp"
#include "SDK/PacketHandler_parameters.hpp"
#include "SDK/PhysicsCore_parameters.hpp"
#include "SDK/Engine_parameters.hpp"
#include "SDK/ProceduralMeshComponent_parameters.hpp"
#include "SDK/MovieScene_parameters.hpp"
#include "SDK/MovieSceneTracks_parameters.hpp"
#include "SDK/PropertyPath_parameters.hpp"
#include "SDK/UMG_parameters.hpp"
#include "SDK/AkAudio_parameters.hpp"
#include "SDK/GameplayTags_parameters.hpp"
#include "SDK/GameplayTasks_parameters.hpp"
#include "SDK/GameplayAbilities_parameters.hpp"
#include "SDK/NavigationSystem_parameters.hpp"
#include "SDK/AIModule_parameters.hpp"
#include "SDK/AnimationCore_parameters.hpp"
#include "SDK/AnimGraphRuntime_parameters.hpp"
#include "SDK/CustomAnimNode_parameters.hpp"
#include "SDK/CinematicCamera_parameters.hpp"
#include "SDK/ApexDestruction_parameters.hpp"
#include "SDK/XDNAContext_Module_parameters.hpp"
#include "SDK/G6Base_parameters.hpp"
#include "SDK/DSGame_parameters.hpp"
#include "SDK/AnimationBudgetAllocator_parameters.hpp"
#include "SDK/Foliage_parameters.hpp"
#include "SDK/ReplicationGraph_parameters.hpp"
#include "SDK/SignificanceManager_parameters.hpp"
#include "SDK/NiagaraCore_parameters.hpp"
#include "SDK/NiagaraShader_parameters.hpp"
#include "SDK/Niagara_parameters.hpp"
#include "SDK/ArkMotionMatching_parameters.hpp"
#include "SDK/EventStateMachine_parameters.hpp"
#include "SDK/ArkGame_parameters.hpp"


static_assert(offsetof(SDK::UObject, Vft) == 0x0, "UObject::Vft has a wrong offset!");
static_assert(offsetof(SDK::UObject, Flags) == 0x8, "UObject::Flags has a wrong offset!");
static_assert(offsetof(SDK::UObject, Index) == 0xC, "UObject::Index has a wrong offset!");
static_assert(offsetof(SDK::UObject, Class) == 0x10, "UObject::Class has a wrong offset!");
static_assert(offsetof(SDK::UObject, Name) == 0x18, "UObject::Name has a wrong offset!");
static_assert(offsetof(SDK::UObject, Outer) == 0x20, "UObject::Outer has a wrong offset!");

static_assert(offsetof(SDK::FProperty, ElementSize) == 0x3C, "FProperty::ElementSize has a wrong offset!");
static_assert(offsetof(SDK::FProperty, PropertyFlags) == 0x40, "FProperty::PropertyFlags has a wrong offset!");
static_assert(offsetof(SDK::FProperty, Offset) == 0x4C, "FProperty::Offset has a wrong offset!");

static_assert(offsetof(SDK::UField, Next) == 0x28, "UField::Next has a wrong offset!");

static_assert(offsetof(SDK::FStructProperty, Struct) == 0x78, "FStructProperty::Struct has a wrong offset!");

static_assert(offsetof(SDK::UEnum, Names) == 0x40, "UEnum::Names has a wrong offset!");

static_assert(offsetof(SDK::UStruct, Super) == 0x40, "UStruct::Super has a wrong offset!");
static_assert(offsetof(SDK::UStruct, Children) == 0x48, "UStruct::Children has a wrong offset!");
static_assert(offsetof(SDK::UStruct, ChildProperties) == 0x50, "UStruct::ChildProperties has a wrong offset!");
static_assert(offsetof(SDK::UStruct, Size) == 0x58, "UStruct::Size has a wrong offset!");

static_assert(offsetof(SDK::UClass, CastFlags) == 0xD0, "UClass::CastFlags has a wrong offset!");
static_assert(offsetof(SDK::UClass, DefaultObject) == 0x118, "UClass::DefaultObject has a wrong offset!");

static_assert(offsetof(SDK::FMapProperty, KeyProperty) == 0x78, "FMapProperty::KeyProperty has a wrong offset!");
static_assert(offsetof(SDK::FMapProperty, ValueProperty) == 0x80, "FMapProperty::ValueProperty has a wrong offset!");

static_assert(offsetof(SDK::UFunction, FunctionFlags) == 0xB0, "UFunction::FunctionFlags has a wrong offset!");
static_assert(offsetof(SDK::UFunction, ExecFunction) == 0xD8, "UFunction::ExecFunction has a wrong offset!");

static_assert(offsetof(SDK::FClassProperty, MetaClass) == 0x80, "FClassProperty::MetaClass has a wrong offset!");

static_assert(offsetof(SDK::FByteProperty, Enum) == 0x78, "FByteProperty::Enum has a wrong offset!");

static_assert(offsetof(SDK::FFieldVariant, Container) == 0x0, "FFieldVariant::Container has a wrong offset!");
static_assert(offsetof(SDK::FFieldVariant, bIsUObject) == 0x8, "FFieldVariant::bIsUObject has a wrong offset!");
static_assert(offsetof(SDK::FFieldVariant, Pad) == 0x9, "FFieldVariant::Pad has a wrong offset!");

static_assert(offsetof(SDK::FBoolProperty, FieldSize) == 0x78, "FBoolProperty::FieldSize has a wrong offset!");
static_assert(offsetof(SDK::FBoolProperty, ByteOffset) == 0x79, "FBoolProperty::ByteOffset has a wrong offset!");
static_assert(offsetof(SDK::FBoolProperty, ByteMask) == 0x7A, "FBoolProperty::ByteMask has a wrong offset!");
static_assert(offsetof(SDK::FBoolProperty, FieldMask) == 0x7B, "FBoolProperty::FieldMask has a wrong offset!");

static_assert(offsetof(SDK::FObjectPropertyBase, PropertyClass) == 0x78, "FObjectPropertyBase::PropertyClass has a wrong offset!");

static_assert(offsetof(SDK::FArrayProperty, InnerProperty) == 0x78, "FArrayProperty::InnerProperty has a wrong offset!");

static_assert(offsetof(SDK::FSetProperty, ElementProperty) == 0x78, "FSetProperty::ElementProperty has a wrong offset!");

static_assert(offsetof(SDK::FEnumProperty, UnderlayingProperty) == 0x78, "FEnumProperty::UnderlayingProperty has a wrong offset!");
static_assert(offsetof(SDK::FEnumProperty, Enum) == 0x80, "FEnumProperty::Enum has a wrong offset!");

static_assert(offsetof(SDK::FFieldClass, Name) == 0x0, "FFieldClass::Name has a wrong offset!");
static_assert(offsetof(SDK::FFieldClass, Id) == 0x8, "FFieldClass::Id has a wrong offset!");
static_assert(offsetof(SDK::FFieldClass, CastFlags) == 0x10, "FFieldClass::CastFlags has a wrong offset!");
static_assert(offsetof(SDK::FFieldClass, ClassFlags) == 0x18, "FFieldClass::ClassFlags has a wrong offset!");
static_assert(offsetof(SDK::FFieldClass, SuperClass) == 0x20, "FFieldClass::SuperClass has a wrong offset!");

static_assert(offsetof(SDK::FField, Vft) == 0x0, "FField::Vft has a wrong offset!");
static_assert(offsetof(SDK::FField, Class) == 0x8, "FField::Class has a wrong offset!");
static_assert(offsetof(SDK::FField, Owner) == 0x10, "FField::Owner has a wrong offset!");
static_assert(offsetof(SDK::FField, Next) == 0x20, "FField::Next has a wrong offset!");
static_assert(offsetof(SDK::FField, Name) == 0x28, "FField::Name has a wrong offset!");
static_assert(offsetof(SDK::FField, Flags) == 0x30, "FField::Flags has a wrong offset!");
