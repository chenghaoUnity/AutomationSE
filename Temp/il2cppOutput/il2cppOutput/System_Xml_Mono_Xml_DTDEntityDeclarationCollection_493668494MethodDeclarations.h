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

// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t_493668494_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t2074492340_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.DTDEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDEntityDeclarationCollection__ctor_m460986588_0 (DTDEntityDeclarationCollection_t_493668494_0 * __this, DTDObjectModel_t_2044825337_0 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration Mono.Xml.DTDEntityDeclarationCollection::get_Item(System.String)
extern "C"  DTDEntityDeclaration_t2074492340_0 * DTDEntityDeclarationCollection_get_Item_m_1924135986_0 (DTDEntityDeclarationCollection_t_493668494_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDEntityDeclaration)
extern "C"  void DTDEntityDeclarationCollection_Add_m889264620_0 (DTDEntityDeclarationCollection_t_493668494_0 * __this, String_t* ___name, DTDEntityDeclaration_t2074492340_0 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
