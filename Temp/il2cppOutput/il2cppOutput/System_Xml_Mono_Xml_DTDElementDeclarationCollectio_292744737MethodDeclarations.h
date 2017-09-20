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

// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t_292744737_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t225234017_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.DTDElementDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDElementDeclarationCollection__ctor_m879563011_0 (DTDElementDeclarationCollection_t_292744737_0 * __this, DTDObjectModel_t_2044825337_0 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDElementDeclarationCollection::get_Item(System.String)
extern "C"  DTDElementDeclaration_t225234017_0 * DTDElementDeclarationCollection_get_Item_m_1956282472_0 (DTDElementDeclarationCollection_t_292744737_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDElementDeclarationCollection::Get(System.String)
extern "C"  DTDElementDeclaration_t225234017_0 * DTDElementDeclarationCollection_Get_m2070883288_0 (DTDElementDeclarationCollection_t_292744737_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclarationCollection::Add(System.String,Mono.Xml.DTDElementDeclaration)
extern "C"  void DTDElementDeclarationCollection_Add_m2137189962_0 (DTDElementDeclarationCollection_t_292744737_0 * __this, String_t* ___name, DTDElementDeclaration_t225234017_0 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
