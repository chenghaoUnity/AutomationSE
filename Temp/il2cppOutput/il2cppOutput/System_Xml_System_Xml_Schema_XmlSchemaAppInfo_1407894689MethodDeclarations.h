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

// System.Xml.Schema.XmlSchemaAppInfo
struct XmlSchemaAppInfo_t_1407894689_0;
// System.Xml.XmlNode[]
struct XmlNodeU5BU5D_t1523972854_0;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1816173011_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.Schema.XmlSchemaAppInfo::.ctor()
extern "C"  void XmlSchemaAppInfo__ctor_m585961175_0 (XmlSchemaAppInfo_t_1407894689_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode[] System.Xml.Schema.XmlSchemaAppInfo::get_Markup()
extern "C"  XmlNodeU5BU5D_t1523972854_0* XmlSchemaAppInfo_get_Markup_m_1579352566_0 (XmlSchemaAppInfo_t_1407894689_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAppInfo::set_Markup(System.Xml.XmlNode[])
extern "C"  void XmlSchemaAppInfo_set_Markup_m970981101_0 (XmlSchemaAppInfo_t_1407894689_0 * __this, XmlNodeU5BU5D_t1523972854_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAppInfo System.Xml.Schema.XmlSchemaAppInfo::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler,System.Boolean&)
extern "C"  XmlSchemaAppInfo_t_1407894689_0 * XmlSchemaAppInfo_Read_m1566788461_0 (Object_t * __this /* static, unused */, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, bool* ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
