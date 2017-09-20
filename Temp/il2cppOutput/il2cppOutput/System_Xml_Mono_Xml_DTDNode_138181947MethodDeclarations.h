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

// Mono.Xml.DTDNode
struct DTDNode_t_138181947_0;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// System.Xml.XmlException
struct XmlException_t_403700483_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.DTDNode::.ctor()
extern "C"  void DTDNode__ctor_m_1740449551_0 (DTDNode_t_138181947_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDNode::get_BaseURI()
extern "C"  String_t* DTDNode_get_BaseURI_m1049621246_0 (DTDNode_t_138181947_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNode::set_BaseURI(System.String)
extern "C"  void DTDNode_set_BaseURI_m1446023701_0 (DTDNode_t_138181947_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDNode::get_IsInternalSubset()
extern "C"  bool DTDNode_get_IsInternalSubset_m_1162974067_0 (DTDNode_t_138181947_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNode::set_IsInternalSubset(System.Boolean)
extern "C"  void DTDNode_set_IsInternalSubset_m_1185384528_0 (DTDNode_t_138181947_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDNode::get_LineNumber()
extern "C"  int32_t DTDNode_get_LineNumber_m_182256005_0 (DTDNode_t_138181947_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDNode::get_LinePosition()
extern "C"  int32_t DTDNode_get_LinePosition_m_1574736869_0 (DTDNode_t_138181947_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDNode::HasLineInfo()
extern "C"  bool DTDNode_HasLineInfo_m_457765629_0 (DTDNode_t_138181947_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNode::SetRoot(Mono.Xml.DTDObjectModel)
extern "C"  void DTDNode_SetRoot_m970259879_0 (DTDNode_t_138181947_0 * __this, DTDObjectModel_t_2044825337_0 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDNode::get_Root()
extern "C"  DTDObjectModel_t_2044825337_0 * DTDNode_get_Root_m1036806329_0 (DTDNode_t_138181947_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException Mono.Xml.DTDNode::NotWFError(System.String)
extern "C"  XmlException_t_403700483_0 * DTDNode_NotWFError_m_1980943964_0 (DTDNode_t_138181947_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
