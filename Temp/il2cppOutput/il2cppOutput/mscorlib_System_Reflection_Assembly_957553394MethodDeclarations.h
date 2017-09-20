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

// System.Reflection.Assembly
struct Assembly_t_957553394_0;
// System.String
struct String_t;
// System.Security.Policy.Evidence
struct Evidence_t_738265248_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// System.Reflection.Module
struct Module_t_2083915884_0;
// System.Type[]
struct TypeU5BU5D_t_722972841_0;
// System.Reflection.AssemblyName
struct AssemblyName_t215784633_0;
// System.Reflection.Module[]
struct ModuleU5BU5D_t_1188401674_0;
// System.Security.PermissionSet
struct PermissionSet_t_15044864_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Reflection.Assembly::.ctor()
extern "C"  void Assembly__ctor_m_767594104_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_code_base(System.Boolean)
extern "C"  String_t* Assembly_get_code_base_m1814794868_0 (Assembly_t_957553394_0 * __this, bool ___escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_fullname()
extern "C"  String_t* Assembly_get_fullname_m_494971038_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_location()
extern "C"  String_t* Assembly_get_location_m1081941693_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::GetCodeBase(System.Boolean)
extern "C"  String_t* Assembly_GetCodeBase_m526881390_0 (Assembly_t_957553394_0 * __this, bool ___escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_EscapedCodeBase()
extern "C"  String_t* Assembly_get_EscapedCodeBase_m397382395_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_FullName()
extern "C"  String_t* Assembly_get_FullName_m582360994_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Evidence System.Reflection.Assembly::UnprotectedGetEvidence()
extern "C"  Evidence_t_738265248_0 * Assembly_UnprotectedGetEvidence_m_1376170973_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::get_global_assembly_cache()
extern "C"  bool Assembly_get_global_assembly_cache_m_2125614624_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::get_GlobalAssemblyCache()
extern "C"  bool Assembly_get_GlobalAssemblyCache_m_79491692_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_Location()
extern "C"  String_t* Assembly_get_Location_m_1219560739_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Assembly_GetObjectData_m1567311142_0 (Assembly_t_957553394_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
extern "C"  bool Assembly_IsDefined_m_395420217_0 (Assembly_t_957553394_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t1774424924_0* Assembly_GetCustomAttributes_m_257525835_0 (Assembly_t_957553394_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
extern "C"  IntPtr_t Assembly_GetManifestResourceInternal_m_988951572_0 (Assembly_t_957553394_0 * __this, String_t* ___name, int32_t* ___size, Module_t_2083915884_0 ** ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Assembly::GetTypes(System.Boolean)
extern "C"  TypeU5BU5D_t_722972841_0* Assembly_GetTypes_m_2069887058_0 (Assembly_t_957553394_0 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Assembly::GetTypes()
extern "C"  TypeU5BU5D_t_722972841_0* Assembly_GetTypes_m1658023543_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
extern "C"  Type_t * Assembly_GetType_m910605431_0 (Assembly_t_957553394_0 * __this, String_t* ___name, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String)
extern "C"  Type_t * Assembly_GetType_m60293702_0 (Assembly_t_957553394_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * Assembly_InternalGetType_m_1451677589_0 (Assembly_t_957553394_0 * __this, Module_t_2083915884_0 * ___module, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * Assembly_GetType_m_1174914522_0 (Assembly_t_957553394_0 * __this, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
extern "C"  void Assembly_FillName_m_373336495_0 (Object_t * __this /* static, unused */, Assembly_t_957553394_0 * ___ass, AssemblyName_t215784633_0 * ___aname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::GetName(System.Boolean)
extern "C"  AssemblyName_t215784633_0 * Assembly_GetName_m186567048_0 (Assembly_t_957553394_0 * __this, bool ___copiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::GetName()
extern "C"  AssemblyName_t215784633_0 * Assembly_GetName_m253695441_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
extern "C"  AssemblyName_t215784633_0 * Assembly_UnprotectedGetName_m1786225822_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::ToString()
extern "C"  String_t* Assembly_ToString_m395441739_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetEntryAssembly()
extern "C"  Assembly_t_957553394_0 * Assembly_GetEntryAssembly_m1802837791_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern "C"  Assembly_t_957553394_0 * Assembly_Load_m_213064801_0 (Object_t * __this /* static, unused */, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String)
extern "C"  Assembly_t_957553394_0 * Assembly_LoadWithPartialName_m_1239197635_0 (Object_t * __this /* static, unused */, String_t* ___partialName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::load_with_partial_name(System.String,System.Security.Policy.Evidence)
extern "C"  Assembly_t_957553394_0 * Assembly_load_with_partial_name_m_231838748_0 (Object_t * __this /* static, unused */, String_t* ___name, Evidence_t_738265248_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String,System.Security.Policy.Evidence)
extern "C"  Assembly_t_957553394_0 * Assembly_LoadWithPartialName_m_1929266907_0 (Object_t * __this /* static, unused */, String_t* ___partialName, Evidence_t_738265248_0 * ___securityEvidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C"  Assembly_t_957553394_0 * Assembly_LoadWithPartialName_m_1081439304_0 (Object_t * __this /* static, unused */, String_t* ___partialName, Evidence_t_738265248_0 * ___securityEvidence, bool ___oldBehavior, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
extern "C"  Module_t_2083915884_0 * Assembly_GetModule_m_1771661291_0 (Assembly_t_957553394_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
extern "C"  ModuleU5BU5D_t_1188401674_0* Assembly_GetModulesInternal_m1897302435_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
extern "C"  ModuleU5BU5D_t_1188401674_0* Assembly_GetModules_m_1190761987_0 (Assembly_t_957553394_0 * __this, bool ___getResourceModules, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
extern "C"  Assembly_t_957553394_0 * Assembly_GetExecutingAssembly_m1876278943_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetManifestModule()
extern "C"  Module_t_2083915884_0 * Assembly_GetManifestModule_m_1839917220_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetManifestModuleInternal()
extern "C"  Module_t_2083915884_0 * Assembly_GetManifestModuleInternal_m158430201_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::Resolve()
extern "C"  void Assembly_Resolve_m_1267419054_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Reflection.Assembly::get_GrantedPermissionSet()
extern "C"  PermissionSet_t_15044864_0 * Assembly_get_GrantedPermissionSet_m1585174220_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Reflection.Assembly::get_DeniedPermissionSet()
extern "C"  PermissionSet_t_15044864_0 * Assembly_get_DeniedPermissionSet_m2020267558_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::LoadPermissions(System.Reflection.Assembly,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&)
extern "C"  bool Assembly_LoadPermissions_m1995382459_0 (Object_t * __this /* static, unused */, Assembly_t_957553394_0 * ___a, IntPtr_t* ___minimum, int32_t* ___minLength, IntPtr_t* ___optional, int32_t* ___optLength, IntPtr_t* ___refused, int32_t* ___refLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::LoadAssemblyPermissions()
extern "C"  void Assembly_LoadAssemblyPermissions_m_2025887394_0 (Assembly_t_957553394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
