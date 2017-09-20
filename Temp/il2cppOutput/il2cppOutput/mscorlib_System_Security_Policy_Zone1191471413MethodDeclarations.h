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

// System.Security.Policy.Zone
struct Zone_t1191471413_0;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.Policy.Evidence
struct Evidence_t_738265248_0;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityZone2101044863.h"

// System.Void System.Security.Policy.Zone::.ctor(System.Security.SecurityZone)
extern "C"  void Zone__ctor_m1524349632_0 (Zone_t1191471413_0 * __this, int32_t ___zone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityZone System.Security.Policy.Zone::get_SecurityZone()
extern "C"  int32_t Zone_get_SecurityZone_m_2052716050_0 (Zone_t1191471413_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.Zone::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C"  Object_t * Zone_CreateIdentityPermission_m584088966_0 (Zone_t1191471413_0 * __this, Evidence_t_738265248_0 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Zone System.Security.Policy.Zone::CreateFromUrl(System.String)
extern "C"  Zone_t1191471413_0 * Zone_CreateFromUrl_m_1921978938_0 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Zone::Equals(System.Object)
extern "C"  bool Zone_Equals_m1202010158_0 (Zone_t1191471413_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Zone::GetHashCode()
extern "C"  int32_t Zone_GetHashCode_m1192602758_0 (Zone_t1191471413_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Zone::ToString()
extern "C"  String_t* Zone_ToString_m_1575069422_0 (Zone_t1191471413_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
