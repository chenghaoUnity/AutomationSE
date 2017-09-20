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

// System.Configuration.ConfigInfo
struct ConfigInfo_t_750583883_0;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Configuration.ConfigInfo::.ctor()
extern "C"  void ConfigInfo__ctor_m56134907_0 (ConfigInfo_t_750583883_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigInfo::CreateInstance()
extern "C"  Object_t * ConfigInfo_CreateInstance_m_43533819_0 (ConfigInfo_t_750583883_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfo::set_StreamName(System.String)
extern "C"  void ConfigInfo_set_StreamName_m788530065_0 (ConfigInfo_t_750583883_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfo::ThrowException(System.String,System.Xml.XmlReader)
extern "C"  void ConfigInfo_ThrowException_m_641421838_0 (ConfigInfo_t_750583883_0 * __this, String_t* ___text, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
