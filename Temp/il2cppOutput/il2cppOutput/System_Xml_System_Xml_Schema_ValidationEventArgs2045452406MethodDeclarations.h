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

// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t2045452406_0;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t201864511_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSeverityType_608244762.h"

// System.Void System.Xml.Schema.ValidationEventArgs::.ctor(System.Xml.Schema.XmlSchemaException,System.String,System.Xml.Schema.XmlSeverityType)
extern "C"  void ValidationEventArgs__ctor_m1860798045_0 (ValidationEventArgs_t2045452406_0 * __this, XmlSchemaException_t201864511_0 * ___ex, String_t* ___message, int32_t ___severity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaException System.Xml.Schema.ValidationEventArgs::get_Exception()
extern "C"  XmlSchemaException_t201864511_0 * ValidationEventArgs_get_Exception_m1711707009_0 (ValidationEventArgs_t2045452406_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSeverityType System.Xml.Schema.ValidationEventArgs::get_Severity()
extern "C"  int32_t ValidationEventArgs_get_Severity_m_1191344108_0 (ValidationEventArgs_t2045452406_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
