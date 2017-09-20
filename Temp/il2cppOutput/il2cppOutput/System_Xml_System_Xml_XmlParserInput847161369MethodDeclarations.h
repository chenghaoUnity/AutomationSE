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

// System.Xml.XmlParserInput
struct XmlParserInput_t847161369_0;
// System.IO.TextReader
struct TextReader_t1262698173_0;
// System.String
struct String_t;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t_1403141775_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.XmlParserInput::.ctor(System.IO.TextReader,System.String)
extern "C"  void XmlParserInput__ctor_m1070676826_0 (XmlParserInput_t847161369_0 * __this, TextReader_t1262698173_0 * ___reader, String_t* ___baseURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::.ctor(System.IO.TextReader,System.String,System.Int32,System.Int32)
extern "C"  void XmlParserInput__ctor_m_434162630_0 (XmlParserInput_t847161369_0 * __this, TextReader_t1262698173_0 * ___reader, String_t* ___baseURI, int32_t ___line, int32_t ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::Close()
extern "C"  void XmlParserInput_Close_m_530931347_0 (XmlParserInput_t847161369_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::PushPEBuffer(Mono.Xml.DTDParameterEntityDeclaration)
extern "C"  void XmlParserInput_PushPEBuffer_m274373084_0 (XmlParserInput_t847161369_0 * __this, DTDParameterEntityDeclaration_t_1403141775_0 * ___pe, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::ReadSourceChar()
extern "C"  int32_t XmlParserInput_ReadSourceChar_m_551980942_0 (XmlParserInput_t847161369_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::PeekChar()
extern "C"  int32_t XmlParserInput_PeekChar_m455148668_0 (XmlParserInput_t847161369_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::ReadChar()
extern "C"  int32_t XmlParserInput_ReadChar_m_236743561_0 (XmlParserInput_t847161369_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserInput::get_BaseURI()
extern "C"  String_t* XmlParserInput_get_BaseURI_m_1916432246_0 (XmlParserInput_t847161369_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlParserInput::get_HasPEBuffer()
extern "C"  bool XmlParserInput_get_HasPEBuffer_m_55990077_0 (XmlParserInput_t847161369_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::get_LineNumber()
extern "C"  int32_t XmlParserInput_get_LineNumber_m_1568154287_0 (XmlParserInput_t847161369_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::get_LinePosition()
extern "C"  int32_t XmlParserInput_get_LinePosition_m_1983124111_0 (XmlParserInput_t847161369_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlParserInput::get_AllowTextDecl()
extern "C"  bool XmlParserInput_get_AllowTextDecl_m409413236_0 (XmlParserInput_t847161369_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::set_AllowTextDecl(System.Boolean)
extern "C"  void XmlParserInput_set_AllowTextDecl_m_537287953_0 (XmlParserInput_t847161369_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
