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

// System.Net.Authorization
struct Authorization_t1909147139_0;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t348317594_0;
// System.Net.ICredentials
struct ICredentials_t359442962_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.AuthenticationManager::.cctor()
extern "C"  void AuthenticationManager__cctor_m_161734730_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::EnsureModules()
extern "C"  void AuthenticationManager_EnsureModules_m_471170274_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t1909147139_0 * AuthenticationManager_Authenticate_m926148532_0 (Object_t * __this /* static, unused */, String_t* ___challenge, WebRequest_t348317594_0 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::DoAuthenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t1909147139_0 * AuthenticationManager_DoAuthenticate_m_546777111_0 (Object_t * __this /* static, unused */, String_t* ___challenge, WebRequest_t348317594_0 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t1909147139_0 * AuthenticationManager_PreAuthenticate_m_1752261735_0 (Object_t * __this /* static, unused */, WebRequest_t348317594_0 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
