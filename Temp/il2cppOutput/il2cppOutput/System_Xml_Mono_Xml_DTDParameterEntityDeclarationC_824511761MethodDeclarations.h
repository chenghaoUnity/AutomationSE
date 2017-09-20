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

// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t_824511761_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t_1403141775_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDParameterEntityDeclarationCollection__ctor_m1161712915_0 (DTDParameterEntityDeclarationCollection_t_824511761_0 * __this, DTDObjectModel_t_2044825337_0 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclaration Mono.Xml.DTDParameterEntityDeclarationCollection::get_Item(System.String)
extern "C"  DTDParameterEntityDeclaration_t_1403141775_0 * DTDParameterEntityDeclarationCollection_get_Item_m_241369192_0 (DTDParameterEntityDeclarationCollection_t_824511761_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDParameterEntityDeclaration)
extern "C"  void DTDParameterEntityDeclarationCollection_Add_m_1102460118_0 (DTDParameterEntityDeclarationCollection_t_824511761_0 * __this, String_t* ___name, DTDParameterEntityDeclaration_t_1403141775_0 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
