#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;

#include "mscorlib_System_Object_887538054.h"

// UnityEngine.Cloud.Service.CloudServiceConfig
struct  CloudServiceConfig_t49438045_0  : public Object_t
{
	// System.Int32 UnityEngine.Cloud.Service.CloudServiceConfig::m_MaxNumberOfEventInGroup
	int32_t ___m_MaxNumberOfEventInGroup_0;
	// System.String UnityEngine.Cloud.Service.CloudServiceConfig::m_SessionHeaderName
	String_t* ___m_SessionHeaderName_1;
	// System.String UnityEngine.Cloud.Service.CloudServiceConfig::m_EventsHeaderName
	String_t* ___m_EventsHeaderName_2;
	// System.String UnityEngine.Cloud.Service.CloudServiceConfig::m_EventsEndPoint
	String_t* ___m_EventsEndPoint_3;
	// System.Int32[] UnityEngine.Cloud.Service.CloudServiceConfig::m_NetworkFailureRetryTimeoutInSec
	Int32U5BU5D_t1872284309_0* ___m_NetworkFailureRetryTimeoutInSec_4;
};
// Native definition for marshalling of: UnityEngine.Cloud.Service.CloudServiceConfig
struct CloudServiceConfig_t49438045_0_marshaled
{
	int32_t ___m_MaxNumberOfEventInGroup_0;
	char* ___m_SessionHeaderName_1;
	char* ___m_EventsHeaderName_2;
	char* ___m_EventsEndPoint_3;
	int32_t* ___m_NetworkFailureRetryTimeoutInSec_4;
};
