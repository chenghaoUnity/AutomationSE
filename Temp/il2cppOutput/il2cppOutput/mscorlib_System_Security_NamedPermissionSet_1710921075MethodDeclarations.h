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

// System.Security.NamedPermissionSet
struct NamedPermissionSet_t_1710921075_0;
// System.String
struct String_t;
// System.Security.PermissionSet
struct PermissionSet_t_15044864_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta_144167259.h"

// System.Void System.Security.NamedPermissionSet::.ctor()
extern "C"  void NamedPermissionSet__ctor_m263038953_0 (NamedPermissionSet_t_1710921075_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::.ctor(System.String,System.Security.Permissions.PermissionState)
extern "C"  void NamedPermissionSet__ctor_m_1035667460_0 (NamedPermissionSet_t_1710921075_0 * __this, String_t* ___name, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::.ctor(System.Security.NamedPermissionSet)
extern "C"  void NamedPermissionSet__ctor_m_518951584_0 (NamedPermissionSet_t_1710921075_0 * __this, NamedPermissionSet_t_1710921075_0 * ___permSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.NamedPermissionSet::get_Name()
extern "C"  String_t* NamedPermissionSet_get_Name_m1991316146_0 (NamedPermissionSet_t_1710921075_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::set_Name(System.String)
extern "C"  void NamedPermissionSet_set_Name_m868725343_0 (NamedPermissionSet_t_1710921075_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.NamedPermissionSet::Copy()
extern "C"  PermissionSet_t_15044864_0 * NamedPermissionSet_Copy_m1595915871_0 (NamedPermissionSet_t_1710921075_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::FromXml(System.Security.SecurityElement)
extern "C"  void NamedPermissionSet_FromXml_m_580809583_0 (NamedPermissionSet_t_1710921075_0 * __this, SecurityElement_t117540681_0 * ___et, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.NamedPermissionSet::ToXml()
extern "C"  SecurityElement_t117540681_0 * NamedPermissionSet_ToXml_m977658461_0 (NamedPermissionSet_t_1710921075_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.NamedPermissionSet::Equals(System.Object)
extern "C"  bool NamedPermissionSet_Equals_m1712129368_0 (NamedPermissionSet_t_1710921075_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.NamedPermissionSet::GetHashCode()
extern "C"  int32_t NamedPermissionSet_GetHashCode_m_1235138244_0 (NamedPermissionSet_t_1710921075_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
