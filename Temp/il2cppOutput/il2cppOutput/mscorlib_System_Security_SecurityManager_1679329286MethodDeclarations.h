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

// System.Reflection.Assembly
struct Assembly_t_957553394_0;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.PermissionSet
struct PermissionSet_t_15044864_0;
// System.Security.Policy.Evidence
struct Evidence_t_738265248_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1466995657_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Reflection.MethodBase
struct MethodBase_t553742458_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_Security_RuntimeDeclSecurityActio_1348583730.h"

// System.Void System.Security.SecurityManager::.cctor()
extern "C"  void SecurityManager__cctor_m_302362857_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_CheckExecutionRights()
extern "C"  bool SecurityManager_get_CheckExecutionRights_m435735708_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
extern "C"  bool SecurityManager_get_SecurityEnabled_m_1437851730_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::IsGranted(System.Reflection.Assembly,System.Security.IPermission)
extern "C"  bool SecurityManager_IsGranted_m_904014816_0 (Object_t * __this /* static, unused */, Assembly_t_957553394_0 * ___a, Object_t * ___perm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityManager::CheckPermissionSet(System.Reflection.Assembly,System.Security.PermissionSet,System.Boolean)
extern "C"  Object_t * SecurityManager_CheckPermissionSet_m570850096_0 (Object_t * __this /* static, unused */, Assembly_t_957553394_0 * ___a, PermissionSet_t_15044864_0 * ___ps, bool ___noncas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::ResolvePolicy(System.Security.Policy.Evidence)
extern "C"  PermissionSet_t_15044864_0 * SecurityManager_ResolvePolicy_m_1967193811_0 (Object_t * __this /* static, unused */, Evidence_t_738265248_0 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::ResolvePolicy(System.Security.Policy.Evidence,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet&)
extern "C"  PermissionSet_t_15044864_0 * SecurityManager_ResolvePolicy_m524737311_0 (Object_t * __this /* static, unused */, Evidence_t_738265248_0 * ___evidence, PermissionSet_t_15044864_0 * ___reqdPset, PermissionSet_t_15044864_0 * ___optPset, PermissionSet_t_15044864_0 * ___denyPset, PermissionSet_t_15044864_0 ** ___denied, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.SecurityManager::get_Hierarchy()
extern "C"  Object_t * SecurityManager_get_Hierarchy_m1281665942_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::InitializePolicyHierarchy()
extern "C"  void SecurityManager_InitializePolicyHierarchy_m_2115394649_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::ResolvePolicyLevel(System.Security.PermissionSet&,System.Security.Policy.PolicyLevel,System.Security.Policy.Evidence)
extern "C"  bool SecurityManager_ResolvePolicyLevel_m1396758681_0 (Object_t * __this /* static, unused */, PermissionSet_t_15044864_0 ** ___ps, PolicyLevel_t1466995657_0 * ___pl, Evidence_t_738265248_0 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::ResolveIdentityPermissions(System.Security.PermissionSet,System.Security.Policy.Evidence)
extern "C"  void SecurityManager_ResolveIdentityPermissions_m1190675822_0 (Object_t * __this /* static, unused */, PermissionSet_t_15044864_0 * ___ps, Evidence_t_738265248_0 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyLevel System.Security.SecurityManager::get_ResolvingPolicyLevel()
extern "C"  PolicyLevel_t1466995657_0 * SecurityManager_get_ResolvingPolicyLevel_m_1302506822_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::set_ResolvingPolicyLevel(System.Security.Policy.PolicyLevel)
extern "C"  void SecurityManager_set_ResolvingPolicyLevel_m_1049229329_0 (Object_t * __this /* static, unused */, PolicyLevel_t1466995657_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
extern "C"  PermissionSet_t_15044864_0 * SecurityManager_Decode_m1966008144_0 (Object_t * __this /* static, unused */, IntPtr_t ___permissions, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
extern "C"  PermissionSet_t_15044864_0 * SecurityManager_Decode_m958562396_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___encodedPermissions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::GetLinkDemandSecurity(System.Reflection.MethodBase,System.Security.RuntimeDeclSecurityActions*,System.Security.RuntimeDeclSecurityActions*)
extern "C"  bool SecurityManager_GetLinkDemandSecurity_m888694131_0 (Object_t * __this /* static, unused */, MethodBase_t553742458_0 * ___method, RuntimeDeclSecurityActions_t_1348583730_0 * ___cdecl, RuntimeDeclSecurityActions_t_1348583730_0 * ___mdecl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::ReflectedLinkDemandInvoke(System.Reflection.MethodBase)
extern "C"  void SecurityManager_ReflectedLinkDemandInvoke_m361815255_0 (Object_t * __this /* static, unused */, MethodBase_t553742458_0 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::ReflectedLinkDemandQuery(System.Reflection.MethodBase)
extern "C"  bool SecurityManager_ReflectedLinkDemandQuery_m_2116584707_0 (Object_t * __this /* static, unused */, MethodBase_t553742458_0 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::LinkDemand(System.Reflection.Assembly,System.Security.RuntimeDeclSecurityActions*,System.Security.RuntimeDeclSecurityActions*)
extern "C"  bool SecurityManager_LinkDemand_m1921264063_0 (Object_t * __this /* static, unused */, Assembly_t_957553394_0 * ___a, RuntimeDeclSecurityActions_t_1348583730_0 * ___klass, RuntimeDeclSecurityActions_t_1348583730_0 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
