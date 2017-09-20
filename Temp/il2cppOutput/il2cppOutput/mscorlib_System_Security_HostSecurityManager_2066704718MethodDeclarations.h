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

// System.Security.HostSecurityManager
struct HostSecurityManager_t_2066704718_0;
// System.Security.Policy.Evidence
struct Evidence_t_738265248_0;
// System.Reflection.Assembly
struct Assembly_t_957553394_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_HostSecurityManagerOptio_1261765748.h"

// System.Void System.Security.HostSecurityManager::.ctor()
extern "C"  void HostSecurityManager__ctor_m_665532130_0 (HostSecurityManager_t_2066704718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.HostSecurityManagerOptions System.Security.HostSecurityManager::get_Flags()
extern "C"  int32_t HostSecurityManager_get_Flags_m_1244986563_0 (HostSecurityManager_t_2066704718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Evidence System.Security.HostSecurityManager::ProvideAssemblyEvidence(System.Reflection.Assembly,System.Security.Policy.Evidence)
extern "C"  Evidence_t_738265248_0 * HostSecurityManager_ProvideAssemblyEvidence_m_357176537_0 (HostSecurityManager_t_2066704718_0 * __this, Assembly_t_957553394_0 * ___loadedAssembly, Evidence_t_738265248_0 * ___inputEvidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
