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

// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t1783735772_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t1388169374_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.DTDAttListDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAttListDeclarationCollection__ctor_m_547720960_0 (DTDAttListDeclarationCollection_t1783735772_0 * __this, DTDObjectModel_t_2044825337_0 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclaration Mono.Xml.DTDAttListDeclarationCollection::get_Item(System.String)
extern "C"  DTDAttListDeclaration_t1388169374_0 * DTDAttListDeclarationCollection_get_Item_m920644408_0 (DTDAttListDeclarationCollection_t1783735772_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclarationCollection::Add(System.String,Mono.Xml.DTDAttListDeclaration)
extern "C"  void DTDAttListDeclarationCollection_Add_m1772263056_0 (DTDAttListDeclarationCollection_t1783735772_0 * __this, String_t* ___name, DTDAttListDeclaration_t1388169374_0 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
