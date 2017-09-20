#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t_865204850_0;
// Mono.Security.ASN1
struct ASN1_t1755619932_0;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t_1016414512_0;
// Mono.Security.X509.X509Chain
struct X509Chain_t_310381894_0;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t_1305703446_0;

#include "mscorlib_Mono_Security_Authenticode_AuthenticodeB_1106778408.h"
#include "mscorlib_System_DateTime_818288618.h"

// Mono.Security.Authenticode.AuthenticodeDeformatter
struct  AuthenticodeDeformatter_t_2135130238_0  : public AuthenticodeBase_t_1106778408_0
{
	// System.String Mono.Security.Authenticode.AuthenticodeDeformatter::filename
	String_t* ___filename_8;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::hash
	ByteU5BU5D_t_1238178395_0* ___hash_9;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Authenticode.AuthenticodeDeformatter::coll
	X509CertificateCollection_t_865204850_0 * ___coll_10;
	// Mono.Security.ASN1 Mono.Security.Authenticode.AuthenticodeDeformatter::signedHash
	ASN1_t1755619932_0 * ___signedHash_11;
	// System.DateTime Mono.Security.Authenticode.AuthenticodeDeformatter::timestamp
	DateTime_t_818288618_0  ___timestamp_12;
	// Mono.Security.X509.X509Certificate Mono.Security.Authenticode.AuthenticodeDeformatter::signingCertificate
	X509Certificate_t_1016414512_0 * ___signingCertificate_13;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeDeformatter::reason
	int32_t ___reason_14;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedRoot
	bool ___trustedRoot_15;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedTimestampRoot
	bool ___trustedTimestampRoot_16;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::entry
	ByteU5BU5D_t_1238178395_0* ___entry_17;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::signerChain
	X509Chain_t_310381894_0 * ___signerChain_18;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::timestampChain
	X509Chain_t_310381894_0 * ___timestampChain_19;
};
struct AuthenticodeDeformatter_t_2135130238_0_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Authenticode.AuthenticodeDeformatter::<>f__switch$map7
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24map7_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Authenticode.AuthenticodeDeformatter::<>f__switch$map8
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24map8_21;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Authenticode.AuthenticodeDeformatter::<>f__switch$map9
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24map9_22;
};
