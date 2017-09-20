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

// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t_2082775307_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t_929928242_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.XmlQualifiedName::.ctor()
extern "C"  void XmlQualifiedName__ctor_m860454331_0 (XmlQualifiedName_t_2082775307_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String)
extern "C"  void XmlQualifiedName__ctor_m1244498215_0 (XmlQualifiedName_t_2082775307_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String,System.String)
extern "C"  void XmlQualifiedName__ctor_m_1540349661_0 (XmlQualifiedName_t_2082775307_0 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.cctor()
extern "C"  void XmlQualifiedName__cctor_m422184274_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::get_IsEmpty()
extern "C"  bool XmlQualifiedName_get_IsEmpty_m107427003_0 (XmlQualifiedName_t_2082775307_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::get_Name()
extern "C"  String_t* XmlQualifiedName_get_Name_m607016698_0 (XmlQualifiedName_t_2082775307_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::get_Namespace()
extern "C"  String_t* XmlQualifiedName_get_Namespace_m_1307324882_0 (XmlQualifiedName_t_2082775307_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::Equals(System.Object)
extern "C"  bool XmlQualifiedName_Equals_m129870964_0 (XmlQualifiedName_t_2082775307_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlQualifiedName::GetHashCode()
extern "C"  int32_t XmlQualifiedName_GetHashCode_m166934412_0 (XmlQualifiedName_t_2082775307_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::ToString()
extern "C"  String_t* XmlQualifiedName_ToString_m_31258222_0 (XmlQualifiedName_t_2082775307_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Parse(System.String,System.Xml.IXmlNamespaceResolver,System.Boolean)
extern "C"  XmlQualifiedName_t_2082775307_0 * XmlQualifiedName_Parse_m_1859017059_0 (Object_t * __this /* static, unused */, String_t* ___name, Object_t * ___resolver, bool ___considerDefaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Parse(System.String,System.Xml.XmlReader)
extern "C"  XmlQualifiedName_t_2082775307_0 * XmlQualifiedName_Parse_m_1318761927_0 (Object_t * __this /* static, unused */, String_t* ___name, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::op_Equality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C"  bool XmlQualifiedName_op_Equality_m273752697_0 (Object_t * __this /* static, unused */, XmlQualifiedName_t_2082775307_0 * ___a, XmlQualifiedName_t_2082775307_0 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::op_Inequality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C"  bool XmlQualifiedName_op_Inequality_m188426612_0 (Object_t * __this /* static, unused */, XmlQualifiedName_t_2082775307_0 * ___a, XmlQualifiedName_t_2082775307_0 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
