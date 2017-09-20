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

// System.Xml.XmlInputStream
struct XmlInputStream_t371774744_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Text.Encoding
struct Encoding_t453909881_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin_1060652501.h"

// System.Void System.Xml.XmlInputStream::.ctor(System.IO.Stream)
extern "C"  void XmlInputStream__ctor_m_186854193_0 (XmlInputStream_t371774744_0 * __this, Stream_t463444077_0 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::.cctor()
extern "C"  void XmlInputStream__cctor_m716412021_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlInputStream::GetStringFromBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* XmlInputStream_GetStringFromBytes_m1698567078_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Initialize(System.IO.Stream)
extern "C"  void XmlInputStream_Initialize_m_649033229_0 (XmlInputStream_t371774744_0 * __this, Stream_t463444077_0 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::ReadByteSpecial()
extern "C"  int32_t XmlInputStream_ReadByteSpecial_m_776949165_0 (XmlInputStream_t371774744_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::SkipWhitespace()
extern "C"  int32_t XmlInputStream_SkipWhitespace_m233829254_0 (XmlInputStream_t371774744_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Xml.XmlInputStream::get_ActualEncoding()
extern "C"  Encoding_t453909881_0 * XmlInputStream_get_ActualEncoding_m_801902662_0 (XmlInputStream_t371774744_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlInputStream::get_CanRead()
extern "C"  bool XmlInputStream_get_CanRead_m1374286843_0 (XmlInputStream_t371774744_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlInputStream::get_CanSeek()
extern "C"  bool XmlInputStream_get_CanSeek_m1403041885_0 (XmlInputStream_t371774744_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlInputStream::get_CanWrite()
extern "C"  bool XmlInputStream_get_CanWrite_m175872700_0 (XmlInputStream_t371774744_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlInputStream::get_Length()
extern "C"  int64_t XmlInputStream_get_Length_m_1671728328_0 (XmlInputStream_t371774744_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlInputStream::get_Position()
extern "C"  int64_t XmlInputStream_get_Position_m8346747_0 (XmlInputStream_t371774744_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::set_Position(System.Int64)
extern "C"  void XmlInputStream_set_Position_m_1361666620_0 (XmlInputStream_t371774744_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Close()
extern "C"  void XmlInputStream_Close_m1888068430_0 (XmlInputStream_t371774744_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Flush()
extern "C"  void XmlInputStream_Flush_m261156186_0 (XmlInputStream_t371774744_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t XmlInputStream_Read_m_2043372695_0 (XmlInputStream_t371774744_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::ReadByte()
extern "C"  int32_t XmlInputStream_ReadByte_m_1083022296_0 (XmlInputStream_t371774744_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t XmlInputStream_Seek_m162895276_0 (XmlInputStream_t371774744_0 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::SetLength(System.Int64)
extern "C"  void XmlInputStream_SetLength_m2044755088_0 (XmlInputStream_t371774744_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void XmlInputStream_Write_m_559402284_0 (XmlInputStream_t371774744_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
