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

// System.Xml.Schema.XmlSchemaImport
struct XmlSchemaImport_t1566356661_0;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t1722033215_0;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1816173011_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.Schema.XmlSchemaImport::.ctor()
extern "C"  void XmlSchemaImport__ctor_m_1465957829_0 (XmlSchemaImport_t1566356661_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaImport::get_Namespace()
extern "C"  String_t* XmlSchemaImport_get_Namespace_m_1666306962_0 (XmlSchemaImport_t1566356661_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaImport::set_Annotation(System.Xml.Schema.XmlSchemaAnnotation)
extern "C"  void XmlSchemaImport_set_Annotation_m_257942003_0 (XmlSchemaImport_t1566356661_0 * __this, XmlSchemaAnnotation_t1722033215_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaImport System.Xml.Schema.XmlSchemaImport::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaImport_t1566356661_0 * XmlSchemaImport_Read_m_1557738742_0 (Object_t * __this /* static, unused */, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
