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

// System.Runtime.Remoting.Lifetime.Lease
struct Lease_t_1599480145_0;
// System.Runtime.Remoting.Lifetime.ISponsor
struct ISponsor_t_1048353284_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan_393459662.h"
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseSta1681443618.h"

// System.Void System.Runtime.Remoting.Lifetime.Lease::.ctor()
extern "C"  void Lease__ctor_m_643245945_0 (Lease_t_1599480145_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::get_CurrentLeaseTime()
extern "C"  TimeSpan_t_393459662_0  Lease_get_CurrentLeaseTime_m_2085461583_0 (Lease_t_1599480145_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.Lease::get_CurrentState()
extern "C"  int32_t Lease_get_CurrentState_m_2056042741_0 (Lease_t_1599480145_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::Activate()
extern "C"  void Lease_Activate_m904773136_0 (Lease_t_1599480145_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_InitialLeaseTime(System.TimeSpan)
extern "C"  void Lease_set_InitialLeaseTime_m_1184304001_0 (Lease_t_1599480145_0 * __this, TimeSpan_t_393459662_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_RenewOnCallTime(System.TimeSpan)
extern "C"  void Lease_set_RenewOnCallTime_m_2031313475_0 (Lease_t_1599480145_0 * __this, TimeSpan_t_393459662_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_SponsorshipTimeout(System.TimeSpan)
extern "C"  void Lease_set_SponsorshipTimeout_m_2130977545_0 (Lease_t_1599480145_0 * __this, TimeSpan_t_393459662_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::Renew(System.TimeSpan)
extern "C"  TimeSpan_t_393459662_0  Lease_Renew_m235269479_0 (Lease_t_1599480145_0 * __this, TimeSpan_t_393459662_0  ___renewalTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::Unregister(System.Runtime.Remoting.Lifetime.ISponsor)
extern "C"  void Lease_Unregister_m_1697056551_0 (Lease_t_1599480145_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::UpdateState()
extern "C"  void Lease_UpdateState_m_1791905299_0 (Lease_t_1599480145_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::CheckNextSponsor()
extern "C"  void Lease_CheckNextSponsor_m4694172_0 (Lease_t_1599480145_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::ProcessSponsorResponse(System.Object,System.Boolean)
extern "C"  void Lease_ProcessSponsorResponse_m1073931474_0 (Lease_t_1599480145_0 * __this, Object_t * ___state, bool ___timedOut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
