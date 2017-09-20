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
// System.Collections.Generic.List`1<System.String>
struct List_1_t_293602512_0;
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;
// UnityEngine.Analytics.IPlatformWrapper
struct IPlatformWrapper_t1050919888_0;

#include "mscorlib_System_Object_887538054.h"

// UnityEngine.Analytics.SessionConfig
struct  SessionConfig_t_995552961_0  : public Object_t
{
	// System.Boolean UnityEngine.Analytics.SessionConfig::m_AnalyticsEnabled
	bool ___m_AnalyticsEnabled_27;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Analytics.SessionConfig::m_Supports
	List_1_t_293602512_0 * ___m_Supports_28;
	// System.String UnityEngine.Analytics.SessionConfig::m_EventsEndPoint
	String_t* ___m_EventsEndPoint_29;
	// System.String UnityEngine.Analytics.SessionConfig::m_ConfigEndPoint
	String_t* ___m_ConfigEndPoint_30;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_RequestNumberOfEvents
	int32_t ___m_RequestNumberOfEvents_31;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_MaxNumberOfEventInGroup
	int32_t ___m_MaxNumberOfEventInGroup_32;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_MaxTimeoutForGrouping
	int32_t ___m_MaxTimeoutForGrouping_33;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_MaxNumberOfEventInQueue
	int32_t ___m_MaxNumberOfEventInQueue_34;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_ResumeTimeoutInMillSeconds
	int32_t ___m_ResumeTimeoutInMillSeconds_35;
	// System.Int32[] UnityEngine.Analytics.SessionConfig::m_DispatcherWaitTimeInSeconds
	Int32U5BU5D_t1872284309_0* ___m_DispatcherWaitTimeInSeconds_36;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_MaxAppIdSize
	int32_t ___m_MaxAppIdSize_37;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_MaxUserIdSize
	int32_t ___m_MaxUserIdSize_38;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_MaxCurrencySize
	int32_t ___m_MaxCurrencySize_39;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_MaxProductIdSize
	int32_t ___m_MaxProductIdSize_40;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_MaxCustomEventNameSize
	int32_t ___m_MaxCustomEventNameSize_41;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_CustomEventMaxEventPerHour
	int32_t ___m_CustomEventMaxEventPerHour_42;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_CustomEventMaxNumberOfItems
	int32_t ___m_CustomEventMaxNumberOfItems_43;
	// System.Int32 UnityEngine.Analytics.SessionConfig::m_CustomEventMaxTotalItemsSize
	int32_t ___m_CustomEventMaxTotalItemsSize_44;
	// UnityEngine.Analytics.IPlatformWrapper UnityEngine.Analytics.SessionConfig::m_PlatformWrapper
	Object_t * ___m_PlatformWrapper_45;
};
