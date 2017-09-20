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

// System.Net.CookieContainer
struct CookieContainer_t1416428935_0;
// System.Net.Cookie
struct Cookie_t89484314_0;
// System.String
struct String_t;
// System.Uri
struct Uri_t_27263938_0;
// System.Net.CookieCollection
struct CookieCollection_t_926933416_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.CookieContainer::.ctor()
extern "C"  void CookieContainer__ctor_m1858224687_0 (CookieContainer_t1416428935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::AddCookie(System.Net.Cookie)
extern "C"  void CookieContainer_AddCookie_m1415598700_0 (CookieContainer_t1416428935_0 * __this, Cookie_t89484314_0 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieContainer::CountDomain(System.String)
extern "C"  int32_t CookieContainer_CountDomain_m338866930_0 (CookieContainer_t1416428935_0 * __this, String_t* ___domain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::RemoveOldest(System.String)
extern "C"  void CookieContainer_RemoveOldest_m_532994582_0 (CookieContainer_t1416428935_0 * __this, String_t* ___domain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::CheckExpiration()
extern "C"  void CookieContainer_CheckExpiration_m_241336220_0 (CookieContainer_t1416428935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Cook(System.Uri,System.Net.Cookie)
extern "C"  void CookieContainer_Cook_m_1765159736_0 (CookieContainer_t1416428935_0 * __this, Uri_t_27263938_0 * ___uri, Cookie_t89484314_0 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Add(System.Uri,System.Net.Cookie)
extern "C"  void CookieContainer_Add_m_1740553863_0 (CookieContainer_t1416428935_0 * __this, Uri_t_27263938_0 * ___uri, Cookie_t89484314_0 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CookieContainer::GetCookieHeader(System.Uri)
extern "C"  String_t* CookieContainer_GetCookieHeader_m710965252_0 (CookieContainer_t1416428935_0 * __this, Uri_t_27263938_0 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::CheckDomain(System.String,System.String,System.Boolean)
extern "C"  bool CookieContainer_CheckDomain_m1437975458_0 (Object_t * __this /* static, unused */, String_t* ___domain, String_t* ___host, bool ___exact, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.CookieCollection System.Net.CookieContainer::GetCookies(System.Uri)
extern "C"  CookieCollection_t_926933416_0 * CookieContainer_GetCookies_m68052290_0 (CookieContainer_t1416428935_0 * __this, Uri_t_27263938_0 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::IsNullOrEmpty(System.String)
extern "C"  bool CookieContainer_IsNullOrEmpty_m1462660146_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
