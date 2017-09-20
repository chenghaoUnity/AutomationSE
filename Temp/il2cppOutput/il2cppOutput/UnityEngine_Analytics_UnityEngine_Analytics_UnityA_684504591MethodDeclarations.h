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

// UnityEngine.Analytics.UnityAnalyticsNotSupportedSession
struct UnityAnalyticsNotSupportedSession_t_684504591_0;
// System.String
struct String_t;
// UnityEngine.Analytics.ICloudService
struct ICloudService_t_1392578160_0;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t379315588_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Analy_1320671926.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Gender_925422374.h"
#include "mscorlib_System_Decimal1458036598.h"

// System.Void UnityEngine.Analytics.UnityAnalyticsNotSupportedSession::.ctor()
extern "C"  void UnityAnalyticsNotSupportedSession__ctor_m_299416769_0 (UnityAnalyticsNotSupportedSession_t_684504591_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.UnityAnalyticsNotSupportedSession::GetPathName()
extern "C"  String_t* UnityAnalyticsNotSupportedSession_GetPathName_m_1920297018_0 (UnityAnalyticsNotSupportedSession_t_684504591_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsNotSupportedSession::StartWithAppId(System.String,UnityEngine.Analytics.ICloudService,System.String,System.String)
extern "C"  int32_t UnityAnalyticsNotSupportedSession_StartWithAppId_m22592754_0 (UnityAnalyticsNotSupportedSession_t_684504591_0 * __this, String_t* ___appId, Object_t * ___cloudService, String_t* ___configUrl, String_t* ___eventUrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsNotSupportedSession::SetCustomUserId(System.String)
extern "C"  int32_t UnityAnalyticsNotSupportedSession_SetCustomUserId_m472853501_0 (UnityAnalyticsNotSupportedSession_t_684504591_0 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsNotSupportedSession::SetUserGender(UnityEngine.Analytics.Gender)
extern "C"  int32_t UnityAnalyticsNotSupportedSession_SetUserGender_m_1863255686_0 (UnityAnalyticsNotSupportedSession_t_684504591_0 * __this, int32_t ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsNotSupportedSession::SetUserBirthYear(System.Int32)
extern "C"  int32_t UnityAnalyticsNotSupportedSession_SetUserBirthYear_m218429302_0 (UnityAnalyticsNotSupportedSession_t_684504591_0 * __this, int32_t ___birthYear, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsNotSupportedSession::Transaction(System.String,System.Decimal,System.String,System.String,System.String)
extern "C"  int32_t UnityAnalyticsNotSupportedSession_Transaction_m789706128_0 (UnityAnalyticsNotSupportedSession_t_684504591_0 * __this, String_t* ___productId, Decimal_t1458036598_0  ___amount, String_t* ___currency, String_t* ___receiptPurchaseData, String_t* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsNotSupportedSession::SendCustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t UnityAnalyticsNotSupportedSession_SendCustomEvent_m1245603243_0 (UnityAnalyticsNotSupportedSession_t_684504591_0 * __this, String_t* ___customEventName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
