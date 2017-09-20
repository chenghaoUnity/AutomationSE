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

// Mono.Xml.DTDCollectionBase
struct DTDCollectionBase_t_242505838_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// System.String
struct String_t;
// Mono.Xml.DTDNode
struct DTDNode_t_138181947_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.DTDCollectionBase::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDCollectionBase__ctor_m1839072630_0 (DTDCollectionBase_t_242505838_0 * __this, DTDObjectModel_t_2044825337_0 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDCollectionBase::get_Root()
extern "C"  DTDObjectModel_t_2044825337_0 * DTDCollectionBase_get_Root_m1145982982_0 (DTDCollectionBase_t_242505838_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDCollectionBase::BaseAdd(System.String,Mono.Xml.DTDNode)
extern "C"  void DTDCollectionBase_BaseAdd_m1540252226_0 (DTDCollectionBase_t_242505838_0 * __this, String_t* ___name, DTDNode_t_138181947_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDCollectionBase::Contains(System.String)
extern "C"  bool DTDCollectionBase_Contains_m1398227387_0 (DTDCollectionBase_t_242505838_0 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.DTDCollectionBase::BaseGet(System.String)
extern "C"  Object_t * DTDCollectionBase_BaseGet_m344774896_0 (DTDCollectionBase_t_242505838_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
