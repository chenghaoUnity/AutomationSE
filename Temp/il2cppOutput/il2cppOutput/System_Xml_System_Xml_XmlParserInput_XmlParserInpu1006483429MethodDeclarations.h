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

// System.Xml.XmlParserInput/XmlParserInputSource
struct XmlParserInputSource_t1006483429_0;
// System.IO.TextReader
struct TextReader_t1262698173_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.XmlParserInput/XmlParserInputSource::.ctor(System.IO.TextReader,System.String,System.Boolean,System.Int32,System.Int32)
extern "C"  void XmlParserInputSource__ctor_m956893193_0 (XmlParserInputSource_t1006483429_0 * __this, TextReader_t1262698173_0 * ___reader, String_t* ___baseUri, bool ___pe, int32_t ___line, int32_t ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LineNumber()
extern "C"  int32_t XmlParserInputSource_get_LineNumber_m_2079150245_0 (XmlParserInputSource_t1006483429_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LinePosition()
extern "C"  int32_t XmlParserInputSource_get_LinePosition_m870999291_0 (XmlParserInputSource_t1006483429_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput/XmlParserInputSource::Close()
extern "C"  void XmlParserInputSource_Close_m1137723815_0 (XmlParserInputSource_t1006483429_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::Read()
extern "C"  int32_t XmlParserInputSource_Read_m_314029813_0 (XmlParserInputSource_t1006483429_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
