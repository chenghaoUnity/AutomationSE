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

// Mono.Xml.Schema.XsdIDManager
struct XsdIDManager_t2118556933_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t_52373772_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.Schema.XsdIDManager::.ctor()
extern "C"  void XsdIDManager__ctor_m_2062122447_0 (XsdIDManager_t2118556933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.Schema.XsdIDManager::get_MissingIDReferences()
extern "C"  ArrayList_t536890563_0 * XsdIDManager_get_MissingIDReferences_m_1649267587_0 (XsdIDManager_t2118556933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdIDManager::OnStartElement()
extern "C"  void XsdIDManager_OnStartElement_m_583336980_0 (XsdIDManager_t2118556933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdIDManager::AssessEachAttributeIdentityConstraint(System.Xml.Schema.XmlSchemaDatatype,System.Object,System.String)
extern "C"  String_t* XsdIDManager_AssessEachAttributeIdentityConstraint_m_663575623_0 (XsdIDManager_t2118556933_0 * __this, XmlSchemaDatatype_t_52373772_0 * ___dt, Object_t * ___parsedValue, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdIDManager::HasMissingIDReferences()
extern "C"  bool XsdIDManager_HasMissingIDReferences_m321071658_0 (XsdIDManager_t2118556933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdIDManager::GetMissingIDString()
extern "C"  String_t* XsdIDManager_GetMissingIDString_m256768658_0 (XsdIDManager_t2118556933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
