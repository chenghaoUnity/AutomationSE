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

// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t617691565_0;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t391223730_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1816173011_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.Schema.XmlSchemaXPath::.ctor()
extern "C"  void XmlSchemaXPath__ctor_m_894377719_0 (XmlSchemaXPath_t617691565_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaXPath::get_XPath()
extern "C"  String_t* XmlSchemaXPath_get_XPath_m_1348498184_0 (XmlSchemaXPath_t617691565_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaXPath::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaXPath_Compile_m_822107613_0 (XmlSchemaXPath_t617691565_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath[] System.Xml.Schema.XmlSchemaXPath::get_CompiledExpression()
extern "C"  XsdIdentityPathU5BU5D_t391223730_0* XmlSchemaXPath_get_CompiledExpression_m1070271229_0 (XmlSchemaXPath_t617691565_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaXPath::ParseExpression(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaXPath_ParseExpression_m2043180545_0 (XmlSchemaXPath_t617691565_0 * __this, String_t* ___xpath, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaXPath::ParsePath(System.String,System.Int32,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaXPath_ParsePath_m_1512686338_0 (XmlSchemaXPath_t617691565_0 * __this, String_t* ___xpath, int32_t ___pos, ArrayList_t536890563_0 * ___paths, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaXPath::ParseStep(System.String,System.Int32,System.Collections.ArrayList,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaXPath_ParseStep_m1604962518_0 (XmlSchemaXPath_t617691565_0 * __this, String_t* ___xpath, int32_t ___pos, ArrayList_t536890563_0 * ___steps, ArrayList_t536890563_0 * ___paths, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaXPath::SkipWhitespace(System.String,System.Int32)
extern "C"  int32_t XmlSchemaXPath_SkipWhitespace_m_1938072530_0 (XmlSchemaXPath_t617691565_0 * __this, String_t* ___xpath, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaXPath System.Xml.Schema.XmlSchemaXPath::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler,System.String)
extern "C"  XmlSchemaXPath_t617691565_0 * XmlSchemaXPath_Read_m523859194_0 (Object_t * __this /* static, unused */, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
