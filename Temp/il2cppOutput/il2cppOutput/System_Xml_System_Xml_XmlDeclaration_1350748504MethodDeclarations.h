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

// System.Xml.XmlDeclaration
struct XmlDeclaration_t_1350748504_0;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t_307474771_0;
// System.Xml.XmlNode
struct XmlNode_t_990591852_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"

// System.Void System.Xml.XmlDeclaration::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlDeclaration__ctor_m_2042442472_0 (XmlDeclaration_t_1350748504_0 * __this, String_t* ___version, String_t* ___encoding, String_t* ___standalone, XmlDocument_t_307474771_0 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Encoding()
extern "C"  String_t* XmlDeclaration_get_Encoding_m1176639093_0 (XmlDeclaration_t_1350748504_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Encoding(System.String)
extern "C"  void XmlDeclaration_set_Encoding_m63929174_0 (XmlDeclaration_t_1350748504_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_InnerText()
extern "C"  String_t* XmlDeclaration_get_InnerText_m_500956125_0 (XmlDeclaration_t_1350748504_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_LocalName()
extern "C"  String_t* XmlDeclaration_get_LocalName_m1321600854_0 (XmlDeclaration_t_1350748504_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Name()
extern "C"  String_t* XmlDeclaration_get_Name_m_2098491859_0 (XmlDeclaration_t_1350748504_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDeclaration::get_NodeType()
extern "C"  int32_t XmlDeclaration_get_NodeType_m_1325740435_0 (XmlDeclaration_t_1350748504_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Standalone()
extern "C"  String_t* XmlDeclaration_get_Standalone_m136847527_0 (XmlDeclaration_t_1350748504_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Standalone(System.String)
extern "C"  void XmlDeclaration_set_Standalone_m_685077468_0 (XmlDeclaration_t_1350748504_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Value()
extern "C"  String_t* XmlDeclaration_get_Value_m_2119031567_0 (XmlDeclaration_t_1350748504_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Value(System.String)
extern "C"  void XmlDeclaration_set_Value_m_1729878616_0 (XmlDeclaration_t_1350748504_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Version()
extern "C"  String_t* XmlDeclaration_get_Version_m_1214857512_0 (XmlDeclaration_t_1350748504_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDeclaration::CloneNode(System.Boolean)
extern "C"  XmlNode_t_990591852_0 * XmlDeclaration_CloneNode_m361680618_0 (XmlDeclaration_t_1350748504_0 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlDeclaration::SkipWhitespace(System.String,System.Int32)
extern "C"  int32_t XmlDeclaration_SkipWhitespace_m_162483541_0 (XmlDeclaration_t_1350748504_0 * __this, String_t* ___input, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::ParseInput(System.String)
extern "C"  void XmlDeclaration_ParseInput_m_294007441_0 (XmlDeclaration_t_1350748504_0 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
