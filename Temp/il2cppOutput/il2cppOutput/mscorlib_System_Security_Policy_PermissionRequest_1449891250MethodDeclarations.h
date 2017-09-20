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

// System.Security.Policy.PermissionRequestEvidence
struct PermissionRequestEvidence_t_1449891250_0;
// System.Security.PermissionSet
struct PermissionSet_t_15044864_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Policy.PermissionRequestEvidence::.ctor(System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet)
extern "C"  void PermissionRequestEvidence__ctor_m_972140586_0 (PermissionRequestEvidence_t_1449891250_0 * __this, PermissionSet_t_15044864_0 * ___request, PermissionSet_t_15044864_0 * ___optional, PermissionSet_t_15044864_0 * ___denied, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.PermissionRequestEvidence::ToString()
extern "C"  String_t* PermissionRequestEvidence_ToString_m_1529731189_0 (PermissionRequestEvidence_t_1449891250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
