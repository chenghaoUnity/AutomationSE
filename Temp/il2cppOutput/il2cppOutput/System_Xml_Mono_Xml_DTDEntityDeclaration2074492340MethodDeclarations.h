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

// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t2074492340_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.DTDEntityDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDEntityDeclaration__ctor_m705712862_0 (DTDEntityDeclaration_t2074492340_0 * __this, DTDObjectModel_t_2044825337_0 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityDeclaration::get_NotationName()
extern "C"  String_t* DTDEntityDeclaration_get_NotationName_m528268507_0 (DTDEntityDeclaration_t2074492340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclaration::set_NotationName(System.String)
extern "C"  void DTDEntityDeclaration_set_NotationName_m_1410164816_0 (DTDEntityDeclaration_t2074492340_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEntityDeclaration::get_HasExternalReference()
extern "C"  bool DTDEntityDeclaration_get_HasExternalReference_m850645615_0 (DTDEntityDeclaration_t2074492340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityDeclaration::get_EntityValue()
extern "C"  String_t* DTDEntityDeclaration_get_EntityValue_m1737901506_0 (DTDEntityDeclaration_t2074492340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclaration::ScanEntityValue(System.Collections.ArrayList)
extern "C"  void DTDEntityDeclaration_ScanEntityValue_m_699209012_0 (DTDEntityDeclaration_t2074492340_0 * __this, ArrayList_t536890563_0 * ___refs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
