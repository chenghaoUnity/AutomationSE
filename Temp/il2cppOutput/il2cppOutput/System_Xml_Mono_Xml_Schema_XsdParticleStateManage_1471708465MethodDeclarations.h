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

// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t_1471708465_0;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707053611_0;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1727784015_0;
// Mono.Xml.Schema.XsdElementValidationState
struct XsdElementValidationState_t1706761481_0;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t2018508780_0;
// Mono.Xml.Schema.XsdSequenceValidationState
struct XsdSequenceValidationState_t_1302975702_0;
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t_492849967_0;
// Mono.Xml.Schema.XsdChoiceValidationState
struct XsdChoiceValidationState_t1505956362_0;
// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t1389928113_0;
// Mono.Xml.Schema.XsdAllValidationState
struct XsdAllValidationState_t1848349252_0;
// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t1801736849_0;
// Mono.Xml.Schema.XsdAnyValidationState
struct XsdAnyValidationState_t_2081975655_0;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t1801736924_0;
// Mono.Xml.Schema.XsdEmptyValidationState
struct XsdEmptyValidationState_t1056950744_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProc_1684590244.h"

// System.Void Mono.Xml.Schema.XsdParticleStateManager::.ctor()
extern "C"  void XsdParticleStateManager__ctor_m_1760451679_0 (XsdParticleStateManager_t_1471708465_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing Mono.Xml.Schema.XsdParticleStateManager::get_ProcessContents()
extern "C"  int32_t XsdParticleStateManager_get_ProcessContents_m_880296859_0 (XsdParticleStateManager_t_1471708465_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::PushContext()
extern "C"  void XsdParticleStateManager_PushContext_m_1132521932_0 (XsdParticleStateManager_t_1471708465_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::PopContext()
extern "C"  void XsdParticleStateManager_PopContext_m_592206175_0 (XsdParticleStateManager_t_1471708465_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::SetProcessContents(System.Xml.Schema.XmlSchemaContentProcessing)
extern "C"  void XsdParticleStateManager_SetProcessContents_m1180669823_0 (XsdParticleStateManager_t_1471708465_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdParticleStateManager::Create(System.Xml.Schema.XmlSchemaObject)
extern "C"  XsdValidationState_t707053611_0 * XsdParticleStateManager_Create_m_1895877686_0 (XsdParticleStateManager_t_1471708465_0 * __this, XmlSchemaObject_t1727784015_0 * ___xsobj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdParticleStateManager::MakeSequence(Mono.Xml.Schema.XsdValidationState,Mono.Xml.Schema.XsdValidationState)
extern "C"  XsdValidationState_t707053611_0 * XsdParticleStateManager_MakeSequence_m_203449749_0 (XsdParticleStateManager_t_1471708465_0 * __this, XsdValidationState_t707053611_0 * ___head, XsdValidationState_t707053611_0 * ___rest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdElementValidationState Mono.Xml.Schema.XsdParticleStateManager::AddElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  XsdElementValidationState_t1706761481_0 * XsdParticleStateManager_AddElement_m_657800790_0 (XsdParticleStateManager_t_1471708465_0 * __this, XmlSchemaElement_t2018508780_0 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdSequenceValidationState Mono.Xml.Schema.XsdParticleStateManager::AddSequence(System.Xml.Schema.XmlSchemaSequence)
extern "C"  XsdSequenceValidationState_t_1302975702_0 * XsdParticleStateManager_AddSequence_m155029943_0 (XsdParticleStateManager_t_1471708465_0 * __this, XmlSchemaSequence_t_492849967_0 * ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdChoiceValidationState Mono.Xml.Schema.XsdParticleStateManager::AddChoice(System.Xml.Schema.XmlSchemaChoice)
extern "C"  XsdChoiceValidationState_t1505956362_0 * XsdParticleStateManager_AddChoice_m_1515031849_0 (XsdParticleStateManager_t_1471708465_0 * __this, XmlSchemaChoice_t1389928113_0 * ___choice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAllValidationState Mono.Xml.Schema.XsdParticleStateManager::AddAll(System.Xml.Schema.XmlSchemaAll)
extern "C"  XsdAllValidationState_t1848349252_0 * XsdParticleStateManager_AddAll_m1560994821_0 (XsdParticleStateManager_t_1471708465_0 * __this, XmlSchemaAll_t1801736849_0 * ___all, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnyValidationState Mono.Xml.Schema.XsdParticleStateManager::AddAny(System.Xml.Schema.XmlSchemaAny)
extern "C"  XsdAnyValidationState_t_2081975655_0 * XsdParticleStateManager_AddAny_m21270458_0 (XsdParticleStateManager_t_1471708465_0 * __this, XmlSchemaAny_t1801736924_0 * ___any, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdEmptyValidationState Mono.Xml.Schema.XsdParticleStateManager::AddEmpty()
extern "C"  XsdEmptyValidationState_t1056950744_0 * XsdParticleStateManager_AddEmpty_m219182213_0 (XsdParticleStateManager_t_1471708465_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
