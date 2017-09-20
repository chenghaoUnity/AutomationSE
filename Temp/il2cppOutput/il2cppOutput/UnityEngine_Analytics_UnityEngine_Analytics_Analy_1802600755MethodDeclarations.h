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

// System.String
struct String_t;
// UnityEngine.Analytics.ICloudService
struct ICloudService_t_1392578160_0;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t379315588_0;
// UnityEngine.Analytics.IUnityAnalyticsSession
struct IUnityAnalyticsSession_t1546088693_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Analy_1320671926.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Gender_925422374.h"
#include "mscorlib_System_Decimal1458036598.h"

// System.Void UnityEngine.Analytics.Analytics::AutoStartUnityAnalytics()
extern "C"  void Analytics_AutoStartUnityAnalytics_m1670054757_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::InternalStartSession(System.String)
extern "C"  int32_t Analytics_InternalStartSession_m_1463523841_0 (Object_t * __this /* static, unused */, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::InternalStartSession(System.String,UnityEngine.Analytics.ICloudService,System.String,System.String)
extern "C"  int32_t Analytics_InternalStartSession_m2098665529_0 (Object_t * __this /* static, unused */, String_t* ___appId, Object_t * ___cloudService, String_t* ___configUrl, String_t* ___eventUrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.Analytics::GetPathName()
extern "C"  String_t* Analytics_GetPathName_m_983539862_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SetUserId(System.String)
extern "C"  int32_t Analytics_SetUserId_m_614152438_0 (Object_t * __this /* static, unused */, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SetUserGender(UnityEngine.Analytics.Gender)
extern "C"  int32_t Analytics_SetUserGender_m2131258910_0 (Object_t * __this /* static, unused */, int32_t ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SetUserBirthYear(System.Int32)
extern "C"  int32_t Analytics_SetUserBirthYear_m2016987218_0 (Object_t * __this /* static, unused */, int32_t ___birthYear, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::Transaction(System.String,System.Decimal,System.String)
extern "C"  int32_t Analytics_Transaction_m950268092_0 (Object_t * __this /* static, unused */, String_t* ___productId, Decimal_t1458036598_0  ___amount, String_t* ___currency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::Transaction(System.String,System.Decimal,System.String,System.String,System.String)
extern "C"  int32_t Analytics_Transaction_m_1539246540_0 (Object_t * __this /* static, unused */, String_t* ___productId, Decimal_t1458036598_0  ___amount, String_t* ___currency, String_t* ___receiptPurchaseData, String_t* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::CustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t Analytics_CustomEvent_m_1939501473_0 (Object_t * __this /* static, unused */, String_t* ___customEventName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.IUnityAnalyticsSession UnityEngine.Analytics.Analytics::GetSingleton()
extern "C"  Object_t * Analytics_GetSingleton_m_1067429454_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
