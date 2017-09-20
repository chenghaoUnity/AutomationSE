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

// System.Net.Configuration.ConnectionManagementData
struct ConnectionManagementData_t_150871847_0;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Configuration.ConnectionManagementData::.ctor(System.Object)
extern "C"  void ConnectionManagementData__ctor_m_892358691_0 (ConnectionManagementData_t_150871847_0 * __this, Object_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementData::Add(System.String,System.Int32)
extern "C"  void ConnectionManagementData_Add_m935003947_0 (ConnectionManagementData_t_150871847_0 * __this, String_t* ___address, int32_t ___nconns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Net.Configuration.ConnectionManagementData::GetMaxConnections(System.String)
extern "C"  uint32_t ConnectionManagementData_GetMaxConnections_m_941836917_0 (ConnectionManagementData_t_150871847_0 * __this, String_t* ___hostOrIP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
