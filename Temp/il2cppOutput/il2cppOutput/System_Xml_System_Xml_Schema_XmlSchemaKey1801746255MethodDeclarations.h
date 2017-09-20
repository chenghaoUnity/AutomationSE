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

// System.Xml.Schema.XmlSchemaKey
struct XmlSchemaKey_t1801746255_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1816173011_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.Schema.XmlSchemaKey::.ctor()
extern "C"  void XmlSchemaKey__ctor_m_495148441_0 (XmlSchemaKey_t1801746255_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaKey::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaKey_Compile_m_867642239_0 (XmlSchemaKey_t1801746255_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaKey System.Xml.Schema.XmlSchemaKey::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaKey_t1801746255_0 * XmlSchemaKey_Read_m407934334_0 (Object_t * __this /* static, unused */, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
