#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1700742594_0;
// System.Reflection.AssemblyName
struct AssemblyName_t215784633_0;
// System.String
struct String_t;
// System.Security.PermissionSet
struct PermissionSet_t_15044864_0;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t_1005964868_0;
// System.Reflection.Module[]
struct ModuleU5BU5D_t_1188401674_0;
// System.Type[]
struct TypeU5BU5D_t_722972841_0;
// System.Reflection.Module
struct Module_t_2083915884_0;
// System.Exception
struct Exception_t2143823668_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAcce991759814.h"

// System.Void System.Reflection.Emit.AssemblyBuilder::.ctor(System.Reflection.AssemblyName,System.String,System.Reflection.Emit.AssemblyBuilderAccess,System.Boolean)
extern "C"  void AssemblyBuilder__ctor_m558768500_0 (AssemblyBuilder_t1700742594_0 * __this, AssemblyName_t215784633_0 * ___n, String_t* ___directory, int32_t ___access, bool ___corlib_internal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::basic_init(System.Reflection.Emit.AssemblyBuilder)
extern "C"  void AssemblyBuilder_basic_init_m_1628466253_0 (Object_t * __this /* static, unused */, AssemblyBuilder_t1700742594_0 * ___ab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C"  String_t* AssemblyBuilder_get_Location_m2002209681_0 (AssemblyBuilder_t1700742594_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::AddPermissionRequests(System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet)
extern "C"  void AssemblyBuilder_AddPermissionRequests_m831171448_0 (AssemblyBuilder_t1700742594_0 * __this, PermissionSet_t_15044864_0 * ___required, PermissionSet_t_15044864_0 * ___optional, PermissionSet_t_15044864_0 * ___refused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String)
extern "C"  ModuleBuilder_t_1005964868_0 * AssemblyBuilder_DefineDynamicModule_m490868275_0 (AssemblyBuilder_t1700742594_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String,System.Boolean)
extern "C"  ModuleBuilder_t_1005964868_0 * AssemblyBuilder_DefineDynamicModule_m1810872554_0 (AssemblyBuilder_t1700742594_0 * __this, String_t* ___name, bool ___emitSymbolInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String,System.String,System.Boolean,System.Boolean)
extern "C"  ModuleBuilder_t_1005964868_0 * AssemblyBuilder_DefineDynamicModule_m_559490225_0 (AssemblyBuilder_t1700742594_0 * __this, String_t* ___name, String_t* ___fileName, bool ___emitSymbolInfo, bool ___transient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C"  ModuleU5BU5D_t_1188401674_0* AssemblyBuilder_GetModulesInternal_m_1576185257_0 (AssemblyBuilder_t1700742594_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C"  TypeU5BU5D_t_722972841_0* AssemblyBuilder_GetTypes_m_833851422_0 (AssemblyBuilder_t1700742594_0 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C"  bool AssemblyBuilder_get_IsCompilerContext_m332025933_0 (AssemblyBuilder_t1700742594_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsSave()
extern "C"  bool AssemblyBuilder_get_IsSave_m1537194370_0 (AssemblyBuilder_t1700742594_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsRun()
extern "C"  bool AssemblyBuilder_get_IsRun_m1296175624_0 (AssemblyBuilder_t1700742594_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_AssemblyDir()
extern "C"  String_t* AssemblyBuilder_get_AssemblyDir_m1726853645_0 (AssemblyBuilder_t1700742594_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.AssemblyBuilder::GetManifestModule()
extern "C"  Module_t_2083915884_0 * AssemblyBuilder_GetManifestModule_m_965809368_0 (AssemblyBuilder_t1700742594_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C"  Exception_t2143823668_0 * AssemblyBuilder_not_supported_m186391929_0 (AssemblyBuilder_t1700742594_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::check_name_and_filename(System.String,System.String,System.Boolean)
extern "C"  void AssemblyBuilder_check_name_and_filename_m153452157_0 (AssemblyBuilder_t1700742594_0 * __this, String_t* ___name, String_t* ___fileName, bool ___fileNeedsToExists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C"  AssemblyName_t215784633_0 * AssemblyBuilder_UnprotectedGetName_m_906434094_0 (AssemblyBuilder_t1700742594_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
