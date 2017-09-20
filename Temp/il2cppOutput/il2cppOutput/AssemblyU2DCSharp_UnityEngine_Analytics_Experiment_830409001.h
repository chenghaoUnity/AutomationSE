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
// UnityEngine.Analytics.Experimental.Tracker.ValueProperty
struct ValueProperty_t954960260_0;

#include "mscorlib_System_Object_887538054.h"
#include "AssemblyU2DCSharp_UnityEngine_Analytics_Experimenta411820741.h"

// UnityEngine.Analytics.Experimental.Tracker.AnalyticsEventParam
struct  AnalyticsEventParam_t_830409001_0  : public Object_t
{
	// UnityEngine.Analytics.Experimental.Tracker.AnalyticsEventParam/RequirementType UnityEngine.Analytics.Experimental.Tracker.AnalyticsEventParam::m_RequirementType
	int32_t ___m_RequirementType_0;
	// System.String UnityEngine.Analytics.Experimental.Tracker.AnalyticsEventParam::m_GroupID
	String_t* ___m_GroupID_1;
	// System.String UnityEngine.Analytics.Experimental.Tracker.AnalyticsEventParam::m_Name
	String_t* ___m_Name_2;
	// UnityEngine.Analytics.Experimental.Tracker.ValueProperty UnityEngine.Analytics.Experimental.Tracker.AnalyticsEventParam::m_Value
	ValueProperty_t954960260_0 * ___m_Value_3;
};
