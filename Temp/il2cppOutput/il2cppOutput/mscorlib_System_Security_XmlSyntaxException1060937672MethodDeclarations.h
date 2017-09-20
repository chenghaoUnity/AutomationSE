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

// System.Security.XmlSyntaxException
struct XmlSyntaxException_t1060937672_0;
// System.String
struct String_t;
// System.Exception
struct Exception_t2143823668_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Security.XmlSyntaxException::.ctor()
extern "C"  void XmlSyntaxException__ctor_m_642833138_0 (XmlSyntaxException_t1060937672_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.XmlSyntaxException::.ctor(System.String)
extern "C"  void XmlSyntaxException__ctor_m_648568652_0 (XmlSyntaxException_t1060937672_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.XmlSyntaxException::.ctor(System.String,System.Exception)
extern "C"  void XmlSyntaxException__ctor_m_1776082174_0 (XmlSyntaxException_t1060937672_0 * __this, String_t* ___message, Exception_t2143823668_0 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.XmlSyntaxException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlSyntaxException__ctor_m_822839985_0 (XmlSyntaxException_t1060937672_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
