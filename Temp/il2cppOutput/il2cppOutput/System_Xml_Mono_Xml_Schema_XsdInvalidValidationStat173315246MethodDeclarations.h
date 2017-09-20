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

// Mono.Xml.Schema.XsdInvalidValidationState
struct XsdInvalidValidationState_t173315246_0;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t_1471708465_0;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707053611_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.Schema.XsdInvalidValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdInvalidValidationState__ctor_m_433489776_0 (XsdInvalidValidationState_t173315246_0 * __this, XsdParticleStateManager_t_1471708465_0 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdInvalidValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t707053611_0 * XsdInvalidValidationState_EvaluateStartElement_m_1639824448_0 (XsdInvalidValidationState_t173315246_0 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdInvalidValidationState::EvaluateEndElement()
extern "C"  bool XsdInvalidValidationState_EvaluateEndElement_m_166698124_0 (XsdInvalidValidationState_t173315246_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdInvalidValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdInvalidValidationState_EvaluateIsEmptiable_m1551080700_0 (XsdInvalidValidationState_t173315246_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
