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
// UnityEngine.Analytics.SessionConfig
struct SessionConfig_t_995552961_0;
// UnityEngine.Analytics.SessionValues
struct SessionValues_t_464573665_0;
// UnityEngine.Analytics.IPlatformWrapper
struct IPlatformWrapper_t1050919888_0;
// UnityEngine.Analytics.ICloudService
struct ICloudService_t_1392578160_0;
// UnityEngine.Cloud.Service.CloudServiceConfig
struct CloudServiceConfig_t49438045_0;
struct CloudServiceConfig_t49438045_0_marshaled;
// UnityEngine.Analytics.SessionInfo
struct SessionInfo_t2041597419_0;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t_1305703446_0;

#include "mscorlib_System_Object_887538054.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Sessio1974151999.h"

// UnityEngine.Analytics.SessionImpl
struct  SessionImpl_t2041596765_0  : public Object_t
{
	// UnityEngine.Analytics.SessionConfig UnityEngine.Analytics.SessionImpl::m_SessionConfig
	SessionConfig_t_995552961_0 * ___m_SessionConfig_5;
	// UnityEngine.Analytics.SessionValues UnityEngine.Analytics.SessionImpl::m_SessionValues
	SessionValues_t_464573665_0 * ___m_SessionValues_6;
	// UnityEngine.Analytics.IPlatformWrapper UnityEngine.Analytics.SessionImpl::m_PlatformWrapper
	Object_t * ___m_PlatformWrapper_7;
	// UnityEngine.Analytics.ICloudService UnityEngine.Analytics.SessionImpl::m_CloudService
	Object_t * ___m_CloudService_8;
	// UnityEngine.Cloud.Service.CloudServiceConfig UnityEngine.Analytics.SessionImpl::m_CloudServiceConfig
	CloudServiceConfig_t49438045_0 * ___m_CloudServiceConfig_9;
	// UnityEngine.Analytics.SessionInfo UnityEngine.Analytics.SessionImpl::m_SessionInfo
	SessionInfo_t2041597419_0 * ___m_SessionInfo_10;
	// System.String UnityEngine.Analytics.SessionImpl::m_UserId
	String_t* ___m_UserId_11;
	// System.String UnityEngine.Analytics.SessionImpl::m_AppId
	String_t* ___m_AppId_12;
	// System.Int64 UnityEngine.Analytics.SessionImpl::m_SessionStartTime
	int64_t ___m_SessionStartTime_13;
	// System.Int64 UnityEngine.Analytics.SessionImpl::m_SessionPauseTime
	int64_t ___m_SessionPauseTime_14;
	// System.Int64 UnityEngine.Analytics.SessionImpl::m_AppRunningSentTime
	int64_t ___m_AppRunningSentTime_15;
	// System.Int64 UnityEngine.Analytics.SessionImpl::m_AppSessionDuration
	int64_t ___m_AppSessionDuration_16;
	// System.Int64 UnityEngine.Analytics.SessionImpl::m_KeyStrokes
	int64_t ___m_KeyStrokes_17;
	// System.Int64 UnityEngine.Analytics.SessionImpl::m_ClickCount
	int64_t ___m_ClickCount_18;
	// UnityEngine.Analytics.SessionImpl/State UnityEngine.Analytics.SessionImpl::<state>k__BackingField
	int32_t ___U3CstateU3Ek__BackingField_19;
};
struct SessionImpl_t2041596765_0_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Analytics.SessionImpl::<>f__switch$map0
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24map0_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Analytics.SessionImpl::<>f__switch$map1
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24map1_21;
};
