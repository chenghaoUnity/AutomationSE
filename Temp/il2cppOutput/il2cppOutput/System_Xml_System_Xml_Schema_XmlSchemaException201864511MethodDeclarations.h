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

// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t201864511_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1727784015_0;
// System.Exception
struct Exception_t2143823668_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Xml.Schema.XmlSchemaException::.ctor()
extern "C"  void XmlSchemaException__ctor_m_351877065_0 (XmlSchemaException_t201864511_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlSchemaException__ctor_m_1272747784_0 (XmlSchemaException_t201864511_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Int32,System.Int32,System.Xml.Schema.XmlSchemaObject,System.String,System.Exception)
extern "C"  void XmlSchemaException__ctor_m_1780899421_0 (XmlSchemaException_t201864511_0 * __this, String_t* ___message, int32_t ___lineNumber, int32_t ___linePosition, XmlSchemaObject_t1727784015_0 * ___sourceObject, String_t* ___sourceUri, Exception_t2143823668_0 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Object,System.String,System.Xml.Schema.XmlSchemaObject,System.Exception)
extern "C"  void XmlSchemaException__ctor_m_445967499_0 (XmlSchemaException_t201864511_0 * __this, String_t* ___message, Object_t * ___sender, String_t* ___sourceUri, XmlSchemaObject_t1727784015_0 * ___sourceObject, Exception_t2143823668_0 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Xml.Schema.XmlSchemaObject,System.Exception)
extern "C"  void XmlSchemaException__ctor_m95575999_0 (XmlSchemaException_t201864511_0 * __this, String_t* ___message, XmlSchemaObject_t1727784015_0 * ___sourceObject, Exception_t2143823668_0 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Exception)
extern "C"  void XmlSchemaException__ctor_m_2046584725_0 (XmlSchemaException_t201864511_0 * __this, String_t* ___message, Exception_t2143823668_0 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::GetMessage(System.String,System.String,System.Object,System.Xml.Schema.XmlSchemaObject)
extern "C"  String_t* XmlSchemaException_GetMessage_m_1087191369_0 (Object_t * __this /* static, unused */, String_t* ___message, String_t* ___sourceUri, Object_t * ___sender, XmlSchemaObject_t1727784015_0 * ___sourceObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::GetMessage(System.String,System.String,System.Int32,System.Int32,System.Xml.Schema.XmlSchemaObject)
extern "C"  String_t* XmlSchemaException_GetMessage_m_2109843127_0 (Object_t * __this /* static, unused */, String_t* ___message, String_t* ___sourceUri, int32_t ___lineNumber, int32_t ___linePosition, XmlSchemaObject_t1727784015_0 * ___sourceObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::get_Message()
extern "C"  String_t* XmlSchemaException_get_Message_m_963062416_0 (XmlSchemaException_t201864511_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlSchemaException_GetObjectData_m_792184747_0 (XmlSchemaException_t201864511_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
