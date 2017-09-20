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

// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t1388169374_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// System.String
struct String_t;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t2128401900_0;
// System.Collections.IList
struct IList_t_1078834989_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.DTDAttListDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAttListDeclaration__ctor_m1247135746_0 (DTDAttListDeclaration_t1388169374_0 * __this, DTDObjectModel_t_2044825337_0 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttListDeclaration::get_Name()
extern "C"  String_t* DTDAttListDeclaration_get_Name_m_550157181_0 (DTDAttListDeclaration_t1388169374_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclaration::set_Name(System.String)
extern "C"  void DTDAttListDeclaration_set_Name_m1965188718_0 (DTDAttListDeclaration_t1388169374_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::get_Item(System.Int32)
extern "C"  DTDAttributeDefinition_t2128401900_0 * DTDAttListDeclaration_get_Item_m_1017584817_0 (DTDAttListDeclaration_t1388169374_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::get_Item(System.String)
extern "C"  DTDAttributeDefinition_t2128401900_0 * DTDAttListDeclaration_get_Item_m_1023659836_0 (DTDAttListDeclaration_t1388169374_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::Get(System.Int32)
extern "C"  DTDAttributeDefinition_t2128401900_0 * DTDAttListDeclaration_Get_m1876834279_0 (DTDAttListDeclaration_t1388169374_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::Get(System.String)
extern "C"  DTDAttributeDefinition_t2128401900_0 * DTDAttListDeclaration_Get_m_1490981076_0 (DTDAttListDeclaration_t1388169374_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Mono.Xml.DTDAttListDeclaration::get_Definitions()
extern "C"  Object_t * DTDAttListDeclaration_get_Definitions_m1730561771_0 (DTDAttListDeclaration_t1388169374_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclaration::Add(Mono.Xml.DTDAttributeDefinition)
extern "C"  void DTDAttListDeclaration_Add_m_759583458_0 (DTDAttListDeclaration_t1388169374_0 * __this, DTDAttributeDefinition_t2128401900_0 * ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
