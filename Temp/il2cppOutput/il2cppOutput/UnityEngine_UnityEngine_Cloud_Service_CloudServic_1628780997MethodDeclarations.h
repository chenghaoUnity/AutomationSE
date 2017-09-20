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

// UnityEngine.Cloud.Service.CloudService
struct CloudService_t_1628780997_0;
struct CloudService_t_1628780997_0_marshaled;
// System.String
struct String_t;
// UnityEngine.Cloud.Service.CloudServiceConfig
struct CloudServiceConfig_t49438045_0;
struct CloudServiceConfig_t49438045_0_marshaled;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t_1640843327_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Cloud_Service_CloudServiceTy58668053.h"
#include "UnityEngine_UnityEngine_Cloud_Service_CloudEventFla_83253561.h"

// System.Void UnityEngine.Cloud.Service.CloudService::.ctor(UnityEngine.Cloud.Service.CloudServiceType)
extern "C"  void CloudService__ctor_m1908878424_0 (CloudService_t_1628780997_0 * __this, int32_t ___serviceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudService::InternalCreate(UnityEngine.Cloud.Service.CloudServiceType)
extern "C"  void CloudService_InternalCreate_m2046172255_0 (CloudService_t_1628780997_0 * __this, int32_t ___serviceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudService::InternalDestroy()
extern "C"  void CloudService_InternalDestroy_m_534621738_0 (CloudService_t_1628780997_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudService::Finalize()
extern "C"  void CloudService_Finalize_m_2045917433_0 (CloudService_t_1628780997_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudService::Dispose()
extern "C"  void CloudService_Dispose_m_309568264_0 (CloudService_t_1628780997_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::Initialize(System.String)
extern "C"  bool CloudService_Initialize_m1697171843_0 (CloudService_t_1628780997_0 * __this, String_t* ___projectId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::StartEventHandler(System.String,System.Int32,System.Int32)
extern "C"  bool CloudService_StartEventHandler_m131463165_0 (CloudService_t_1628780997_0 * __this, String_t* ___sessionInfo, int32_t ___maxNumberOfEventInQueue, int32_t ___maxEventTimeoutInSec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::PauseEventHandler(System.Boolean)
extern "C"  bool CloudService_PauseEventHandler_m_1888199024_0 (CloudService_t_1628780997_0 * __this, bool ___flushEvents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::StopEventHandler()
extern "C"  bool CloudService_StopEventHandler_m1885720001_0 (CloudService_t_1628780997_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::StartEventDispatcher(UnityEngine.Cloud.Service.CloudServiceConfig,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  bool CloudService_StartEventDispatcher_m_1445737388_0 (CloudService_t_1628780997_0 * __this, CloudServiceConfig_t49438045_0 * ___serviceConfig, Dictionary_2_t_1640843327_0 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::InternalStartEventDispatcher(UnityEngine.Cloud.Service.CloudServiceConfig,System.String[])
extern "C"  bool CloudService_InternalStartEventDispatcher_m1144791098_0 (CloudService_t_1628780997_0 * __this, CloudServiceConfig_t49438045_0 * ___serviceConfig, StringU5BU5D_t_816028754_0* ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::PauseEventDispatcher()
extern "C"  bool CloudService_PauseEventDispatcher_m278865946_0 (CloudService_t_1628780997_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::StopEventDispatcher()
extern "C"  bool CloudService_StopEventDispatcher_m_1528763854_0 (CloudService_t_1628780997_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudService::ResetNetworkRetryIndex()
extern "C"  void CloudService_ResetNetworkRetryIndex_m1630295154_0 (CloudService_t_1628780997_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::QueueEvent(System.String,UnityEngine.Cloud.Service.CloudEventFlags)
extern "C"  bool CloudService_QueueEvent_m_1488527651_0 (CloudService_t_1628780997_0 * __this, String_t* ___eventData, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::SaveFileFromServer(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object,System.String)
extern "C"  bool CloudService_SaveFileFromServer_m_2115794152_0 (CloudService_t_1628780997_0 * __this, String_t* ___fileName, String_t* ___url, Dictionary_2_t_1640843327_0 * ___headers, Object_t * ___d, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::InternalSaveFileFromServer(System.String,System.String,System.String[],System.Object,System.String)
extern "C"  bool CloudService_InternalSaveFileFromServer_m739695664_0 (CloudService_t_1628780997_0 * __this, String_t* ___fileName, String_t* ___url, StringU5BU5D_t_816028754_0* ___headers, Object_t * ___d, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Cloud.Service.CloudService::SaveFile(System.String,System.String)
extern "C"  bool CloudService_SaveFile_m_1913768810_0 (CloudService_t_1628780997_0 * __this, String_t* ___fileName, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Cloud.Service.CloudService::RestoreFile(System.String)
extern "C"  String_t* CloudService_RestoreFile_m_1933111742_0 (CloudService_t_1628780997_0 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Cloud.Service.CloudService::get_serviceFolderName()
extern "C"  String_t* CloudService_get_serviceFolderName_m_439876933_0 (CloudService_t_1628780997_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Cloud.Service.CloudService::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  StringU5BU5D_t_816028754_0* CloudService_FlattenedHeadersFrom_m_902112632_0 (Object_t * __this /* static, unused */, Dictionary_2_t_1640843327_0 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CloudService_t_1628780997_0_marshal(const CloudService_t_1628780997_0& unmarshaled, CloudService_t_1628780997_0_marshaled& marshaled);
extern "C" void CloudService_t_1628780997_0_marshal_back(const CloudService_t_1628780997_0_marshaled& marshaled, CloudService_t_1628780997_0& unmarshaled);
extern "C" void CloudService_t_1628780997_0_marshal_cleanup(CloudService_t_1628780997_0_marshaled& marshaled);
