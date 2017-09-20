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

// System.Xml.XmlParserContext
struct XmlParserContext_t1369943614_0;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1115255140_0;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t453909881_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlSpace_638931788.h"

// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.Xml.XmlSpace)
extern "C"  void XmlParserContext__ctor_m857121144_0 (XmlParserContext_t1369943614_0 * __this, XmlNameTable_t_662182735_0 * ___nt, XmlNamespaceManager_t1115255140_0 * ___nsMgr, String_t* ___xmlLang, int32_t ___xmlSpace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.String,System.String,System.String,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern "C"  void XmlParserContext__ctor_m_230315091_0 (XmlParserContext_t1369943614_0 * __this, XmlNameTable_t_662182735_0 * ___nt, XmlNamespaceManager_t1115255140_0 * ___nsMgr, String_t* ___docTypeName, String_t* ___pubId, String_t* ___sysId, String_t* ___internalSubset, String_t* ___baseURI, String_t* ___xmlLang, int32_t ___xmlSpace, Encoding_t453909881_0 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,Mono.Xml.DTDObjectModel,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern "C"  void XmlParserContext__ctor_m167099241_0 (XmlParserContext_t1369943614_0 * __this, XmlNameTable_t_662182735_0 * ___nt, XmlNamespaceManager_t1115255140_0 * ___nsMgr, DTDObjectModel_t_2044825337_0 * ___dtd, String_t* ___baseURI, String_t* ___xmlLang, int32_t ___xmlSpace, Encoding_t453909881_0 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_BaseURI()
extern "C"  String_t* XmlParserContext_get_BaseURI_m1880993733_0 (XmlParserContext_t1369943614_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_BaseURI(System.String)
extern "C"  void XmlParserContext_set_BaseURI_m663391444_0 (XmlParserContext_t1369943614_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_DocTypeName(System.String)
extern "C"  void XmlParserContext_set_DocTypeName_m_887195598_0 (XmlParserContext_t1369943614_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::get_Dtd()
extern "C"  DTDObjectModel_t_2044825337_0 * XmlParserContext_get_Dtd_m613804278_0 (XmlParserContext_t1369943614_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_Dtd(Mono.Xml.DTDObjectModel)
extern "C"  void XmlParserContext_set_Dtd_m_552851341_0 (XmlParserContext_t1369943614_0 * __this, DTDObjectModel_t_2044825337_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_Encoding(System.Text.Encoding)
extern "C"  void XmlParserContext_set_Encoding_m493475469_0 (XmlParserContext_t1369943614_0 * __this, Encoding_t453909881_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_InternalSubset()
extern "C"  String_t* XmlParserContext_get_InternalSubset_m2001938359_0 (XmlParserContext_t1369943614_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_InternalSubset(System.String)
extern "C"  void XmlParserContext_set_InternalSubset_m455417684_0 (XmlParserContext_t1369943614_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager System.Xml.XmlParserContext::get_NamespaceManager()
extern "C"  XmlNamespaceManager_t1115255140_0 * XmlParserContext_get_NamespaceManager_m_915385169_0 (XmlParserContext_t1369943614_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlParserContext::get_NameTable()
extern "C"  XmlNameTable_t_662182735_0 * XmlParserContext_get_NameTable_m844308283_0 (XmlParserContext_t1369943614_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_PublicId(System.String)
extern "C"  void XmlParserContext_set_PublicId_m_1969391601_0 (XmlParserContext_t1369943614_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_SystemId(System.String)
extern "C"  void XmlParserContext_set_SystemId_m227114249_0 (XmlParserContext_t1369943614_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_XmlLang()
extern "C"  String_t* XmlParserContext_get_XmlLang_m1884214031_0 (XmlParserContext_t1369943614_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_XmlLang(System.String)
extern "C"  void XmlParserContext_set_XmlLang_m1537642954_0 (XmlParserContext_t1369943614_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlParserContext::get_XmlSpace()
extern "C"  int32_t XmlParserContext_get_XmlSpace_m_30993892_0 (XmlParserContext_t1369943614_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_XmlSpace(System.Xml.XmlSpace)
extern "C"  void XmlParserContext_set_XmlSpace_m_1275910833_0 (XmlParserContext_t1369943614_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::PushScope()
extern "C"  void XmlParserContext_PushScope_m_1297000694_0 (XmlParserContext_t1369943614_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::PopScope()
extern "C"  void XmlParserContext_PopScope_m706589621_0 (XmlParserContext_t1369943614_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
