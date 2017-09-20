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

// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t19846218_0;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t_2082775307_0;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t_52373772_0;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1845511452_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMe1167302024.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode_1029406762.h"

// System.Void System.Xml.Schema.XmlSchemaType::.ctor()
extern "C"  void XmlSchemaType__ctor_m67578246_0 (XmlSchemaType_t19846218_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaType::get_Name()
extern "C"  String_t* XmlSchemaType_get_Name_m_1669739313_0 (XmlSchemaType_t19846218_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaType::set_Name(System.String)
extern "C"  void XmlSchemaType_set_Name_m1730959868_0 (XmlSchemaType_t19846218_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::get_Final()
extern "C"  int32_t XmlSchemaType_get_Final_m_1092933013_0 (XmlSchemaType_t19846218_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaType::set_Final(System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C"  void XmlSchemaType_set_Final_m1693833788_0 (XmlSchemaType_t19846218_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaType::get_QualifiedName()
extern "C"  XmlQualifiedName_t_2082775307_0 * XmlSchemaType_get_QualifiedName_m_1235353937_0 (XmlSchemaType_t19846218_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::get_FinalResolved()
extern "C"  int32_t XmlSchemaType_get_FinalResolved_m330734211_0 (XmlSchemaType_t19846218_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaType::get_BaseSchemaType()
extern "C"  Object_t * XmlSchemaType_get_BaseSchemaType_m_568054498_0 (XmlSchemaType_t19846218_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaType::get_BaseXmlSchemaType()
extern "C"  XmlSchemaType_t19846218_0 * XmlSchemaType_get_BaseXmlSchemaType_m_1543533484_0 (XmlSchemaType_t19846218_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::get_DerivedBy()
extern "C"  int32_t XmlSchemaType_get_DerivedBy_m1086003913_0 (XmlSchemaType_t19846218_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaType::get_Datatype()
extern "C"  XmlSchemaDatatype_t_52373772_0 * XmlSchemaType_get_Datatype_m_1811932835_0 (XmlSchemaType_t19846218_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaType::get_IsMixed()
extern "C"  bool XmlSchemaType_get_IsMixed_m1307732852_0 (XmlSchemaType_t19846218_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaSimpleType_t1845511452_0 * XmlSchemaType_GetBuiltInSimpleType_m799232347_0 (Object_t * __this /* static, unused */, XmlQualifiedName_t_2082775307_0 * ___qualifiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.Schema.XmlTypeCode)
extern "C"  XmlSchemaSimpleType_t1845511452_0 * XmlSchemaType_GetBuiltInSimpleType_m277874394_0 (Object_t * __this /* static, unused */, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaType::ValidateRecursionCheck()
extern "C"  bool XmlSchemaType_ValidateRecursionCheck_m_766764238_0 (XmlSchemaType_t19846218_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
