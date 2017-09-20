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

// System.Security.Policy.Site
struct Site_t1191257296_0;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.Policy.Evidence
struct Evidence_t_738265248_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Policy.Site::.ctor(System.String)
extern "C"  void Site__ctor_m_2125996734_0 (Site_t1191257296_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Site System.Security.Policy.Site::CreateFromUrl(System.String)
extern "C"  Site_t1191257296_0 * Site_CreateFromUrl_m_683303940_0 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.Site::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C"  Object_t * Site_CreateIdentityPermission_m1596917003_0 (Site_t1191257296_0 * __this, Evidence_t_738265248_0 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Site::Equals(System.Object)
extern "C"  bool Site_Equals_m_998793677_0 (Site_t1191257296_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Site::GetHashCode()
extern "C"  int32_t Site_GetHashCode_m_268638325_0 (Site_t1191257296_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Site::ToString()
extern "C"  String_t* Site_ToString_m_1490058195_0 (Site_t1191257296_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Site::get_Name()
extern "C"  String_t* Site_get_Name_m_851783275_0 (Site_t1191257296_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Site::IsValid(System.String)
extern "C"  bool Site_IsValid_m_1047827792_0 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Site::UrlToSite(System.String)
extern "C"  String_t* Site_UrlToSite_m_1998887792_0 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
