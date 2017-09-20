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

// Mono.Xml.Schema.XsdAppendedValidationState
struct XsdAppendedValidationState_t149849778_0;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t_1471708465_0;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707053611_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.Schema.XsdAppendedValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager,Mono.Xml.Schema.XsdValidationState,Mono.Xml.Schema.XsdValidationState)
extern "C"  void XsdAppendedValidationState__ctor_m_1156124722_0 (XsdAppendedValidationState_t149849778_0 * __this, XsdParticleStateManager_t_1471708465_0 * ___manager, XsdValidationState_t707053611_0 * ___head, XsdValidationState_t707053611_0 * ___rest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAppendedValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t707053611_0 * XsdAppendedValidationState_EvaluateStartElement_m_636801612_0 (XsdAppendedValidationState_t149849778_0 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAppendedValidationState::EvaluateEndElement()
extern "C"  bool XsdAppendedValidationState_EvaluateEndElement_m_859186366_0 (XsdAppendedValidationState_t149849778_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAppendedValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdAppendedValidationState_EvaluateIsEmptiable_m1558781678_0 (XsdAppendedValidationState_t149849778_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
