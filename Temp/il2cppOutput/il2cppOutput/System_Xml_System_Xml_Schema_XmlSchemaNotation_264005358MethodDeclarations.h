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

// System.Xml.Schema.XmlSchemaNotation
struct XmlSchemaNotation_t_264005358_0;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t_2082775307_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1816173011_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.Schema.XmlSchemaNotation::.ctor()
extern "C"  void XmlSchemaNotation__ctor_m557152062_0 (XmlSchemaNotation_t_264005358_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaNotation::get_Name()
extern "C"  String_t* XmlSchemaNotation_get_Name_m704118167_0 (XmlSchemaNotation_t_264005358_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaNotation::get_Public()
extern "C"  String_t* XmlSchemaNotation_get_Public_m1802088245_0 (XmlSchemaNotation_t_264005358_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaNotation::get_QualifiedName()
extern "C"  XmlQualifiedName_t_2082775307_0 * XmlSchemaNotation_get_QualifiedName_m1873656295_0 (XmlSchemaNotation_t_264005358_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaNotation::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaNotation_Compile_m111198236_0 (XmlSchemaNotation_t_264005358_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaNotation::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaNotation_Validate_m114109285_0 (XmlSchemaNotation_t_264005358_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaNotation System.Xml.Schema.XmlSchemaNotation::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaNotation_t_264005358_0 * XmlSchemaNotation_Read_m_197503676_0 (Object_t * __this /* static, unused */, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
