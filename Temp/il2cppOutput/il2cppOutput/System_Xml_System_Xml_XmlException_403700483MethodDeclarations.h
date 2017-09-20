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

// System.Xml.XmlException
struct XmlException_t_403700483_0;
// System.String
struct String_t;
// System.Exception
struct Exception_t2143823668_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t970576597_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Xml.XmlException::.ctor()
extern "C"  void XmlException__ctor_m1502310195_0 (XmlException_t_403700483_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String,System.Exception)
extern "C"  void XmlException__ctor_m1015471719_0 (XmlException_t_403700483_0 * __this, String_t* ___message, Exception_t2143823668_0 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlException__ctor_m122822132_0 (XmlException_t_403700483_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String)
extern "C"  void XmlException__ctor_m_1068385617_0 (XmlException_t_403700483_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.Xml.IXmlLineInfo,System.String,System.String)
extern "C"  void XmlException__ctor_m_516718511_0 (XmlException_t_403700483_0 * __this, Object_t * ___li, String_t* ___sourceUri, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.Xml.IXmlLineInfo,System.Exception,System.String,System.String)
extern "C"  void XmlException__ctor_m_442166283_0 (XmlException_t_403700483_0 * __this, Object_t * ___li, Exception_t2143823668_0 * ___innerException, String_t* ___sourceUri, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String,System.Exception,System.Int32,System.Int32)
extern "C"  void XmlException__ctor_m1096610055_0 (XmlException_t_403700483_0 * __this, String_t* ___message, Exception_t2143823668_0 * ___innerException, int32_t ___lineNumber, int32_t ___linePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlException::get_Message()
extern "C"  String_t* XmlException_get_Message_m1432935250_0 (XmlException_t_403700483_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlException_GetObjectData_m660615505_0 (XmlException_t_403700483_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
