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

// UnityEngine.Cloud.Service.CloudServiceConfig
struct CloudServiceConfig_t49438045_0;
struct CloudServiceConfig_t49438045_0_marshaled;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Cloud.Service.CloudServiceConfig::.ctor()
extern "C"  void CloudServiceConfig__ctor_m745211993_0 (CloudServiceConfig_t49438045_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudServiceConfig::set_maxNumberOfEventInGroup(System.Int32)
extern "C"  void CloudServiceConfig_set_maxNumberOfEventInGroup_m_543232561_0 (CloudServiceConfig_t49438045_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudServiceConfig::set_sessionHeaderName(System.String)
extern "C"  void CloudServiceConfig_set_sessionHeaderName_m_1866979494_0 (CloudServiceConfig_t49438045_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudServiceConfig::set_eventsHeaderName(System.String)
extern "C"  void CloudServiceConfig_set_eventsHeaderName_m1058198153_0 (CloudServiceConfig_t49438045_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudServiceConfig::set_eventsEndPoint(System.String)
extern "C"  void CloudServiceConfig_set_eventsEndPoint_m47685164_0 (CloudServiceConfig_t49438045_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cloud.Service.CloudServiceConfig::set_networkFailureRetryTimeoutInSec(System.Int32[])
extern "C"  void CloudServiceConfig_set_networkFailureRetryTimeoutInSec_m2136758752_0 (CloudServiceConfig_t49438045_0 * __this, Int32U5BU5D_t1872284309_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CloudServiceConfig_t49438045_0_marshal(const CloudServiceConfig_t49438045_0& unmarshaled, CloudServiceConfig_t49438045_0_marshaled& marshaled);
extern "C" void CloudServiceConfig_t49438045_0_marshal_back(const CloudServiceConfig_t49438045_0_marshaled& marshaled, CloudServiceConfig_t49438045_0& unmarshaled);
extern "C" void CloudServiceConfig_t49438045_0_marshal_cleanup(CloudServiceConfig_t49438045_0_marshaled& marshaled);
