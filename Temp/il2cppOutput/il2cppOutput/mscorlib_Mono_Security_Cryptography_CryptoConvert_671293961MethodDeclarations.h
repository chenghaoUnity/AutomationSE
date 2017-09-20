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
// System.Security.Cryptography.RSA
struct RSA_t1573116945_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
extern "C"  int32_t CryptoConvert_ToInt32LE_m2023521787_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
extern "C"  uint32_t CryptoConvert_ToUInt32LE_m558101659_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::GetBytesLE(System.Int32)
extern "C"  ByteU5BU5D_t_1238178395_0* CryptoConvert_GetBytesLE_m62772046_0 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::Trim(System.Byte[])
extern "C"  ByteU5BU5D_t_1238178395_0* CryptoConvert_Trim_m_189799624_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlob(System.Byte[],System.Int32)
extern "C"  RSA_t1573116945_0 * CryptoConvert_FromCapiPrivateKeyBlob_m1079413163_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.RSA)
extern "C"  ByteU5BU5D_t_1238178395_0* CryptoConvert_ToCapiPrivateKeyBlob_m1139689325_0 (Object_t * __this /* static, unused */, RSA_t1573116945_0 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[])
extern "C"  RSA_t1573116945_0 * CryptoConvert_FromCapiPublicKeyBlob_m_1521265288_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___blob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[],System.Int32)
extern "C"  RSA_t1573116945_0 * CryptoConvert_FromCapiPublicKeyBlob_m1285057119_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.RSA)
extern "C"  ByteU5BU5D_t_1238178395_0* CryptoConvert_ToCapiPublicKeyBlob_m_153423353_0 (Object_t * __this /* static, unused */, RSA_t1573116945_0 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[])
extern "C"  RSA_t1573116945_0 * CryptoConvert_FromCapiKeyBlob_m_1232264721_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___blob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[],System.Int32)
extern "C"  RSA_t1573116945_0 * CryptoConvert_FromCapiKeyBlob_m2059589448_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.RSA,System.Boolean)
extern "C"  ByteU5BU5D_t_1238178395_0* CryptoConvert_ToCapiKeyBlob_m_1683528947_0 (Object_t * __this /* static, unused */, RSA_t1573116945_0 * ___rsa, bool ___includePrivateKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.CryptoConvert::ToHex(System.Byte[])
extern "C"  String_t* CryptoConvert_ToHex_m_1960618417_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Cryptography.CryptoConvert::FromHexChar(System.Char)
extern "C"  uint8_t CryptoConvert_FromHexChar_m_1686186363_0 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::FromHex(System.String)
extern "C"  ByteU5BU5D_t_1238178395_0* CryptoConvert_FromHex_m_2073799682_0 (Object_t * __this /* static, unused */, String_t* ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
