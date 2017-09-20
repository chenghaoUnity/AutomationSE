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

// Mono.Xml.Schema.XsdAllValidationState
struct XsdAllValidationState_t1848349252_0;
// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t1801736849_0;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t_1471708465_0;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707053611_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.Schema.XsdAllValidationState::.ctor(System.Xml.Schema.XmlSchemaAll,Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdAllValidationState__ctor_m_1204297032_0 (XsdAllValidationState_t1848349252_0 * __this, XmlSchemaAll_t1801736849_0 * ___all, XsdParticleStateManager_t_1471708465_0 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAllValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t707053611_0 * XsdAllValidationState_EvaluateStartElement_m49462378_0 (XsdAllValidationState_t1848349252_0 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAllValidationState::EvaluateEndElement()
extern "C"  bool XsdAllValidationState_EvaluateEndElement_m_2129704438_0 (XsdAllValidationState_t1848349252_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAllValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdAllValidationState_EvaluateIsEmptiable_m827427110_0 (XsdAllValidationState_t1848349252_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
