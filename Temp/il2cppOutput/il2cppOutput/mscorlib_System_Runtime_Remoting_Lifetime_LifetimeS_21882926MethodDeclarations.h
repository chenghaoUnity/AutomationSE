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

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t_931382277_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan_393459662.h"

// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::.cctor()
extern "C"  void LifetimeServices__cctor_m2116108847_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_LeaseManagerPollTime()
extern "C"  TimeSpan_t_393459662_0  LifetimeServices_get_LeaseManagerPollTime_m1057706673_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_LeaseManagerPollTime(System.TimeSpan)
extern "C"  void LifetimeServices_set_LeaseManagerPollTime_m511253658_0 (Object_t * __this /* static, unused */, TimeSpan_t_393459662_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_LeaseTime()
extern "C"  TimeSpan_t_393459662_0  LifetimeServices_get_LeaseTime_m_1994104073_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_LeaseTime(System.TimeSpan)
extern "C"  void LifetimeServices_set_LeaseTime_m1820419926_0 (Object_t * __this /* static, unused */, TimeSpan_t_393459662_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_RenewOnCallTime()
extern "C"  TimeSpan_t_393459662_0  LifetimeServices_get_RenewOnCallTime_m_1938866393_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_RenewOnCallTime(System.TimeSpan)
extern "C"  void LifetimeServices_set_RenewOnCallTime_m_1090882458_0 (Object_t * __this /* static, unused */, TimeSpan_t_393459662_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_SponsorshipTimeout()
extern "C"  TimeSpan_t_393459662_0  LifetimeServices_get_SponsorshipTimeout_m536018909_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_SponsorshipTimeout(System.TimeSpan)
extern "C"  void LifetimeServices_set_SponsorshipTimeout_m_1822221906_0 (Object_t * __this /* static, unused */, TimeSpan_t_393459662_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::TrackLifetime(System.Runtime.Remoting.ServerIdentity)
extern "C"  void LifetimeServices_TrackLifetime_m_1024686311_0 (Object_t * __this /* static, unused */, ServerIdentity_t_931382277_0 * ___identity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
