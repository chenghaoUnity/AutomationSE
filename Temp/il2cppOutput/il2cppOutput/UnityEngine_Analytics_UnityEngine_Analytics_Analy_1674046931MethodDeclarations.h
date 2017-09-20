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

// UnityEngine.Analytics.AnalyticsCloudService
struct AnalyticsCloudService_t_1674046931_0;
// System.String
struct String_t;
// UnityEngine.Cloud.Service.CloudServiceConfig
struct CloudServiceConfig_t49438045_0;
struct CloudServiceConfig_t49438045_0_marshaled;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t_1640843327_0;
// UnityEngine.Analytics.ICloudServiceListener
struct ICloudServiceListener_t_166491548_0;
// System.Action`4<System.String,System.String,System.Boolean,System.Int32>
struct Action_4_t_1118641071_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Cloud_Service_CloudEventFla_83253561.h"

// System.Void UnityEngine.Analytics.AnalyticsCloudService::.ctor()
extern "C"  void AnalyticsCloudService__ctor_m2044996099_0 (AnalyticsCloudService_t_1674046931_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::Initialize(System.String)
extern "C"  bool AnalyticsCloudService_Initialize_m860037127_0 (AnalyticsCloudService_t_1674046931_0 * __this, String_t* ___projectId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::StartEventHandler(System.String,System.Int32,System.Int32)
extern "C"  bool AnalyticsCloudService_StartEventHandler_m356483577_0 (AnalyticsCloudService_t_1674046931_0 * __this, String_t* ___sessionInfo, int32_t ___maxNumberOfEventInQueue, int32_t ___maxEventTimeoutInSec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::PauseEventHandler(System.Boolean)
extern "C"  bool AnalyticsCloudService_PauseEventHandler_m337768724_0 (AnalyticsCloudService_t_1674046931_0 * __this, bool ___flushEvents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::StopEventHandler()
extern "C"  bool AnalyticsCloudService_StopEventHandler_m_1623325763_0 (AnalyticsCloudService_t_1674046931_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::StartEventDispatcher(UnityEngine.Cloud.Service.CloudServiceConfig,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  bool AnalyticsCloudService_StartEventDispatcher_m_1996145704_0 (AnalyticsCloudService_t_1674046931_0 * __this, CloudServiceConfig_t49438045_0 * ___serviceConfig, Dictionary_2_t_1640843327_0 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::PauseEventDispatcher()
extern "C"  bool AnalyticsCloudService_PauseEventDispatcher_m204734486_0 (AnalyticsCloudService_t_1674046931_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::StopEventDispatcher()
extern "C"  bool AnalyticsCloudService_StopEventDispatcher_m_7134538_0 (AnalyticsCloudService_t_1674046931_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.AnalyticsCloudService::ResetNetworkRetryIndex()
extern "C"  void AnalyticsCloudService_ResetNetworkRetryIndex_m823422698_0 (AnalyticsCloudService_t_1674046931_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::QueueEvent(System.String,UnityEngine.Cloud.Service.CloudEventFlags)
extern "C"  bool AnalyticsCloudService_QueueEvent_m1708314721_0 (AnalyticsCloudService_t_1674046931_0 * __this, String_t* ___eventData, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::SaveFileFromServer(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.Analytics.ICloudServiceListener,System.Action`4<System.String,System.String,System.Boolean,System.Int32>)
extern "C"  bool AnalyticsCloudService_SaveFileFromServer_m2014834039_0 (AnalyticsCloudService_t_1674046931_0 * __this, String_t* ___fileName, String_t* ___url, Dictionary_2_t_1640843327_0 * ___headers, Object_t * ___listener, Action_4_t_1118641071_0 * ___doneMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.AnalyticsCloudService::SaveFile(System.String,System.String)
extern "C"  bool AnalyticsCloudService_SaveFile_m80143642_0 (AnalyticsCloudService_t_1674046931_0 * __this, String_t* ___fileName, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.AnalyticsCloudService::RestoreFile(System.String)
extern "C"  String_t* AnalyticsCloudService_RestoreFile_m_1762737324_0 (AnalyticsCloudService_t_1674046931_0 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.AnalyticsCloudService::get_serviceFolderName()
extern "C"  String_t* AnalyticsCloudService_get_serviceFolderName_m361281257_0 (AnalyticsCloudService_t_1674046931_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
