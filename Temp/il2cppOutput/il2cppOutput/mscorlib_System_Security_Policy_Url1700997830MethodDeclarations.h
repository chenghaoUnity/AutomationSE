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

// System.Security.Policy.Url
struct Url_t1700997830_0;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.Policy.Evidence
struct Evidence_t_738265248_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Policy.Url::.ctor(System.String)
extern "C"  void Url__ctor_m977245746_0 (Url_t1700997830_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Url::.ctor(System.String,System.Boolean)
extern "C"  void Url__ctor_m_1314958581_0 (Url_t1700997830_0 * __this, String_t* ___name, bool ___validated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.Url::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C"  Object_t * Url_CreateIdentityPermission_m_944634425_0 (Url_t1700997830_0 * __this, Evidence_t_738265248_0 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Url::Equals(System.Object)
extern "C"  bool Url_Equals_m_729352705_0 (Url_t1700997830_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Url::GetHashCode()
extern "C"  int32_t Url_GetHashCode_m801986275_0 (Url_t1700997830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Url::ToString()
extern "C"  String_t* Url_ToString_m1945462787_0 (Url_t1700997830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Url::get_Value()
extern "C"  String_t* Url_get_Value_m1296164211_0 (Url_t1700997830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Url::Prepare(System.String)
extern "C"  String_t* Url_Prepare_m_1820708272_0 (Url_t1700997830_0 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
