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

// UnityEngine.Analytics.SessionImpl
struct SessionImpl_t2041596765_0;
// UnityEngine.Analytics.IPlatformWrapper
struct IPlatformWrapper_t1050919888_0;
// System.String
struct String_t;
// UnityEngine.Analytics.ICloudService
struct ICloudService_t_1392578160_0;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t379315588_0;
// UnityEngine.Analytics.AnalyticsEvent
struct AnalyticsEvent_t2024094669_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Sessio1974151999.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Analy_1320671926.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Gender_925422374.h"
#include "mscorlib_System_Decimal1458036598.h"

// System.Void UnityEngine.Analytics.SessionImpl::.ctor(UnityEngine.Analytics.IPlatformWrapper)
extern "C"  void SessionImpl__ctor_m875766109_0 (SessionImpl_t2041596765_0 * __this, Object_t * ___platformWrapper, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.SessionImpl/State UnityEngine.Analytics.SessionImpl::get_state()
extern "C"  int32_t SessionImpl_get_state_m_1986578413_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::set_state(UnityEngine.Analytics.SessionImpl/State)
extern "C"  void SessionImpl_set_state_m88015700_0 (SessionImpl_t2041596765_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionImpl::IsAnalyticsSupportedForPlatform()
extern "C"  bool SessionImpl_IsAnalyticsSupportedForPlatform_m_1051261583_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.SessionImpl::GetPathName()
extern "C"  String_t* SessionImpl_GetPathName_m501327066_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.SessionImpl::StartWithAppId(System.String,UnityEngine.Analytics.ICloudService,System.String,System.String)
extern "C"  int32_t SessionImpl_StartWithAppId_m1254564614_0 (SessionImpl_t2041596765_0 * __this, String_t* ___appId, Object_t * ___cloudService, String_t* ___configUrl, String_t* ___eventUrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.SessionImpl::SetCustomUserId(System.String)
extern "C"  int32_t SessionImpl_SetCustomUserId_m_811145111_0 (SessionImpl_t2041596765_0 * __this, String_t* ___customUserId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.SessionImpl::SetAdvertisingId(System.String,System.Boolean)
extern "C"  int32_t SessionImpl_SetAdvertisingId_m_207293030_0 (SessionImpl_t2041596765_0 * __this, String_t* ___advertisingId, bool ___trackingEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.SessionImpl::SetUserGender(UnityEngine.Analytics.Gender)
extern "C"  int32_t SessionImpl_SetUserGender_m_1602499442_0 (SessionImpl_t2041596765_0 * __this, int32_t ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.SessionImpl::SetUserBirthYear(System.Int32)
extern "C"  int32_t SessionImpl_SetUserBirthYear_m_1065569310_0 (SessionImpl_t2041596765_0 * __this, int32_t ___birthYear, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.SessionImpl::Transaction(System.String,System.Decimal,System.String,System.String,System.String)
extern "C"  int32_t SessionImpl_Transaction_m1821451428_0 (SessionImpl_t2041596765_0 * __this, String_t* ___productId, Decimal_t1458036598_0  ___amount, String_t* ___currency, String_t* ___receiptPurchaseData, String_t* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.SessionImpl::SendCustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t SessionImpl_SendCustomEvent_m_24592105_0 (SessionImpl_t2041596765_0 * __this, String_t* ___customEventName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionImpl::isStringWithinLimit(System.String,System.Int64)
extern "C"  bool SessionImpl_isStringWithinLimit_m_605834190_0 (SessionImpl_t2041596765_0 * __this, String_t* ___input, int64_t ___sizeLimit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::OnAppPause()
extern "C"  void SessionImpl_OnAppPause_m_53221851_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::OnAppQuit()
extern "C"  void SessionImpl_OnAppQuit_m_786259678_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::OnAppResume()
extern "C"  void SessionImpl_OnAppResume_m1035676416_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::OnClick()
extern "C"  void SessionImpl_OnClick_m1783341274_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::OnKey()
extern "C"  void SessionImpl_OnKey_m1617985585_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::OnLevelWasLoaded(System.Int32)
extern "C"  void SessionImpl_OnLevelWasLoaded_m_138841909_0 (SessionImpl_t2041596765_0 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::ResetSessionValues()
extern "C"  void SessionImpl_ResetSessionValues_m_989409318_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::SaveSessionValues()
extern "C"  void SessionImpl_SaveSessionValues_m1868356172_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::RestoreSessionValues()
extern "C"  void SessionImpl_RestoreSessionValues_m_358637381_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.SessionImpl::Initialize(System.String,System.String)
extern "C"  int32_t SessionImpl_Initialize_m_611501780_0 (SessionImpl_t2041596765_0 * __this, String_t* ___configUrl, String_t* ___eventUrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.SessionImpl::GenerateUUID()
extern "C"  String_t* SessionImpl_GenerateUUID_m1746716286_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.SessionImpl::GetUserId()
extern "C"  String_t* SessionImpl_GetUserId_m_271465584_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::StartSession(System.Boolean)
extern "C"  void SessionImpl_StartSession_m_1991771300_0 (SessionImpl_t2041596765_0 * __this, bool ___newSession, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::PauseSession()
extern "C"  void SessionImpl_PauseSession_m_1625002095_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::StopSession()
extern "C"  void SessionImpl_StopSession_m_1259457691_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::HandleSessionPause()
extern "C"  void SessionImpl_HandleSessionPause_m_2060352231_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionImpl::SessionElapsedSincePause()
extern "C"  bool SessionImpl_SessionElapsedSincePause_m264376381_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::QueueEvent(UnityEngine.Analytics.AnalyticsEvent)
extern "C"  void SessionImpl_QueueEvent_m_281391865_0 (SessionImpl_t2041596765_0 * __this, AnalyticsEvent_t2024094669_0 * ___playRMEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::QueueAppRunningEvent(System.Int32)
extern "C"  void SessionImpl_QueueAppRunningEvent_m1718623213_0 (SessionImpl_t2041596765_0 * __this, int32_t ___delayInSeconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.Analytics.SessionImpl::GenerateTransactionId()
extern "C"  int64_t SessionImpl_GenerateTransactionId_m943759494_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.Analytics.SessionImpl::CalculateCustomEventSize(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Boolean&)
extern "C"  int64_t SessionImpl_CalculateCustomEventSize_m_1245114873_0 (SessionImpl_t2041596765_0 * __this, Object_t* ___dict, bool* ___validData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionImpl::HandleCustomEventCount(System.Int64)
extern "C"  bool SessionImpl_HandleCustomEventCount_m288932027_0 (SessionImpl_t2041596765_0 * __this, int64_t ___limitCountPerHour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::OnAdvertisingIdentifierCallback(System.String,System.Boolean)
extern "C"  void SessionImpl_OnAdvertisingIdentifierCallback_m758311519_0 (SessionImpl_t2041596765_0 * __this, String_t* ___advertisingId, bool ___trackingEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionImpl::IsDebugDevice()
extern "C"  bool SessionImpl_IsDebugDevice_m1878304326_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionImpl::IsPlatformChangedValue(System.String,System.String&)
extern "C"  bool SessionImpl_IsPlatformChangedValue_m_204034813_0 (SessionImpl_t2041596765_0 * __this, String_t* ___typeName, String_t** ___outValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionImpl::IsPlatformChangedValue(System.String,System.Boolean&)
extern "C"  bool SessionImpl_IsPlatformChangedValue_m217648220_0 (SessionImpl_t2041596765_0 * __this, String_t* ___typeName, bool* ___outValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Analytics.SessionImpl::GetPlatformInfo(System.String)
extern "C"  Object_t * SessionImpl_GetPlatformInfo_m1495499013_0 (SessionImpl_t2041596765_0 * __this, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::UpdateAdvertisingInfo()
extern "C"  void SessionImpl_UpdateAdvertisingInfo_m225649626_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::LookForVersionChange()
extern "C"  void SessionImpl_LookForVersionChange_m930923887_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::PrepareCloudServiceConfig()
extern "C"  void SessionImpl_PrepareCloudServiceConfig_m_1804234374_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::RestoreConfig()
extern "C"  void SessionImpl_RestoreConfig_m_884114527_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::UpdateConfigFromServer()
extern "C"  void SessionImpl_UpdateConfigFromServer_m399047977_0 (SessionImpl_t2041596765_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionImpl::OnDoneSaveFileFromServer(System.String,System.String,System.Boolean,System.Int32)
extern "C"  void SessionImpl_OnDoneSaveFileFromServer_m286303552_0 (SessionImpl_t2041596765_0 * __this, String_t* ___fileName, String_t* ___etag, bool ___fileUpdated, int32_t ___responseStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
