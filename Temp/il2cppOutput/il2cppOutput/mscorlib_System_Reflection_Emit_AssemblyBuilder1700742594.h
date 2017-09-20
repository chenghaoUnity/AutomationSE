#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.ModuleBuilder[]
struct ModuleBuilderU5BU5D_t_364593634_0;
// System.String
struct String_t;
// System.Reflection.Emit.MonoResource[]
struct MonoResourceU5BU5D_t1994210982_0;
// System.Reflection.Module[]
struct ModuleU5BU5D_t_1188401674_0;
// System.Reflection.Emit.RefEmitPermissionSet[]
struct RefEmitPermissionSetU5BU5D_t_1713759422_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Type
struct Type_t;
// Mono.Security.StrongName
struct StrongName_t_1999711831_0;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t_1005964868_0;

#include "mscorlib_System_Reflection_Assembly_957553394.h"
#include "mscorlib_System_Reflection_Emit_PEFileKinds2141583963.h"

// System.Reflection.Emit.AssemblyBuilder
struct  AssemblyBuilder_t1700742594_0  : public Assembly_t_957553394_0
{
	// System.Reflection.Emit.ModuleBuilder[] System.Reflection.Emit.AssemblyBuilder::modules
	ModuleBuilderU5BU5D_t_364593634_0* ___modules_10;
	// System.String System.Reflection.Emit.AssemblyBuilder::name
	String_t* ___name_11;
	// System.String System.Reflection.Emit.AssemblyBuilder::dir
	String_t* ___dir_12;
	// System.Reflection.Emit.MonoResource[] System.Reflection.Emit.AssemblyBuilder::resources
	MonoResourceU5BU5D_t1994210982_0* ___resources_13;
	// System.String System.Reflection.Emit.AssemblyBuilder::version
	String_t* ___version_14;
	// System.String System.Reflection.Emit.AssemblyBuilder::culture
	String_t* ___culture_15;
	// System.UInt32 System.Reflection.Emit.AssemblyBuilder::flags
	uint32_t ___flags_16;
	// System.Reflection.Emit.PEFileKinds System.Reflection.Emit.AssemblyBuilder::pekind
	int32_t ___pekind_17;
	// System.UInt32 System.Reflection.Emit.AssemblyBuilder::access
	uint32_t ___access_18;
	// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::loaded_modules
	ModuleU5BU5D_t_1188401674_0* ___loaded_modules_19;
	// System.Reflection.Emit.RefEmitPermissionSet[] System.Reflection.Emit.AssemblyBuilder::permissions_minimum
	RefEmitPermissionSetU5BU5D_t_1713759422_0* ___permissions_minimum_20;
	// System.Reflection.Emit.RefEmitPermissionSet[] System.Reflection.Emit.AssemblyBuilder::permissions_optional
	RefEmitPermissionSetU5BU5D_t_1713759422_0* ___permissions_optional_21;
	// System.Reflection.Emit.RefEmitPermissionSet[] System.Reflection.Emit.AssemblyBuilder::permissions_refused
	RefEmitPermissionSetU5BU5D_t_1713759422_0* ___permissions_refused_22;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::corlib_internal
	bool ___corlib_internal_23;
	// System.Byte[] System.Reflection.Emit.AssemblyBuilder::pktoken
	ByteU5BU5D_t_1238178395_0* ___pktoken_24;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_object_type
	Type_t * ___corlib_object_type_25;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_value_type
	Type_t * ___corlib_value_type_26;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_enum_type
	Type_t * ___corlib_enum_type_27;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_void_type
	Type_t * ___corlib_void_type_28;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::created
	bool ___created_29;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::is_module_only
	bool ___is_module_only_30;
	// Mono.Security.StrongName System.Reflection.Emit.AssemblyBuilder::sn
	StrongName_t_1999711831_0 * ___sn_31;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::is_compiler_context
	bool ___is_compiler_context_32;
	// System.String System.Reflection.Emit.AssemblyBuilder::versioninfo_culture
	String_t* ___versioninfo_culture_33;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::manifest_module
	ModuleBuilder_t_1005964868_0 * ___manifest_module_34;
};
