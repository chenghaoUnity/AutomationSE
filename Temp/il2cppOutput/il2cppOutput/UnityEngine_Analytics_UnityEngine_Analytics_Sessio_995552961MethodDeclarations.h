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

// UnityEngine.Analytics.SessionConfig
struct SessionConfig_t_995552961_0;
// UnityEngine.Analytics.IPlatformWrapper
struct IPlatformWrapper_t1050919888_0;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;
// UnityEngine.Analytics.SessionValues
struct SessionValues_t_464573665_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Analytics.SessionConfig::.ctor(UnityEngine.Analytics.IPlatformWrapper,System.String,System.String)
extern "C"  void SessionConfig__ctor_m_43666189_0 (SessionConfig_t_995552961_0 * __this, Object_t * ___platformWrapper, String_t* ___configUrl, String_t* ___eventUrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionConfig::get_analyticsEnabled()
extern "C"  bool SessionConfig_get_analyticsEnabled_m_117916063_0 (SessionConfig_t_995552961_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.SessionConfig::get_eventsEndPoint()
extern "C"  String_t* SessionConfig_get_eventsEndPoint_m1594392135_0 (SessionConfig_t_995552961_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.SessionConfig::get_configEndPoint()
extern "C"  String_t* SessionConfig_get_configEndPoint_m1413366064_0 (SessionConfig_t_995552961_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_requestNumberOfEvents()
extern "C"  int32_t SessionConfig_get_requestNumberOfEvents_m449794846_0 (SessionConfig_t_995552961_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_maxNumberOfEventInGroup()
extern "C"  int32_t SessionConfig_get_maxNumberOfEventInGroup_m1779588410_0 (SessionConfig_t_995552961_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_maxTimeoutForGrouping()
extern "C"  int32_t SessionConfig_get_maxTimeoutForGrouping_m_1673047547_0 (SessionConfig_t_995552961_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_maxNumberOfEventInQueue()
extern "C"  int32_t SessionConfig_get_maxNumberOfEventInQueue_m2141332300_0 (SessionConfig_t_995552961_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_resumeTimeoutInMillSeconds()
extern "C"  int32_t SessionConfig_get_resumeTimeoutInMillSeconds_m_1402891146_0 (SessionConfig_t_995552961_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Analytics.SessionConfig::get_dispatcherWaitTimeInSeconds()
extern "C"  Int32U5BU5D_t1872284309_0* SessionConfig_get_dispatcherWaitTimeInSeconds_m1078480645_0 (SessionConfig_t_995552961_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_customEventMaxEventPerHour()
extern "C"  int32_t SessionConfig_get_customEventMaxEventPerHour_m1982982510_0 (SessionConfig_t_995552961_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_maxAppIdSize()
extern "C"  int32_t SessionConfig_get_maxAppIdSize_m102819813_0 (SessionConfig_t_995552961_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_maxUserIdSize()
extern "C"  int32_t SessionConfig_get_maxUserIdSize_m_1099728223_0 (SessionConfig_t_995552961_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_maxCustomEventNameSize()
extern "C"  int32_t SessionConfig_get_maxCustomEventNameSize_m_1310674467_0 (SessionConfig_t_995552961_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_maxCurrencySize()
extern "C"  int32_t SessionConfig_get_maxCurrencySize_m1542413804_0 (SessionConfig_t_995552961_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_maxProductIdSize()
extern "C"  int32_t SessionConfig_get_maxProductIdSize_m1603780915_0 (SessionConfig_t_995552961_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_customEventMaxNumberOfItems()
extern "C"  int32_t SessionConfig_get_customEventMaxNumberOfItems_m119497947_0 (SessionConfig_t_995552961_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionConfig::get_customEventMaxTotalItemsSize()
extern "C"  int32_t SessionConfig_get_customEventMaxTotalItemsSize_m_1458714940_0 (SessionConfig_t_995552961_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionConfig::Restore(System.String)
extern "C"  bool SessionConfig_Restore_m_191515857_0 (SessionConfig_t_995552961_0 * __this, String_t* ___jsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionConfig::RestoreAnalyticsConfig(UnityEngine.Analytics.SessionValues)
extern "C"  void SessionConfig_RestoreAnalyticsConfig_m_1004981428_0 (SessionConfig_t_995552961_0 * __this, SessionValues_t_464573665_0 * ___analyticsVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionConfig::RestoreEventsConfig(UnityEngine.Analytics.SessionValues)
extern "C"  void SessionConfig_RestoreEventsConfig_m178075489_0 (SessionConfig_t_995552961_0 * __this, SessionValues_t_464573665_0 * ___eventsVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionConfig::RestoreCustomEventConfig(UnityEngine.Analytics.SessionValues)
extern "C"  void SessionConfig_RestoreCustomEventConfig_m_727764407_0 (SessionConfig_t_995552961_0 * __this, SessionValues_t_464573665_0 * ___customEventVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionConfig::RestoreSessionConfig(UnityEngine.Analytics.SessionValues)
extern "C"  void SessionConfig_RestoreSessionConfig_m_811429572_0 (SessionConfig_t_995552961_0 * __this, SessionValues_t_464573665_0 * ___sessionVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionConfig::RestoreGroupingConfig(UnityEngine.Analytics.SessionValues)
extern "C"  void SessionConfig_RestoreGroupingConfig_m1944902711_0 (SessionConfig_t_995552961_0 * __this, SessionValues_t_464573665_0 * ___groupingVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionConfig::RestoreLimitsConfig(UnityEngine.Analytics.SessionValues)
extern "C"  void SessionConfig_RestoreLimitsConfig_m613524226_0 (SessionConfig_t_995552961_0 * __this, SessionValues_t_464573665_0 * ___stringLimitsVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
