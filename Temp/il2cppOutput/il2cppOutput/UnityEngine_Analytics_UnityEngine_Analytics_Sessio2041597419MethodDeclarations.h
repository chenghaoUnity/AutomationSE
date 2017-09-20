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

// UnityEngine.Analytics.SessionInfo
struct SessionInfo_t2041597419_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Analytics.SessionInfo::.ctor(System.String,System.String,System.String)
extern "C"  void SessionInfo__ctor_m1747103957_0 (SessionInfo_t2041597419_0 * __this, String_t* ___appId, String_t* ___userId, String_t* ___platformName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.SessionInfo::get_appId()
extern "C"  String_t* SessionInfo_get_appId_m_96082471_0 (SessionInfo_t2041597419_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionInfo::set_appId(System.String)
extern "C"  void SessionInfo_set_appId_m1875051648_0 (SessionInfo_t2041597419_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.SessionInfo::get_userId()
extern "C"  String_t* SessionInfo_get_userId_m_97380213_0 (SessionInfo_t2041597419_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionInfo::set_userId(System.String)
extern "C"  void SessionInfo_set_userId_m_268430208_0 (SessionInfo_t2041597419_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.Analytics.SessionInfo::get_sessionId()
extern "C"  int64_t SessionInfo_get_sessionId_m_1121727652_0 (SessionInfo_t2041597419_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionInfo::set_sessionId(System.Int64)
extern "C"  void SessionInfo_set_sessionId_m_364308599_0 (SessionInfo_t2041597419_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.SessionInfo::get_sdkVersion()
extern "C"  String_t* SessionInfo_get_sdkVersion_m1768762755_0 (SessionInfo_t2041597419_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionInfo::set_sdkVersion(System.String)
extern "C"  void SessionInfo_set_sdkVersion_m819500552_0 (SessionInfo_t2041597419_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionInfo::get_debugDevice()
extern "C"  bool SessionInfo_get_debugDevice_m401416057_0 (SessionInfo_t2041597419_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionInfo::set_debugDevice(System.Boolean)
extern "C"  void SessionInfo_set_debugDevice_m294788454_0 (SessionInfo_t2041597419_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.SessionInfo::get_platformName()
extern "C"  String_t* SessionInfo_get_platformName_m562050787_0 (SessionInfo_t2041597419_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionInfo::set_platformName(System.String)
extern "C"  void SessionInfo_set_platformName_m_854556056_0 (SessionInfo_t2041597419_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.SessionInfo::ToStringJson()
extern "C"  String_t* SessionInfo_ToStringJson_m_1195791664_0 (SessionInfo_t2041597419_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
