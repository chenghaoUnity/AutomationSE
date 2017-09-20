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

// UnityEngine.Analytics.Experimental.Tracker.StandardEventPayload
struct StandardEventPayload_t_1443188717_0;
// UnityEngine.Analytics.Experimental.Tracker.AnalyticsEventParamListContainer
struct AnalyticsEventParamListContainer_t2084363244_0;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t379315588_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Analy_1320671926.h"

// System.Void UnityEngine.Analytics.Experimental.Tracker.StandardEventPayload::.ctor()
extern "C"  void StandardEventPayload__ctor_m_949908259_0 (StandardEventPayload_t_1443188717_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.Experimental.Tracker.StandardEventPayload::.cctor()
extern "C"  void StandardEventPayload__cctor_m135518832_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.Experimental.Tracker.AnalyticsEventParamListContainer UnityEngine.Analytics.Experimental.Tracker.StandardEventPayload::get_parameters()
extern "C"  AnalyticsEventParamListContainer_t2084363244_0 * StandardEventPayload_get_parameters_m_597927538_0 (StandardEventPayload_t_1443188717_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.Experimental.Tracker.StandardEventPayload::get_name()
extern "C"  String_t* StandardEventPayload_get_name_m992231544_0 (StandardEventPayload_t_1443188717_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.Experimental.Tracker.StandardEventPayload::set_name(System.String)
extern "C"  void StandardEventPayload_set_name_m107439987_0 (StandardEventPayload_t_1443188717_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.Tracker.StandardEventPayload::Send()
extern "C"  int32_t StandardEventPayload_Send_m1235421824_0 (StandardEventPayload_t_1443188717_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Analytics.Experimental.Tracker.StandardEventPayload::GetParameters()
extern "C"  Object_t* StandardEventPayload_GetParameters_m_1714376040_0 (StandardEventPayload_t_1443188717_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.Experimental.Tracker.StandardEventPayload::IsCustomDataValid()
extern "C"  bool StandardEventPayload_IsCustomDataValid_m_2525850_0 (StandardEventPayload_t_1443188717_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.Experimental.Tracker.StandardEventPayload::IsRequiredDataValid()
extern "C"  bool StandardEventPayload_IsRequiredDataValid_m1943630712_0 (StandardEventPayload_t_1443188717_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
