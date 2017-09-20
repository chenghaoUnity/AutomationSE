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

// Mono.Xml.DTDInvalidAutomata
struct DTDInvalidAutomata_t206669732_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t_1542573965_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.DTDInvalidAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDInvalidAutomata__ctor_m1789707662_0 (DTDInvalidAutomata_t206669732_0 * __this, DTDObjectModel_t_2044825337_0 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDInvalidAutomata::TryEndElement()
extern "C"  DTDAutomata_t_1542573965_0 * DTDInvalidAutomata_TryEndElement_m775889141_0 (DTDInvalidAutomata_t206669732_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDInvalidAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t_1542573965_0 * DTDInvalidAutomata_TryStartElement_m148267316_0 (DTDInvalidAutomata_t206669732_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
