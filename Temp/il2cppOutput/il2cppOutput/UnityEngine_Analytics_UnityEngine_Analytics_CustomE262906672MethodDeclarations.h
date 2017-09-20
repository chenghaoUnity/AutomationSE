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

// UnityEngine.Analytics.CustomEvent
struct CustomEvent_t262906672_0;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t379315588_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Analytics.CustomEvent::.ctor(System.String)
extern "C"  void CustomEvent__ctor_m_1430644126_0 (CustomEvent_t262906672_0 * __this, String_t* ___customEventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.CustomEvent::SetEventData(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void CustomEvent_SetEventData_m61333782_0 (CustomEvent_t262906672_0 * __this, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
