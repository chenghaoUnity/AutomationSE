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

// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1727784015_0;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t1959284958_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Exception
struct Exception_t2143823668_0;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t_653546602_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid_224607100.h"

// System.Void System.Xml.Schema.XmlSchemaObject::.ctor()
extern "C"  void XmlSchemaObject__ctor_m1909653473_0 (XmlSchemaObject_t1727784015_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::get_LineNumber()
extern "C"  int32_t XmlSchemaObject_get_LineNumber_m207255303_0 (XmlSchemaObject_t1727784015_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_LineNumber(System.Int32)
extern "C"  void XmlSchemaObject_set_LineNumber_m844492398_0 (XmlSchemaObject_t1727784015_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::get_LinePosition()
extern "C"  int32_t XmlSchemaObject_get_LinePosition_m_916524633_0 (XmlSchemaObject_t1727784015_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_LinePosition(System.Int32)
extern "C"  void XmlSchemaObject_set_LinePosition_m602188686_0 (XmlSchemaObject_t1727784015_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaObject::get_SourceUri()
extern "C"  String_t* XmlSchemaObject_get_SourceUri_m_126348150_0 (XmlSchemaObject_t1727784015_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_SourceUri(System.String)
extern "C"  void XmlSchemaObject_set_SourceUri_m_484929489_0 (XmlSchemaObject_t1727784015_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::get_Parent()
extern "C"  XmlSchemaObject_t1727784015_0 * XmlSchemaObject_get_Parent_m1231834627_0 (XmlSchemaObject_t1727784015_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_Parent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaObject_set_Parent_m_9111352_0 (XmlSchemaObject_t1727784015_0 * __this, XmlSchemaObject_t1727784015_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaObject::get_AncestorSchema()
extern "C"  XmlSchema_t_881538832_0 * XmlSchemaObject_get_AncestorSchema_m_270878258_0 (XmlSchemaObject_t1727784015_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaObject_SetParent_m1004461927_0 (XmlSchemaObject_t1727784015_0 * __this, XmlSchemaObject_t1727784015_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::get_Namespaces()
extern "C"  XmlSerializerNamespaces_t1959284958_0 * XmlSchemaObject_get_Namespaces_m1758906208_0 (XmlSchemaObject_t1727784015_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String)
extern "C"  void XmlSchemaObject_error_m_2030615197_0 (XmlSchemaObject_t1727784015_0 * __this, ValidationEventHandler_t513619217_0 * ___handle, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::warn(System.Xml.Schema.ValidationEventHandler,System.String)
extern "C"  void XmlSchemaObject_warn_m_1531659035_0 (XmlSchemaObject_t1727784015_0 * __this, ValidationEventHandler_t513619217_0 * ___handle, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception)
extern "C"  void XmlSchemaObject_error_m_822504909_0 (Object_t * __this /* static, unused */, ValidationEventHandler_t513619217_0 * ___handle, String_t* ___message, Exception_t2143823668_0 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception,System.Xml.Schema.XmlSchemaObject,System.Object)
extern "C"  void XmlSchemaObject_error_m_278389011_0 (Object_t * __this /* static, unused */, ValidationEventHandler_t513619217_0 * ___handle, String_t* ___message, Exception_t2143823668_0 * ___innerException, XmlSchemaObject_t1727784015_0 * ___xsobj, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::warn(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception,System.Xml.Schema.XmlSchemaObject,System.Object)
extern "C"  void XmlSchemaObject_warn_m_172709973_0 (Object_t * __this /* static, unused */, ValidationEventHandler_t513619217_0 * ___handle, String_t* ___message, Exception_t2143823668_0 * ___innerException, XmlSchemaObject_t1727784015_0 * ___xsobj, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaObject_Compile_m346479359_0 (XmlSchemaObject_t1727784015_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaObject_Validate_m_1182110494_0 (XmlSchemaObject_t1727784015_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaObject::IsValidated(System.Guid)
extern "C"  bool XmlSchemaObject_IsValidated_m1007618463_0 (XmlSchemaObject_t1727784015_0 * __this, Guid_t_224607100_0  ___validationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::CopyInfo(System.Xml.Schema.XmlSchemaParticle)
extern "C"  void XmlSchemaObject_CopyInfo_m119761221_0 (XmlSchemaObject_t1727784015_0 * __this, XmlSchemaParticle_t_653546602_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
