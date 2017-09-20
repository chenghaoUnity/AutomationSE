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

// System.Security.IPermission
struct IPermission_t846381381_0;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta_144167259.h"

// System.Void System.Security.PermissionBuilder::.cctor()
extern "C"  void PermissionBuilder__cctor_m105545430_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.String,System.Security.Permissions.PermissionState)
extern "C"  Object_t * PermissionBuilder_Create_m1757565510_0 (Object_t * __this /* static, unused */, String_t* ___fullname, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.Security.SecurityElement)
extern "C"  Object_t * PermissionBuilder_Create_m_1189555930_0 (Object_t * __this /* static, unused */, SecurityElement_t117540681_0 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.String,System.Security.SecurityElement)
extern "C"  Object_t * PermissionBuilder_Create_m1777053986_0 (Object_t * __this /* static, unused */, String_t* ___fullname, SecurityElement_t117540681_0 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.Type)
extern "C"  Object_t * PermissionBuilder_Create_m1691674554_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::CreatePermission(System.String,System.Security.SecurityElement)
extern "C"  Object_t * PermissionBuilder_CreatePermission_m914144467_0 (Object_t * __this /* static, unused */, String_t* ___fullname, SecurityElement_t117540681_0 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
