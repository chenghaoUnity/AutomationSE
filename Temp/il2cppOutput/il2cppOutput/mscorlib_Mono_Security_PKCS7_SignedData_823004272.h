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
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t193589085_0;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t_865204850_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t_809913950_0;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t_1305703446_0;

#include "mscorlib_System_Object_887538054.h"

// Mono.Security.PKCS7/SignedData
struct  SignedData_t_823004272_0  : public Object_t
{
	// System.Byte Mono.Security.PKCS7/SignedData::version
	uint8_t ___version_0;
	// System.String Mono.Security.PKCS7/SignedData::hashAlgorithm
	String_t* ___hashAlgorithm_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/SignedData::contentInfo
	ContentInfo_t193589085_0 * ___contentInfo_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.PKCS7/SignedData::certs
	X509CertificateCollection_t_865204850_0 * ___certs_3;
	// System.Collections.ArrayList Mono.Security.PKCS7/SignedData::crls
	ArrayList_t536890563_0 * ___crls_4;
	// Mono.Security.PKCS7/SignerInfo Mono.Security.PKCS7/SignedData::signerInfo
	SignerInfo_t_809913950_0 * ___signerInfo_5;
	// System.Boolean Mono.Security.PKCS7/SignedData::mda
	bool ___mda_6;
};
struct SignedData_t_823004272_0_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.PKCS7/SignedData::<>f__switch$map5
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24map5_7;
};
