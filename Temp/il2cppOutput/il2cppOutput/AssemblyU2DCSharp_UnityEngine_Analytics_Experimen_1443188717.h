#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Analytics.Experimental.Tracker.AnalyticsEventParamListContainer
struct AnalyticsEventParamListContainer_t2084363244_0;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t_1418732973_0;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t_1305703446_0;

#include "mscorlib_System_Object_887538054.h"

// UnityEngine.Analytics.Experimental.Tracker.StandardEventPayload
struct  StandardEventPayload_t_1443188717_0  : public Object_t
{
	// UnityEngine.Analytics.Experimental.Tracker.AnalyticsEventParamListContainer UnityEngine.Analytics.Experimental.Tracker.StandardEventPayload::m_Parameters
	AnalyticsEventParamListContainer_t2084363244_0 * ___m_Parameters_0;
	// System.String UnityEngine.Analytics.Experimental.Tracker.StandardEventPayload::m_Name
	String_t* ___m_Name_2;
};
struct StandardEventPayload_t_1443188717_0_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Analytics.Experimental.Tracker.StandardEventPayload::m_EventData
	Dictionary_2_t_1418732973_0 * ___m_EventData_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Analytics.Experimental.Tracker.StandardEventPayload::<>f__switch$map0
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24map0_3;
};
