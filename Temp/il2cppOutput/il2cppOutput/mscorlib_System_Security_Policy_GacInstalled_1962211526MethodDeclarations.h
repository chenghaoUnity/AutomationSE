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

// System.Security.Policy.GacInstalled
struct GacInstalled_t_1962211526_0;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.Policy.Evidence
struct Evidence_t_738265248_0;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Policy.GacInstalled::.ctor()
extern "C"  void GacInstalled__ctor_m467431830_0 (GacInstalled_t_1962211526_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.GacInstalled::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C"  Object_t * GacInstalled_CreateIdentityPermission_m1169412449_0 (GacInstalled_t_1962211526_0 * __this, Evidence_t_738265248_0 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.GacInstalled::Equals(System.Object)
extern "C"  bool GacInstalled_Equals_m_886086263_0 (GacInstalled_t_1962211526_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.GacInstalled::GetHashCode()
extern "C"  int32_t GacInstalled_GetHashCode_m1051929313_0 (GacInstalled_t_1962211526_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.GacInstalled::ToString()
extern "C"  String_t* GacInstalled_ToString_m1114539927_0 (GacInstalled_t_1962211526_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
