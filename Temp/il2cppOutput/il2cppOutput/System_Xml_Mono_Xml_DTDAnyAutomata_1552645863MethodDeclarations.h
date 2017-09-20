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

// Mono.Xml.DTDAnyAutomata
struct DTDAnyAutomata_t_1552645863_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t_1542573965_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.DTDAnyAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAnyAutomata__ctor_m1701055619_0 (DTDAnyAutomata_t_1552645863_0 * __this, DTDObjectModel_t_2044825337_0 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAnyAutomata::TryEndElement()
extern "C"  DTDAutomata_t_1542573965_0 * DTDAnyAutomata_TryEndElement_m498392608_0 (DTDAnyAutomata_t_1552645863_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAnyAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t_1542573965_0 * DTDAnyAutomata_TryStartElement_m890194089_0 (DTDAnyAutomata_t_1552645863_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDAnyAutomata::get_Emptiable()
extern "C"  bool DTDAnyAutomata_get_Emptiable_m_895918933_0 (DTDAnyAutomata_t_1552645863_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
