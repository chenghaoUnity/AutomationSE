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

// System.Net.ServicePoint
struct ServicePoint_t1961884333_0;
// System.Uri
struct Uri_t_27263938_0;
// System.Version
struct Version_t267380989_0;
// System.Collections.Hashtable
struct Hashtable_t_2004451924_0;
// System.Net.IPHostEntry
struct IPHostEntry_t_1615694227_0;
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t_1866662653_0;
// System.String
struct String_t;
// System.EventHandler
struct EventHandler_t_1938407861_0;
// System.Net.HttpWebRequest
struct HttpWebRequest_t_319555179_0;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1524084820_0;
// System.Net.Sockets.Socket
struct Socket_t771039639_0;
// System.Net.IPEndPoint
struct IPEndPoint_t_1780335022_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_818288618.h"

// System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
extern "C"  void ServicePoint__ctor_m_50822158_0 (ServicePoint_t1961884333_0 * __this, Uri_t_27263938_0 * ___uri, int32_t ___connectionLimit, int32_t ___maxIdleTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePoint::get_Address()
extern "C"  Uri_t_27263938_0 * ServicePoint_get_Address_m1466650202_0 (ServicePoint_t1961884333_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_ConnectionLimit()
extern "C"  int32_t ServicePoint_get_ConnectionLimit_m_1173895167_0 (ServicePoint_t1961884333_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_CurrentConnections()
extern "C"  int32_t ServicePoint_get_CurrentConnections_m1954016890_0 (ServicePoint_t1961884333_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.ServicePoint::get_IdleSince()
extern "C"  DateTime_t_818288618_0  ServicePoint_get_IdleSince_m_1025863565_0 (ServicePoint_t1961884333_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_IdleSince(System.DateTime)
extern "C"  void ServicePoint_set_IdleSince_m305314386_0 (ServicePoint_t1961884333_0 * __this, DateTime_t_818288618_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Net.ServicePoint::get_ProtocolVersion()
extern "C"  Version_t267380989_0 * ServicePoint_get_ProtocolVersion_m1049388570_0 (ServicePoint_t1961884333_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
extern "C"  void ServicePoint_set_Expect100Continue_m285998358_0 (ServicePoint_t1961884333_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseNagleAlgorithm()
extern "C"  bool ServicePoint_get_UseNagleAlgorithm_m_873246733_0 (ServicePoint_t1961884333_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
extern "C"  void ServicePoint_set_UseNagleAlgorithm_m_173857760_0 (ServicePoint_t1961884333_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_SendContinue()
extern "C"  bool ServicePoint_get_SendContinue_m_1513035385_0 (ServicePoint_t1961884333_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
extern "C"  void ServicePoint_set_SendContinue_m515260680_0 (ServicePoint_t1961884333_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UsesProxy()
extern "C"  bool ServicePoint_get_UsesProxy_m287961580_0 (ServicePoint_t1961884333_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
extern "C"  void ServicePoint_set_UsesProxy_m_608390055_0 (ServicePoint_t1961884333_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseConnect()
extern "C"  bool ServicePoint_get_UseConnect_m86082395_0 (ServicePoint_t1961884333_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
extern "C"  void ServicePoint_set_UseConnect_m_410967460_0 (ServicePoint_t1961884333_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_AvailableForRecycling()
extern "C"  bool ServicePoint_get_AvailableForRecycling_m_247353318_0 (ServicePoint_t1961884333_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.ServicePoint::get_Groups()
extern "C"  Hashtable_t_2004451924_0 * ServicePoint_get_Groups_m_1435149653_0 (ServicePoint_t1961884333_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.ServicePoint::get_HostEntry()
extern "C"  IPHostEntry_t_1615694227_0 * ServicePoint_get_HostEntry_m2097536138_0 (ServicePoint_t1961884333_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetVersion(System.Version)
extern "C"  void ServicePoint_SetVersion_m_824052126_0 (ServicePoint_t1961884333_0 * __this, Version_t267380989_0 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnectionGroup System.Net.ServicePoint::GetConnectionGroup(System.String)
extern "C"  WebConnectionGroup_t_1866662653_0 * ServicePoint_GetConnectionGroup_m1152498600_0 (ServicePoint_t1961884333_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.Net.ServicePoint::SendRequest(System.Net.HttpWebRequest,System.String)
extern "C"  EventHandler_t_1938407861_0 * ServicePoint_SendRequest_m_1620473485_0 (ServicePoint_t1961884333_0 * __this, HttpWebRequest_t_319555179_0 * ___request, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetCertificates(System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void ServicePoint_SetCertificates_m_478875949_0 (ServicePoint_t1961884333_0 * __this, X509Certificate_t1524084820_0 * ___client, X509Certificate_t1524084820_0 * ___server, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::CallEndPointDelegate(System.Net.Sockets.Socket,System.Net.IPEndPoint)
extern "C"  bool ServicePoint_CallEndPointDelegate_m_1043279174_0 (ServicePoint_t1961884333_0 * __this, Socket_t771039639_0 * ___sock, IPEndPoint_t_1780335022_0 * ___remote, const MethodInfo* method) IL2CPP_METHOD_ATTR;
