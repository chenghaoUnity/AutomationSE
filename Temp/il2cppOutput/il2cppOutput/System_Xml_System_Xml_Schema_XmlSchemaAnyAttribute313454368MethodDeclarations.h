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

// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t313454368_0;
// System.String
struct String_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t705385851_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1816173011_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProc_1684590244.h"

// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::.ctor()
extern "C"  void XmlSchemaAnyAttribute__ctor_m931168880_0 (XmlSchemaAnyAttribute_t313454368_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAnyAttribute::get_Namespace()
extern "C"  String_t* XmlSchemaAnyAttribute_get_Namespace_m1933652323_0 (XmlSchemaAnyAttribute_t313454368_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueAny()
extern "C"  bool XmlSchemaAnyAttribute_get_HasValueAny_m_1462628254_0 (XmlSchemaAnyAttribute_t313454368_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueLocal()
extern "C"  bool XmlSchemaAnyAttribute_get_HasValueLocal_m51235041_0 (XmlSchemaAnyAttribute_t313454368_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueOther()
extern "C"  bool XmlSchemaAnyAttribute_get_HasValueOther_m_1433332922_0 (XmlSchemaAnyAttribute_t313454368_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueTargetNamespace()
extern "C"  bool XmlSchemaAnyAttribute_get_HasValueTargetNamespace_m451675712_0 (XmlSchemaAnyAttribute_t313454368_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringCollection System.Xml.Schema.XmlSchemaAnyAttribute::get_ResolvedNamespaces()
extern "C"  StringCollection_t705385851_0 * XmlSchemaAnyAttribute_get_ResolvedNamespaces_m_1417810394_0 (XmlSchemaAnyAttribute_t313454368_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAnyAttribute::get_ResolvedProcessContents()
extern "C"  int32_t XmlSchemaAnyAttribute_get_ResolvedProcessContents_m_663826980_0 (XmlSchemaAnyAttribute_t313454368_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAnyAttribute::get_TargetNamespace()
extern "C"  String_t* XmlSchemaAnyAttribute_get_TargetNamespace_m_1108491822_0 (XmlSchemaAnyAttribute_t313454368_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAnyAttribute_Compile_m_1493693234_0 (XmlSchemaAnyAttribute_t313454368_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAnyAttribute_Validate_m1902081267_0 (XmlSchemaAnyAttribute_t313454368_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardSubset(System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAnyAttribute_ValidateWildcardSubset_m550143286_0 (XmlSchemaAnyAttribute_t313454368_0 * __this, XmlSchemaAnyAttribute_t313454368_0 * ___other, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.XmlSchema)
extern "C"  bool XmlSchemaAnyAttribute_ValidateWildcardAllowsNamespaceName_m_1589421269_0 (XmlSchemaAnyAttribute_t313454368_0 * __this, String_t* ___ns, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAnyAttribute::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaAnyAttribute_t313454368_0 * XmlSchemaAnyAttribute_Read_m1540580064_0 (Object_t * __this /* static, unused */, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
