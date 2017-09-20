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

// System.Security.Cryptography.CryptoConfig/CryptoHandler
struct CryptoHandler_t990365836_0;
// System.Collections.Hashtable
struct Hashtable_t_2004451924_0;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t2130513197_0;
// System.String
struct String_t;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t_1243633866_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::.ctor(System.Collections.Hashtable,System.Collections.Hashtable)
extern "C"  void CryptoHandler__ctor_m_1567305982_0 (CryptoHandler_t990365836_0 * __this, Hashtable_t_2004451924_0 * ___algorithms, Hashtable_t_2004451924_0 * ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C"  void CryptoHandler_OnStartParsing_m_646518220_0 (CryptoHandler_t990365836_0 * __this, SmallXmlParser_t2130513197_0 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnEndParsing(Mono.Xml.SmallXmlParser)
extern "C"  void CryptoHandler_OnEndParsing_m_671612115_0 (CryptoHandler_t990365836_0 * __this, SmallXmlParser_t2130513197_0 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.CryptoConfig/CryptoHandler::Get(Mono.Xml.SmallXmlParser/IAttrList,System.String)
extern "C"  String_t* CryptoHandler_Get_m2020132057_0 (CryptoHandler_t990365836_0 * __this, Object_t * ___attrs, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void CryptoHandler_OnStartElement_m_684425733_0 (CryptoHandler_t990365836_0 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnEndElement(System.String)
extern "C"  void CryptoHandler_OnEndElement_m_2017804190_0 (CryptoHandler_t990365836_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnProcessingInstruction(System.String,System.String)
extern "C"  void CryptoHandler_OnProcessingInstruction_m1721670208_0 (CryptoHandler_t990365836_0 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnChars(System.String)
extern "C"  void CryptoHandler_OnChars_m1426696290_0 (CryptoHandler_t990365836_0 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnIgnorableWhitespace(System.String)
extern "C"  void CryptoHandler_OnIgnorableWhitespace_m_517227275_0 (CryptoHandler_t990365836_0 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
