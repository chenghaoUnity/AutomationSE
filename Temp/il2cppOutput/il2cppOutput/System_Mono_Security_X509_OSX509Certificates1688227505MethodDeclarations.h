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

// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.IntPtr[]
struct IntPtrU5BU5D_t_2059958116_0;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t832007368_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "System_Mono_Security_X509_OSX509Certificates_SecT_1751370046.h"

// System.Void Mono.Security.X509.OSX509Certificates::.cctor()
extern "C"  void OSX509Certificates__cctor_m1038795726_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::SecCertificateCreateWithData(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t OSX509Certificates_SecCertificateCreateWithData_m2116804160_0 (Object_t * __this /* static, unused */, IntPtr_t ___allocator, IntPtr_t ___nsdataRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.OSX509Certificates::SecTrustCreateWithCertificates(System.IntPtr,System.IntPtr,System.IntPtr&)
extern "C"  int32_t OSX509Certificates_SecTrustCreateWithCertificates_m1080605110_0 (Object_t * __this /* static, unused */, IntPtr_t ___certOrCertArray, IntPtr_t ___policies, IntPtr_t* ___sectrustref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::SecPolicyCreateSSL(System.Int32,System.IntPtr)
extern "C"  IntPtr_t OSX509Certificates_SecPolicyCreateSSL_m1415076668_0 (Object_t * __this /* static, unused */, int32_t ___server, IntPtr_t ___cfStringHostname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.OSX509Certificates::SecTrustEvaluate(System.IntPtr,Mono.Security.X509.OSX509Certificates/SecTrustResult&)
extern "C"  int32_t OSX509Certificates_SecTrustEvaluate_m82762637_0 (Object_t * __this /* static, unused */, IntPtr_t ___secTrustRef, int32_t* ___secTrustResultTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::CFDataCreate(System.IntPtr,System.Byte*,System.IntPtr)
extern "C"  IntPtr_t OSX509Certificates_CFDataCreate_m_90977034_0 (Object_t * __this /* static, unused */, IntPtr_t ___allocator, uint8_t* ___bytes, IntPtr_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.OSX509Certificates::CFRelease(System.IntPtr)
extern "C"  void OSX509Certificates_CFRelease_m_319120941_0 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::CFArrayCreate(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t OSX509Certificates_CFArrayCreate_m_1588319430_0 (Object_t * __this /* static, unused */, IntPtr_t ___allocator, IntPtr_t ___values, IntPtr_t ___numValues, IntPtr_t ___callbacks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::MakeCFData(System.Byte[])
extern "C"  IntPtr_t OSX509Certificates_MakeCFData_m_1659557506_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::FromIntPtrs(System.IntPtr[])
extern "C"  IntPtr_t OSX509Certificates_FromIntPtrs_m_1396595306_0 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t_2059958116_0* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.OSX509Certificates/SecTrustResult Mono.Security.X509.OSX509Certificates::TrustEvaluateSsl(Mono.Security.X509.X509CertificateCollection)
extern "C"  int32_t OSX509Certificates_TrustEvaluateSsl_m1836821439_0 (Object_t * __this /* static, unused */, X509CertificateCollection_t832007368_0 * ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.OSX509Certificates/SecTrustResult Mono.Security.X509.OSX509Certificates::_TrustEvaluateSsl(Mono.Security.X509.X509CertificateCollection)
extern "C"  int32_t OSX509Certificates__TrustEvaluateSsl_m_2056146076_0 (Object_t * __this /* static, unused */, X509CertificateCollection_t832007368_0 * ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
