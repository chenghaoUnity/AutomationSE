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

// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t_1742154381_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t1428699381_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.DTDNotationDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDNotationDeclarationCollection__ctor_m_1582192099_0 (DTDNotationDeclarationCollection_t_1742154381_0 * __this, DTDObjectModel_t_2044825337_0 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclaration Mono.Xml.DTDNotationDeclarationCollection::get_Item(System.String)
extern "C"  DTDNotationDeclaration_t1428699381_0 * DTDNotationDeclarationCollection_get_Item_m1543436108_0 (DTDNotationDeclarationCollection_t_1742154381_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNotationDeclarationCollection::Add(System.String,Mono.Xml.DTDNotationDeclaration)
extern "C"  void DTDNotationDeclarationCollection_Add_m754289612_0 (DTDNotationDeclarationCollection_t_1742154381_0 * __this, String_t* ___name, DTDNotationDeclaration_t1428699381_0 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
