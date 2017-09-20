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

// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1845511452_0;
// System.String
struct String_t;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t2063649899_0;
// System.Xml.Schema.XmlSchemaSimpleTypeContent
struct XmlSchemaSimpleTypeContent_t2074660797_0;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1727784015_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t_636905395_0;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1816173011_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMe1167302024.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleType::.ctor()
extern "C"  void XmlSchemaSimpleType__ctor_m562693940_0 (XmlSchemaSimpleType_t1845511452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::.cctor()
extern "C"  void XmlSchemaSimpleType__cctor_m_218453255_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleType::BuildSchemaType(System.String,System.String)
extern "C"  XmlSchemaSimpleType_t1845511452_0 * XmlSchemaSimpleType_BuildSchemaType_m742275997_0 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___baseName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleType::BuildSchemaType(System.String,System.String,System.Boolean,System.Boolean)
extern "C"  XmlSchemaSimpleType_t1845511452_0 * XmlSchemaSimpleType_BuildSchemaType_m_1412382403_0 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___baseName, bool ___xdt, bool ___baseXdt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnySimpleType System.Xml.Schema.XmlSchemaSimpleType::get_AnySimpleType()
extern "C"  XsdAnySimpleType_t2063649899_0 * XmlSchemaSimpleType_get_AnySimpleType_m1434590200_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeContent System.Xml.Schema.XmlSchemaSimpleType::get_Content()
extern "C"  XmlSchemaSimpleTypeContent_t2074660797_0 * XmlSchemaSimpleType_get_Content_m1777111111_0 (XmlSchemaSimpleType_t1845511452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::set_Content(System.Xml.Schema.XmlSchemaSimpleTypeContent)
extern "C"  void XmlSchemaSimpleType_set_Content_m_1048922302_0 (XmlSchemaSimpleType_t1845511452_0 * __this, XmlSchemaSimpleTypeContent_t2074660797_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaSimpleType::get_Variety()
extern "C"  int32_t XmlSchemaSimpleType_get_Variety_m_904954005_0 (XmlSchemaSimpleType_t1845511452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaSimpleType_SetParent_m_1298595852_0 (XmlSchemaSimpleType_t1845511452_0 * __this, XmlSchemaObject_t1727784015_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleType::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleType_Compile_m_216858862_0 (XmlSchemaSimpleType_t1845511452_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::CollectBaseType(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaSimpleType_CollectBaseType_m_2140167054_0 (XmlSchemaSimpleType_t1845511452_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleType::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleType_Validate_m_1465726161_0 (XmlSchemaSimpleType_t1845511452_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::ValidateDerivationValid(System.Object,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaSimpleType_ValidateDerivationValid_m2038912592_0 (XmlSchemaSimpleType_t1845511452_0 * __this, Object_t * ___baseType, XmlSchemaObjectCollection_t_636905395_0 * ___facets, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleType::ValidateTypeDerivationOK(System.Object,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaSimpleType_ValidateTypeDerivationOK_m_1086506251_0 (XmlSchemaSimpleType_t1845511452_0 * __this, Object_t * ___baseType, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleType::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaSimpleType_t1845511452_0 * XmlSchemaSimpleType_Read_m310115352_0 (Object_t * __this /* static, unused */, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
