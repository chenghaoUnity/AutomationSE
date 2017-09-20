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

// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t952581733_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;
// System.Xml.XmlParserContext
struct XmlParserContext_t1369943614_0;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"
#include "System_Xml_System_Xml_ReadState_2141932618.h"
#include "System_Xml_System_Xml_XmlSpace_638931788.h"
#include "System_Xml_System_Xml_EntityHandling150823853.h"

// System.Void Mono.Xml.EntityResolvingXmlReader::.ctor(System.Xml.XmlReader)
extern "C"  void EntityResolvingXmlReader__ctor_m904359175_0 (EntityResolvingXmlReader_t952581733_0 * __this, XmlReader_t1629164245_0 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::.ctor(System.Xml.XmlReader,System.Boolean)
extern "C"  void EntityResolvingXmlReader__ctor_m_1326557290_0 (EntityResolvingXmlReader_t952581733_0 * __this, XmlReader_t1629164245_0 * ___entityContainer, bool ___inside_attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.EntityResolvingXmlReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t1369943614_0 * EntityResolvingXmlReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m143166002_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader Mono.Xml.EntityResolvingXmlReader::get_Current()
extern "C"  XmlReader_t1629164245_0 * EntityResolvingXmlReader_get_Current_m_1750082106_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_AttributeCount()
extern "C"  int32_t EntityResolvingXmlReader_get_AttributeCount_m1887445523_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_BaseURI()
extern "C"  String_t* EntityResolvingXmlReader_get_BaseURI_m2127653054_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_CanResolveEntity()
extern "C"  bool EntityResolvingXmlReader_get_CanResolveEntity_m_444142823_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_Depth()
extern "C"  int32_t EntityResolvingXmlReader_get_Depth_m_1376202203_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_EOF()
extern "C"  bool EntityResolvingXmlReader_get_EOF_m_588744828_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_HasValue()
extern "C"  bool EntityResolvingXmlReader_get_HasValue_m1499546129_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_IsDefault()
extern "C"  bool EntityResolvingXmlReader_get_IsDefault_m1748307007_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_IsEmptyElement()
extern "C"  bool EntityResolvingXmlReader_get_IsEmptyElement_m382441235_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_LocalName()
extern "C"  String_t* EntityResolvingXmlReader_get_LocalName_m344990009_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_Name()
extern "C"  String_t* EntityResolvingXmlReader_get_Name_m_962882966_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_NamespaceURI()
extern "C"  String_t* EntityResolvingXmlReader_get_NamespaceURI_m_1706622352_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.EntityResolvingXmlReader::get_NameTable()
extern "C"  XmlNameTable_t_662182735_0 * EntityResolvingXmlReader_get_NameTable_m2053790580_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.EntityResolvingXmlReader::get_NodeType()
extern "C"  int32_t EntityResolvingXmlReader_get_NodeType_m748801322_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.EntityResolvingXmlReader::get_ParserContext()
extern "C"  XmlParserContext_t1369943614_0 * EntityResolvingXmlReader_get_ParserContext_m_1998921580_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_Prefix()
extern "C"  String_t* EntityResolvingXmlReader_get_Prefix_m_745343695_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.EntityResolvingXmlReader::get_ReadState()
extern "C"  int32_t EntityResolvingXmlReader_get_ReadState_m910803687_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_Value()
extern "C"  String_t* EntityResolvingXmlReader_get_Value_m_1274894252_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_XmlLang()
extern "C"  String_t* EntityResolvingXmlReader_get_XmlLang_m2130873352_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.EntityResolvingXmlReader::get_XmlSpace()
extern "C"  int32_t EntityResolvingXmlReader_get_XmlSpace_m_2095842173_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::CopyProperties(Mono.Xml.EntityResolvingXmlReader)
extern "C"  void EntityResolvingXmlReader_CopyProperties_m_850913893_0 (EntityResolvingXmlReader_t952581733_0 * __this, EntityResolvingXmlReader_t952581733_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml.EntityResolvingXmlReader::get_EntityHandling()
extern "C"  int32_t EntityResolvingXmlReader_get_EntityHandling_m2046082741_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C"  void EntityResolvingXmlReader_set_EntityHandling_m629706070_0 (EntityResolvingXmlReader_t952581733_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_LineNumber()
extern "C"  int32_t EntityResolvingXmlReader_get_LineNumber_m_1268271203_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_LinePosition()
extern "C"  int32_t EntityResolvingXmlReader_get_LinePosition_m_1558289219_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::Close()
extern "C"  void EntityResolvingXmlReader_Close_m_1435090015_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::GetAttribute(System.String)
extern "C"  String_t* EntityResolvingXmlReader_GetAttribute_m826090246_0 (EntityResolvingXmlReader_t952581733_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::GetAttribute(System.String,System.String)
extern "C"  String_t* EntityResolvingXmlReader_GetAttribute_m_308180798_0 (EntityResolvingXmlReader_t952581733_0 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::LookupNamespace(System.String)
extern "C"  String_t* EntityResolvingXmlReader_LookupNamespace_m_1243305835_0 (EntityResolvingXmlReader_t952581733_0 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::MoveToAttribute(System.Int32)
extern "C"  void EntityResolvingXmlReader_MoveToAttribute_m_247772342_0 (EntityResolvingXmlReader_t952581733_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToAttribute(System.String)
extern "C"  bool EntityResolvingXmlReader_MoveToAttribute_m_39346399_0 (EntityResolvingXmlReader_t952581733_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToAttribute(System.String,System.String)
extern "C"  bool EntityResolvingXmlReader_MoveToAttribute_m2049391005_0 (EntityResolvingXmlReader_t952581733_0 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToElement()
extern "C"  bool EntityResolvingXmlReader_MoveToElement_m76807905_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToFirstAttribute()
extern "C"  bool EntityResolvingXmlReader_MoveToFirstAttribute_m635170153_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToNextAttribute()
extern "C"  bool EntityResolvingXmlReader_MoveToNextAttribute_m_1798701426_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::Read()
extern "C"  bool EntityResolvingXmlReader_Read_m1484201063_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::ReadAttributeValue()
extern "C"  bool EntityResolvingXmlReader_ReadAttributeValue_m894858492_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::ResolveEntity()
extern "C"  void EntityResolvingXmlReader_ResolveEntity_m1977060568_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::DoResolveEntity()
extern "C"  void EntityResolvingXmlReader_DoResolveEntity_m1068050125_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::Skip()
extern "C"  void EntityResolvingXmlReader_Skip_m_4975848_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::HasLineInfo()
extern "C"  bool EntityResolvingXmlReader_HasLineInfo_m405675053_0 (EntityResolvingXmlReader_t952581733_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
