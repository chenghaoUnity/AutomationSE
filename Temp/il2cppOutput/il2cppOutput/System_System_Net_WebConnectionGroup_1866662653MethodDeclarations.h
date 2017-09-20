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

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t_1866662653_0;
// System.Net.ServicePoint
struct ServicePoint_t1961884333_0;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t_192777508_0;
// System.Net.HttpWebRequest
struct HttpWebRequest_t_319555179_0;
// System.Collections.Queue
struct Queue_t_1070229187_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C"  void WebConnectionGroup__ctor_m1503299254_0 (WebConnectionGroup_t_1866662653_0 * __this, ServicePoint_t1961884333_0 * ___sPoint, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C"  WebConnection_t_192777508_0 * WebConnectionGroup_GetConnection_m_1233755069_0 (WebConnectionGroup_t_1866662653_0 * __this, HttpWebRequest_t_319555179_0 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C"  void WebConnectionGroup_PrepareSharingNtlm_m_15043094_0 (Object_t * __this /* static, unused */, WebConnection_t_192777508_0 * ___cnc, HttpWebRequest_t_319555179_0 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C"  WebConnection_t_192777508_0 * WebConnectionGroup_CreateOrReuseConnection_m1829131780_0 (WebConnectionGroup_t_1866662653_0 * __this, HttpWebRequest_t_319555179_0 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C"  Queue_t_1070229187_0 * WebConnectionGroup_get_Queue_m318446937_0 (WebConnectionGroup_t_1866662653_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
