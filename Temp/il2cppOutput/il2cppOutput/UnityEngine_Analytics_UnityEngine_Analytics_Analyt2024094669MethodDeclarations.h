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

// UnityEngine.Analytics.AnalyticsEvent
struct AnalyticsEvent_t2024094669_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t379315588_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Cloud_Service_CloudEventFla_83253561.h"

// System.Void UnityEngine.Analytics.AnalyticsEvent::.ctor()
extern "C"  void AnalyticsEvent__ctor_m_415492375_0 (AnalyticsEvent_t2024094669_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsEvent::.ctor(System.String,UnityEngine.Cloud.Service.CloudEventFlags)
extern "C"  void AnalyticsEvent__ctor_m_128012564_0 (AnalyticsEvent_t2024094669_0 * __this, String_t* ___eventName, int32_t ___eventFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Cloud.Service.CloudEventFlags UnityEngine.Analytics.AnalyticsEvent::get_flags()
extern "C"  int32_t AnalyticsEvent_get_flags_m_1295280085_0 (AnalyticsEvent_t2024094669_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsEvent::SetParameter(System.String,System.Object)
extern "C"  void AnalyticsEvent_SetParameter_m_30941650_0 (AnalyticsEvent_t2024094669_0 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Analytics.AnalyticsEvent::GetParams()
extern "C"  Object_t* AnalyticsEvent_GetParams_m_186321370_0 (AnalyticsEvent_t2024094669_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.AnalyticsEvent::ToStringJSON()
extern "C"  String_t* AnalyticsEvent_ToStringJSON_m_1485507982_0 (AnalyticsEvent_t2024094669_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsEvent::get_HighPriority()
extern "C"  bool AnalyticsEvent_get_HighPriority_m1619944576_0 (AnalyticsEvent_t2024094669_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsEvent::get_CacheImmediately()
extern "C"  bool AnalyticsEvent_get_CacheImmediately_m610816310_0 (AnalyticsEvent_t2024094669_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
