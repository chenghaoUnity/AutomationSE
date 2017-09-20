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

// System.Xml.Schema.XmlSchemaValidationException
struct XmlSchemaValidationException_t1857362118_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1727784015_0;
// System.Exception
struct Exception_t2143823668_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Xml.Schema.XmlSchemaValidationException::.ctor()
extern "C"  void XmlSchemaValidationException__ctor_m133673168_0 (XmlSchemaValidationException_t1857362118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlSchemaValidationException__ctor_m408066577_0 (XmlSchemaValidationException_t1857362118_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidationException::.ctor(System.String,System.Object,System.String,System.Xml.Schema.XmlSchemaObject,System.Exception)
extern "C"  void XmlSchemaValidationException__ctor_m1234846862_0 (XmlSchemaValidationException_t1857362118_0 * __this, String_t* ___message, Object_t * ___sender, String_t* ___sourceUri, XmlSchemaObject_t1727784015_0 * ___sourceObject, Exception_t2143823668_0 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaValidationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlSchemaValidationException_GetObjectData_m702890094_0 (XmlSchemaValidationException_t1857362118_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
