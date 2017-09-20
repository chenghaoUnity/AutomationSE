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

// System.Security.Permissions.UIPermission
struct UIPermission_t1335399328_0;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta_144167259.h"
#include "mscorlib_System_Security_Permissions_UIPermissionWi468984752.h"
#include "mscorlib_System_Security_Permissions_UIPermission_1387168298.h"

// System.Void System.Security.Permissions.UIPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void UIPermission__ctor_m_1268412333_0 (UIPermission_t1335399328_0 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UIPermission::.ctor(System.Security.Permissions.UIPermissionWindow,System.Security.Permissions.UIPermissionClipboard)
extern "C"  void UIPermission__ctor_m_649450788_0 (UIPermission_t1335399328_0 * __this, int32_t ___windowFlag, int32_t ___clipboardFlag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UIPermission::set_Clipboard(System.Security.Permissions.UIPermissionClipboard)
extern "C"  void UIPermission_set_Clipboard_m1837576971_0 (UIPermission_t1335399328_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UIPermission::set_Window(System.Security.Permissions.UIPermissionWindow)
extern "C"  void UIPermission_set_Window_m163921199_0 (UIPermission_t1335399328_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UIPermission::Copy()
extern "C"  Object_t * UIPermission_Copy_m_997049395_0 (UIPermission_t1335399328_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UIPermission::FromXml(System.Security.SecurityElement)
extern "C"  void UIPermission_FromXml_m248868900_0 (UIPermission_t1335399328_0 * __this, SecurityElement_t117540681_0 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UIPermission::Intersect(System.Security.IPermission)
extern "C"  Object_t * UIPermission_Intersect_m_1583878752_0 (UIPermission_t1335399328_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UIPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool UIPermission_IsSubsetOf_m_419069674_0 (UIPermission_t1335399328_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UIPermission::IsUnrestricted()
extern "C"  bool UIPermission_IsUnrestricted_m1103716174_0 (UIPermission_t1335399328_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.UIPermission::ToXml()
extern "C"  SecurityElement_t117540681_0 * UIPermission_ToXml_m1273381098_0 (UIPermission_t1335399328_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UIPermission::Union(System.Security.IPermission)
extern "C"  Object_t * UIPermission_Union_m1767800176_0 (UIPermission_t1335399328_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UIPermission::IsEmpty(System.Security.Permissions.UIPermissionWindow,System.Security.Permissions.UIPermissionClipboard)
extern "C"  bool UIPermission_IsEmpty_m583190139_0 (UIPermission_t1335399328_0 * __this, int32_t ___w, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.UIPermission System.Security.Permissions.UIPermission::Cast(System.Security.IPermission)
extern "C"  UIPermission_t1335399328_0 * UIPermission_Cast_m1234840013_0 (UIPermission_t1335399328_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
