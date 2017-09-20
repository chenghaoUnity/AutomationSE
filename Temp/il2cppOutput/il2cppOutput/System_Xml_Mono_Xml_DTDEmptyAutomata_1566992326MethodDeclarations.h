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

// Mono.Xml.DTDEmptyAutomata
struct DTDEmptyAutomata_t_1566992326_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t_1542573965_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.DTDEmptyAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDEmptyAutomata__ctor_m_2083186972_0 (DTDEmptyAutomata_t_1566992326_0 * __this, DTDObjectModel_t_2044825337_0 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDEmptyAutomata::TryEndElement()
extern "C"  DTDAutomata_t_1542573965_0 * DTDEmptyAutomata_TryEndElement_m1124027935_0 (DTDEmptyAutomata_t_1566992326_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDEmptyAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t_1542573965_0 * DTDEmptyAutomata_TryStartElement_m_2113602870_0 (DTDEmptyAutomata_t_1566992326_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEmptyAutomata::get_Emptiable()
extern "C"  bool DTDEmptyAutomata_get_Emptiable_m11704938_0 (DTDEmptyAutomata_t_1566992326_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
