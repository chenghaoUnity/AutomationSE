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

// System.Xml.Schema.XmlSchemaDocumentation
struct XmlSchemaDocumentation_t79318954_0;
// System.Xml.XmlNode[]
struct XmlNodeU5BU5D_t1523972854_0;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1816173011_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.Schema.XmlSchemaDocumentation::.ctor()
extern "C"  void XmlSchemaDocumentation__ctor_m_1935608660_0 (XmlSchemaDocumentation_t79318954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode[] System.Xml.Schema.XmlSchemaDocumentation::get_Markup()
extern "C"  XmlNodeU5BU5D_t1523972854_0* XmlSchemaDocumentation_get_Markup_m1128062037_0 (XmlSchemaDocumentation_t79318954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaDocumentation::set_Markup(System.Xml.XmlNode[])
extern "C"  void XmlSchemaDocumentation_set_Markup_m12182200_0 (XmlSchemaDocumentation_t79318954_0 * __this, XmlNodeU5BU5D_t1523972854_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDocumentation System.Xml.Schema.XmlSchemaDocumentation::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler,System.Boolean&)
extern "C"  XmlSchemaDocumentation_t79318954_0 * XmlSchemaDocumentation_Read_m_1923102771_0 (Object_t * __this /* static, unused */, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, bool* ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
