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

// System.Xml.XmlStreamReader
struct XmlStreamReader_t_1938269963_0;
// System.Xml.XmlInputStream
struct XmlInputStream_t371774744_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.XmlStreamReader::.ctor(System.Xml.XmlInputStream)
extern "C"  void XmlStreamReader__ctor_m519253800_0 (XmlStreamReader_t_1938269963_0 * __this, XmlInputStream_t371774744_0 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::.ctor(System.IO.Stream)
extern "C"  void XmlStreamReader__ctor_m_1786478184_0 (XmlStreamReader_t_1938269963_0 * __this, Stream_t463444077_0 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::.cctor()
extern "C"  void XmlStreamReader__cctor_m_1350889780_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::Close()
extern "C"  void XmlStreamReader_Close_m1682833943_0 (XmlStreamReader_t_1938269963_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t XmlStreamReader_Read_m1091060832_0 (XmlStreamReader_t_1938269963_0 * __this, CharU5BU5D_t_1225802637_0* ___dest_buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::Dispose(System.Boolean)
extern "C"  void XmlStreamReader_Dispose_m_101306891_0 (XmlStreamReader_t_1938269963_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
