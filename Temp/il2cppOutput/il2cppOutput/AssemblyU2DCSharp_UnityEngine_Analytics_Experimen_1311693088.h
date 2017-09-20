#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Analytics.Experimental.Tracker.TriggerListContainer
struct TriggerListContainer_t_1613357619_0;
// UnityEngine.Analytics.Experimental.Tracker.EventTrigger/OnTrigger
struct OnTrigger_t_56800694_0;
// UnityEngine.Analytics.Experimental.Tracker.TriggerMethod
struct TriggerMethod_t929538007_0;

#include "mscorlib_System_Object_887538054.h"
#include "AssemblyU2DCSharp_UnityEngine_Analytics_Experiment1221305264.h"
#include "AssemblyU2DCSharp_UnityEngine_Analytics_Experiment2019108422.h"
#include "AssemblyU2DCSharp_UnityEngine_Analytics_Experiment1220759392.h"

// UnityEngine.Analytics.Experimental.Tracker.EventTrigger
struct  EventTrigger_t_1311693088_0  : public Object_t
{
	// UnityEngine.Analytics.Experimental.Tracker.TriggerType UnityEngine.Analytics.Experimental.Tracker.EventTrigger::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.Analytics.Experimental.Tracker.TriggerLifecycleEvent UnityEngine.Analytics.Experimental.Tracker.EventTrigger::m_LifecycleEvent
	int32_t ___m_LifecycleEvent_1;
	// System.Boolean UnityEngine.Analytics.Experimental.Tracker.EventTrigger::m_ApplyRules
	bool ___m_ApplyRules_2;
	// UnityEngine.Analytics.Experimental.Tracker.TriggerListContainer UnityEngine.Analytics.Experimental.Tracker.EventTrigger::m_Rules
	TriggerListContainer_t_1613357619_0 * ___m_Rules_3;
	// UnityEngine.Analytics.Experimental.Tracker.TriggerBool UnityEngine.Analytics.Experimental.Tracker.EventTrigger::m_TriggerBool
	int32_t ___m_TriggerBool_4;
	// System.Single UnityEngine.Analytics.Experimental.Tracker.EventTrigger::m_InitTime
	float ___m_InitTime_5;
	// System.Single UnityEngine.Analytics.Experimental.Tracker.EventTrigger::m_RepeatTime
	float ___m_RepeatTime_6;
	// System.Int32 UnityEngine.Analytics.Experimental.Tracker.EventTrigger::m_Repetitions
	int32_t ___m_Repetitions_7;
	// System.Int32 UnityEngine.Analytics.Experimental.Tracker.EventTrigger::repetitionCount
	int32_t ___repetitionCount_8;
	// UnityEngine.Analytics.Experimental.Tracker.EventTrigger/OnTrigger UnityEngine.Analytics.Experimental.Tracker.EventTrigger::m_TriggerFunction
	OnTrigger_t_56800694_0 * ___m_TriggerFunction_9;
	// UnityEngine.Analytics.Experimental.Tracker.TriggerMethod UnityEngine.Analytics.Experimental.Tracker.EventTrigger::m_Method
	TriggerMethod_t929538007_0 * ___m_Method_10;
};
