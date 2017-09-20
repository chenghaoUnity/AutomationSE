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

// System.Xml.XmlTextWriter
struct XmlTextWriter_t_646258414_0;
// System.IO.TextWriter
struct TextWriter_t1418103405_0;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;
// System.Exception
struct Exception_t2143823668_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Formatting_1149947990.h"
#include "System_Xml_System_Xml_XmlSpace_638931788.h"

// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter)
extern "C"  void XmlTextWriter__ctor_m_998263973_0 (XmlTextWriter_t_646258414_0 * __this, TextWriter_t1418103405_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::.cctor()
extern "C"  void XmlTextWriter__cctor_m1637914089_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::Initialize(System.IO.TextWriter)
extern "C"  void XmlTextWriter_Initialize_m_1358259737_0 (XmlTextWriter_t_646258414_0 * __this, TextWriter_t1418103405_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::set_Formatting(System.Xml.Formatting)
extern "C"  void XmlTextWriter_set_Formatting_m1915241301_0 (XmlTextWriter_t_646258414_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::get_XmlLang()
extern "C"  String_t* XmlTextWriter_get_XmlLang_m893543515_0 (XmlTextWriter_t_646258414_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlTextWriter::get_XmlSpace()
extern "C"  int32_t XmlTextWriter_get_XmlSpace_m_1045259258_0 (XmlTextWriter_t_646258414_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::LookupPrefix(System.String)
extern "C"  String_t* XmlTextWriter_LookupPrefix_m_1730322285_0 (XmlTextWriter_t_646258414_0 * __this, String_t* ___namespaceUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::Close()
extern "C"  void XmlTextWriter_Close_m670868314_0 (XmlTextWriter_t_646258414_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartDocumentCore(System.Boolean,System.Boolean)
extern "C"  void XmlTextWriter_WriteStartDocumentCore_m_750885367_0 (XmlTextWriter_t_646258414_0 * __this, bool ___outputStd, bool ___standalone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteDocType(System.String,System.String,System.String,System.String)
extern "C"  void XmlTextWriter_WriteDocType_m1234778723_0 (XmlTextWriter_t_646258414_0 * __this, String_t* ___name, String_t* ___pubid, String_t* ___sysid, String_t* ___subset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartElement(System.String,System.String,System.String)
extern "C"  void XmlTextWriter_WriteStartElement_m595844223_0 (XmlTextWriter_t_646258414_0 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CloseStartElement()
extern "C"  void XmlTextWriter_CloseStartElement_m2001480628_0 (XmlTextWriter_t_646258414_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CloseStartElementCore()
extern "C"  void XmlTextWriter_CloseStartElementCore_m_1958098381_0 (XmlTextWriter_t_646258414_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndElement()
extern "C"  void XmlTextWriter_WriteEndElement_m_2045042430_0 (XmlTextWriter_t_646258414_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteFullEndElement()
extern "C"  void XmlTextWriter_WriteFullEndElement_m235661617_0 (XmlTextWriter_t_646258414_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndElementCore(System.Boolean)
extern "C"  void XmlTextWriter_WriteEndElementCore_m_1824348104_0 (XmlTextWriter_t_646258414_0 * __this, bool ___full, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartAttribute(System.String,System.String,System.String)
extern "C"  void XmlTextWriter_WriteStartAttribute_m1712946271_0 (XmlTextWriter_t_646258414_0 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::DetermineAttributePrefix(System.String,System.String,System.String)
extern "C"  String_t* XmlTextWriter_DetermineAttributePrefix_m1040595548_0 (XmlTextWriter_t_646258414_0 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::MockupPrefix(System.String,System.Boolean)
extern "C"  String_t* XmlTextWriter_MockupPrefix_m683099445_0 (XmlTextWriter_t_646258414_0 * __this, String_t* ___ns, bool ___skipLookup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndAttribute()
extern "C"  void XmlTextWriter_WriteEndAttribute_m826824546_0 (XmlTextWriter_t_646258414_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteComment(System.String)
extern "C"  void XmlTextWriter_WriteComment_m_644492798_0 (XmlTextWriter_t_646258414_0 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteProcessingInstruction(System.String,System.String)
extern "C"  void XmlTextWriter_WriteProcessingInstruction_m677232418_0 (XmlTextWriter_t_646258414_0 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteWhitespace(System.String)
extern "C"  void XmlTextWriter_WriteWhitespace_m843782372_0 (XmlTextWriter_t_646258414_0 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCData(System.String)
extern "C"  void XmlTextWriter_WriteCData_m487163892_0 (XmlTextWriter_t_646258414_0 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteString(System.String)
extern "C"  void XmlTextWriter_WriteString_m1088021712_0 (XmlTextWriter_t_646258414_0 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEntityRef(System.String)
extern "C"  void XmlTextWriter_WriteEntityRef_m_2099102063_0 (XmlTextWriter_t_646258414_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndent()
extern "C"  void XmlTextWriter_WriteIndent_m158808397_0 (XmlTextWriter_t_646258414_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndentEndElement()
extern "C"  void XmlTextWriter_WriteIndentEndElement_m1791708110_0 (XmlTextWriter_t_646258414_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndentAttribute()
extern "C"  void XmlTextWriter_WriteIndentAttribute_m1847722417_0 (XmlTextWriter_t_646258414_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextWriter::WriteIndentCore(System.Int32,System.Boolean)
extern "C"  bool XmlTextWriter_WriteIndentCore_m322298696_0 (XmlTextWriter_t_646258414_0 * __this, int32_t ___nestFix, bool ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::OutputAutoStartDocument()
extern "C"  void XmlTextWriter_OutputAutoStartDocument_m1704246543_0 (XmlTextWriter_t_646258414_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::ShiftStateTopLevel(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void XmlTextWriter_ShiftStateTopLevel_m1568296473_0 (XmlTextWriter_t_646258414_0 * __this, String_t* ___occured, bool ___allowAttribute, bool ___dontCheckXmlDecl, bool ___isCharacter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CheckMixedContentState()
extern "C"  void XmlTextWriter_CheckMixedContentState_m_1235366645_0 (XmlTextWriter_t_646258414_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::ShiftStateContent(System.String,System.Boolean)
extern "C"  void XmlTextWriter_ShiftStateContent_m_546011673_0 (XmlTextWriter_t_646258414_0 * __this, String_t* ___occured, bool ___allowAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEscapedString(System.String,System.Boolean)
extern "C"  void XmlTextWriter_WriteEscapedString_m_1037475312_0 (XmlTextWriter_t_646258414_0 * __this, String_t* ___text, bool ___isAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCheckedString(System.String)
extern "C"  void XmlTextWriter_WriteCheckedString_m1807330473_0 (XmlTextWriter_t_646258414_0 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCheckedBuffer(System.Char[],System.Int32,System.Int32)
extern "C"  void XmlTextWriter_WriteCheckedBuffer_m_2008065037_0 (XmlTextWriter_t_646258414_0 * __this, CharU5BU5D_t_1225802637_0* ___text, int32_t ___idx, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEscapedBuffer(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C"  void XmlTextWriter_WriteEscapedBuffer_m_2036499834_0 (XmlTextWriter_t_646258414_0 * __this, CharU5BU5D_t_1225802637_0* ___text, int32_t ___index, int32_t ___length, bool ___isAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::ArgumentError(System.String)
extern "C"  Exception_t2143823668_0 * XmlTextWriter_ArgumentError_m_1837099082_0 (XmlTextWriter_t_646258414_0 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::InvalidOperation(System.String)
extern "C"  Exception_t2143823668_0 * XmlTextWriter_InvalidOperation_m_1723557967_0 (XmlTextWriter_t_646258414_0 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::StateError(System.String)
extern "C"  Exception_t2143823668_0 * XmlTextWriter_StateError_m948877834_0 (XmlTextWriter_t_646258414_0 * __this, String_t* ___occured, const MethodInfo* method) IL2CPP_METHOD_ATTR;
