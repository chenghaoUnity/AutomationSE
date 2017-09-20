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

// Mono.Xml.Schema.XsdEmptyValidationState
struct XsdEmptyValidationState_t1056950744_0;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t_1471708465_0;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707053611_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.Schema.XsdEmptyValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdEmptyValidationState__ctor_m_1134675334_0 (XsdEmptyValidationState_t1056950744_0 * __this, XsdParticleStateManager_t_1471708465_0 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdEmptyValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t707053611_0 * XsdEmptyValidationState_EvaluateStartElement_m1203254102_0 (XsdEmptyValidationState_t1056950744_0 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdEmptyValidationState::EvaluateEndElement()
extern "C"  bool XsdEmptyValidationState_EvaluateEndElement_m1968149470_0 (XsdEmptyValidationState_t1056950744_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdEmptyValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdEmptyValidationState_EvaluateIsEmptiable_m_988120622_0 (XsdEmptyValidationState_t1056950744_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
