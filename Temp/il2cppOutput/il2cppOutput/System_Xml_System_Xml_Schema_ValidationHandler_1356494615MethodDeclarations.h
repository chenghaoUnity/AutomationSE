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

// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Exception
struct Exception_t2143823668_0;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1727784015_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSeverityType_608244762.h"

// System.Void System.Xml.Schema.ValidationHandler::RaiseValidationEvent(System.Xml.Schema.ValidationEventHandler,System.Exception,System.String,System.Xml.Schema.XmlSchemaObject,System.Object,System.String,System.Xml.Schema.XmlSeverityType)
extern "C"  void ValidationHandler_RaiseValidationEvent_m959099307_0 (Object_t * __this /* static, unused */, ValidationEventHandler_t513619217_0 * ___handle, Exception_t2143823668_0 * ___innerException, String_t* ___message, XmlSchemaObject_t1727784015_0 * ___xsobj, Object_t * ___sender, String_t* ___sourceUri, int32_t ___severity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
