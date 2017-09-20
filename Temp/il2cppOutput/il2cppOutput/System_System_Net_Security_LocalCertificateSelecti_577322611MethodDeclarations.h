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

// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t_577322611_0;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1524084820_0;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1905772184_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_String_756155572.h"
#include "mscorlib_ArrayTypes.h"

// System.Void System.Net.Security.LocalCertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void LocalCertificateSelectionCallback__ctor_m1247669215_0 (LocalCertificateSelectionCallback_t_577322611_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::Invoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern "C"  X509Certificate_t1524084820_0 * LocalCertificateSelectionCallback_Invoke_m2092911830_0 (LocalCertificateSelectionCallback_t_577322611_0 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t1905772184_0 * ___localCertificates, X509Certificate_t1524084820_0 * ___remoteCertificate, StringU5BU5D_t_816028754_0* ___acceptableIssuers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" X509Certificate_t1524084820_0 * pinvoke_delegate_wrapper_LocalCertificateSelectionCallback_t_577322611_0(Il2CppObject* delegate, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t1905772184_0 * ___localCertificates, X509Certificate_t1524084820_0 * ___remoteCertificate, StringU5BU5D_t_816028754_0* ___acceptableIssuers);
// System.IAsyncResult System.Net.Security.LocalCertificateSelectionCallback::BeginInvoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.AsyncCallback,System.Object)
extern "C"  Object_t * LocalCertificateSelectionCallback_BeginInvoke_m_1181354204_0 (LocalCertificateSelectionCallback_t_577322611_0 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t1905772184_0 * ___localCertificates, X509Certificate_t1524084820_0 * ___remoteCertificate, StringU5BU5D_t_816028754_0* ___acceptableIssuers, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C"  X509Certificate_t1524084820_0 * LocalCertificateSelectionCallback_EndInvoke_m660893172_0 (LocalCertificateSelectionCallback_t_577322611_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
