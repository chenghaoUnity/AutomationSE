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

// UnityEngine.Analytics.Experimental.Tracker.TriggerRule
struct TriggerRule_t1221241714_0;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Analytics.Experimental.Tracker.TriggerRule::.ctor()
extern "C"  void TriggerRule__ctor_m_1428309084_0 (TriggerRule_t1221241714_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.Experimental.Tracker.TriggerRule::Test()
extern "C"  bool TriggerRule_Test_m_506347290_0 (TriggerRule_t1221241714_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.Experimental.Tracker.TriggerRule::TestByObject(System.Object)
extern "C"  bool TriggerRule_TestByObject_m_1657251304_0 (TriggerRule_t1221241714_0 * __this, Object_t * ___currentValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.Experimental.Tracker.TriggerRule::TestByEnum(System.String)
extern "C"  bool TriggerRule_TestByEnum_m_2073970044_0 (TriggerRule_t1221241714_0 * __this, String_t* ___currentValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.Experimental.Tracker.TriggerRule::TestByString(System.String)
extern "C"  bool TriggerRule_TestByString_m_1908474764_0 (TriggerRule_t1221241714_0 * __this, String_t* ___currentValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.Experimental.Tracker.TriggerRule::TestByBool(System.Boolean)
extern "C"  bool TriggerRule_TestByBool_m1058651678_0 (TriggerRule_t1221241714_0 * __this, bool ___currentValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.Experimental.Tracker.TriggerRule::TestByDouble(System.Double)
extern "C"  bool TriggerRule_TestByDouble_m_842316556_0 (TriggerRule_t1221241714_0 * __this, double ___currentValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.Experimental.Tracker.TriggerRule::SafeEquals(System.Double,System.Double)
extern "C"  bool TriggerRule_SafeEquals_m_85976322_0 (TriggerRule_t1221241714_0 * __this, double ___double1, double ___double2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Analytics.Experimental.Tracker.TriggerRule::GetDouble(System.Object)
extern "C"  double TriggerRule_GetDouble_m_1409493170_0 (TriggerRule_t1221241714_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
