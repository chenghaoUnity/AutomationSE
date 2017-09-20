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

// Mono.Security.X509.X509Certificate
struct X509Certificate_t_1016414512_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Security.Cryptography.DSA
struct DSA_t1573103491_0;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t_1684744074_0;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t1573116945_0;
// Mono.Security.ASN1
struct ASN1_t1755619932_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_818288618.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C"  void X509Certificate__ctor_m_1082545533_0 (X509Certificate_t_1016414512_0 * __this, ByteU5BU5D_t_1238178395_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C"  void X509Certificate__cctor_m988953959_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C"  void X509Certificate_Parse_m750702354_0 (X509Certificate_t_1016414512_0 * __this, ByteU5BU5D_t_1238178395_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C"  ByteU5BU5D_t_1238178395_0* X509Certificate_GetUnsignedBigInteger_m_1880085306_0 (X509Certificate_t_1016414512_0 * __this, ByteU5BU5D_t_1238178395_0* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C"  DSA_t1573103491_0 * X509Certificate_get_DSA_m_625124511_0 (X509Certificate_t_1016414512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
extern "C"  X509ExtensionCollection_t_1684744074_0 * X509Certificate_get_Extensions_m_1462225900_0 (X509Certificate_t_1016414512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
extern "C"  ByteU5BU5D_t_1238178395_0* X509Certificate_get_Hash_m476899519_0 (X509Certificate_t_1016414512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C"  String_t* X509Certificate_get_IssuerName_m_863033394_0 (X509Certificate_t_1016414512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C"  ByteU5BU5D_t_1238178395_0* X509Certificate_get_KeyAlgorithmParameters_m1145471883_0 (X509Certificate_t_1016414512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C"  ByteU5BU5D_t_1238178395_0* X509Certificate_get_PublicKey_m1256992391_0 (X509Certificate_t_1016414512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA()
extern "C"  RSA_t1573116945_0 * X509Certificate_get_RSA_m_720826243_0 (X509Certificate_t_1016414512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C"  ByteU5BU5D_t_1238178395_0* X509Certificate_get_RawData_m1241414723_0 (X509Certificate_t_1016414512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber()
extern "C"  ByteU5BU5D_t_1238178395_0* X509Certificate_get_SerialNumber_m1434934862_0 (X509Certificate_t_1016414512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Signature()
extern "C"  ByteU5BU5D_t_1238178395_0* X509Certificate_get_Signature_m_1016627319_0 (X509Certificate_t_1016414512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C"  String_t* X509Certificate_get_SubjectName_m1718232911_0 (X509Certificate_t_1016414512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C"  DateTime_t_818288618_0  X509Certificate_get_ValidFrom_m1301607688_0 (X509Certificate_t_1016414512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C"  DateTime_t_818288618_0  X509Certificate_get_ValidUntil_m2012833186_0 (X509Certificate_t_1016414512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
extern "C"  int32_t X509Certificate_get_Version_m_190395785_0 (X509Certificate_t_1016414512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
extern "C"  bool X509Certificate_get_IsCurrent_m_1033926488_0 (X509Certificate_t_1016414512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::WasCurrent(System.DateTime)
extern "C"  bool X509Certificate_WasCurrent_m_2057347288_0 (X509Certificate_t_1016414512_0 * __this, DateTime_t_818288618_0  ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::GetHashNameFromOID(System.String)
extern "C"  String_t* X509Certificate_GetHashNameFromOID_m509983312_0 (X509Certificate_t_1016414512_0 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
extern "C"  bool X509Certificate_VerifySignature_m501347476_0 (X509Certificate_t_1016414512_0 * __this, RSA_t1573116945_0 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
extern "C"  bool X509Certificate_get_IsSelfSigned_m_2102065829_0 (X509Certificate_t_1016414512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C"  ASN1_t1755619932_0 * X509Certificate_GetIssuerName_m_678130229_0 (X509Certificate_t_1016414512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C"  ASN1_t1755619932_0 * X509Certificate_GetSubjectName_m_1139703566_0 (X509Certificate_t_1016414512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void X509Certificate_GetObjectData_m_317199452_0 (X509Certificate_t_1016414512_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C"  ByteU5BU5D_t_1238178395_0* X509Certificate_PEM_m_1155907917_0 (Object_t * __this /* static, unused */, String_t* ___type, ByteU5BU5D_t_1238178395_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
