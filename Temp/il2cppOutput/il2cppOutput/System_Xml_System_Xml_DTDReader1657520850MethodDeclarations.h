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

// System.Xml.DTDReader
struct DTDReader_t1657520850_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// System.String
struct String_t;
// System.Xml.XmlException
struct XmlException_t_403700483_0;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t225234017_0;
// Mono.Xml.DTDContentModel
struct DTDContentModel_t_986637325_0;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t1055429361_0;
// Mono.Xml.DTDEntityBase
struct DTDEntityBase_t1817357271_0;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t_1403141775_0;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t2074492340_0;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t1388169374_0;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t2128401900_0;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t1428699381_0;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t201864511_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.DTDReader::.ctor(Mono.Xml.DTDObjectModel,System.Int32,System.Int32)
extern "C"  void DTDReader__ctor_m239668310_0 (DTDReader_t1657520850_0 * __this, DTDObjectModel_t_2044825337_0 * ___dtd, int32_t ___startLineNumber, int32_t ___startLinePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::get_BaseURI()
extern "C"  String_t* DTDReader_get_BaseURI_m1245597521_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::get_Normalization()
extern "C"  bool DTDReader_get_Normalization_m_1931326450_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::set_Normalization(System.Boolean)
extern "C"  void DTDReader_set_Normalization_m_262802407_0 (DTDReader_t1657520850_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::get_LineNumber()
extern "C"  int32_t DTDReader_get_LineNumber_m_1202649656_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::get_LinePosition()
extern "C"  int32_t DTDReader_get_LinePosition_m1374475304_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::HasLineInfo()
extern "C"  bool DTDReader_HasLineInfo_m515896278_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException System.Xml.DTDReader::NotWFError(System.String)
extern "C"  XmlException_t_403700483_0 * DTDReader_NotWFError_m440433271_0 (DTDReader_t1657520850_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Init()
extern "C"  void DTDReader_Init_m_1151408176_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.DTDReader::GenerateDTDObjectModel()
extern "C"  DTDObjectModel_t_2044825337_0 * DTDReader_GenerateDTDObjectModel_m693103910_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::ProcessDTDSubset()
extern "C"  bool DTDReader_ProcessDTDSubset_m2078640111_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::CompileDeclaration()
extern "C"  void DTDReader_CompileDeclaration_m_483767289_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadIgnoreSect()
extern "C"  void DTDReader_ReadIgnoreSect_m_968446293_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration System.Xml.DTDReader::ReadElementDecl()
extern "C"  DTDElementDeclaration_t225234017_0 * DTDReader_ReadElementDecl_m983303313_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadContentSpec(Mono.Xml.DTDElementDeclaration)
extern "C"  void DTDReader_ReadContentSpec_m704165552_0 (DTDReader_t1657520850_0 * __this, DTDElementDeclaration_t225234017_0 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModel System.Xml.DTDReader::ReadCP(Mono.Xml.DTDElementDeclaration)
extern "C"  DTDContentModel_t_986637325_0 * DTDReader_ReadCP_m_363128286_0 (DTDReader_t1657520850_0 * __this, DTDElementDeclaration_t225234017_0 * ___elem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AddContentModel(Mono.Xml.DTDContentModelCollection,Mono.Xml.DTDContentModel)
extern "C"  void DTDReader_AddContentModel_m_1409103663_0 (DTDReader_t1657520850_0 * __this, DTDContentModelCollection_t1055429361_0 * ___cmc, DTDContentModel_t_986637325_0 * ___cm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadParameterEntityDecl()
extern "C"  void DTDReader_ReadParameterEntityDecl_m_1740231902_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ResolveExternalEntityReplacementText(Mono.Xml.DTDEntityBase)
extern "C"  void DTDReader_ResolveExternalEntityReplacementText_m1681961311_0 (DTDReader_t1657520850_0 * __this, DTDEntityBase_t1817357271_0 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ResolveInternalEntityReplacementText(Mono.Xml.DTDEntityBase)
extern "C"  void DTDReader_ResolveInternalEntityReplacementText_m_826970195_0 (DTDReader_t1657520850_0 * __this, DTDEntityBase_t1817357271_0 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::GetCharacterReference(Mono.Xml.DTDEntityBase,System.String,System.Int32&,System.Int32)
extern "C"  int32_t DTDReader_GetCharacterReference_m1265404884_0 (DTDReader_t1657520850_0 * __this, DTDEntityBase_t1817357271_0 * ___li, String_t* ___value, int32_t* ___index, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::GetPEValue(System.String)
extern "C"  String_t* DTDReader_GetPEValue_m985148249_0 (DTDReader_t1657520850_0 * __this, String_t* ___peName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclaration System.Xml.DTDReader::GetPEDecl(System.String)
extern "C"  DTDParameterEntityDeclaration_t_1403141775_0 * DTDReader_GetPEDecl_m1992309660_0 (DTDReader_t1657520850_0 * __this, String_t* ___peName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::TryExpandPERef()
extern "C"  bool DTDReader_TryExpandPERef_m232461585_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::TryExpandPERefSpaceKeep()
extern "C"  bool DTDReader_TryExpandPERefSpaceKeep_m419925436_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ExpandPERef()
extern "C"  void DTDReader_ExpandPERef_m_150661786_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration System.Xml.DTDReader::ReadEntityDecl()
extern "C"  DTDEntityDeclaration_t2074492340_0 * DTDReader_ReadEntityDecl_m131033009_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadEntityValueDecl(Mono.Xml.DTDEntityDeclaration)
extern "C"  void DTDReader_ReadEntityValueDecl_m_528429847_0 (DTDReader_t1657520850_0 * __this, DTDEntityDeclaration_t2074492340_0 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclaration System.Xml.DTDReader::ReadAttListDecl()
extern "C"  DTDAttListDeclaration_t1388169374_0 * DTDReader_ReadAttListDecl_m877842801_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition System.Xml.DTDReader::ReadAttributeDefinition()
extern "C"  DTDAttributeDefinition_t2128401900_0 * DTDReader_ReadAttributeDefinition_m_5469403_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadAttributeDefaultValue(Mono.Xml.DTDAttributeDefinition)
extern "C"  void DTDReader_ReadAttributeDefaultValue_m1778817565_0 (DTDReader_t1657520850_0 * __this, DTDAttributeDefinition_t2128401900_0 * ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclaration System.Xml.DTDReader::ReadNotationDecl()
extern "C"  DTDNotationDeclaration_t1428699381_0 * DTDReader_ReadNotationDecl_m_2036643409_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadExternalID()
extern "C"  void DTDReader_ReadExternalID_m1846433116_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadSystemLiteral(System.Boolean)
extern "C"  String_t* DTDReader_ReadSystemLiteral_m804658464_0 (DTDReader_t1657520850_0 * __this, bool ___expectSYSTEM, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadPubidLiteral()
extern "C"  String_t* DTDReader_ReadPubidLiteral_m1782524944_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadName()
extern "C"  String_t* DTDReader_ReadName_m_53610268_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadNmToken()
extern "C"  String_t* DTDReader_ReadNmToken_m_299466013_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadNameOrNmToken(System.Boolean)
extern "C"  String_t* DTDReader_ReadNameOrNmToken_m632111980_0 (DTDReader_t1657520850_0 * __this, bool ___isNameToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Expect(System.Int32)
extern "C"  void DTDReader_Expect_m1917199594_0 (DTDReader_t1657520850_0 * __this, int32_t ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Expect(System.String)
extern "C"  void DTDReader_Expect_m_239656311_0 (DTDReader_t1657520850_0 * __this, String_t* ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ExpectAfterWhitespace(System.Char)
extern "C"  void DTDReader_ExpectAfterWhitespace_m_1522809701_0 (DTDReader_t1657520850_0 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::SkipWhitespace()
extern "C"  bool DTDReader_SkipWhitespace_m232203876_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::PeekChar()
extern "C"  int32_t DTDReader_PeekChar_m1731433011_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::ReadChar()
extern "C"  int32_t DTDReader_ReadChar_m1039540782_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadComment()
extern "C"  void DTDReader_ReadComment_m2005393419_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadProcessingInstruction()
extern "C"  void DTDReader_ReadProcessingInstruction_m155897575_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadTextDeclaration()
extern "C"  void DTDReader_ReadTextDeclaration_m1514401081_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AppendNameChar(System.Int32)
extern "C"  void DTDReader_AppendNameChar_m_726207540_0 (DTDReader_t1657520850_0 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::CheckNameCapacity()
extern "C"  void DTDReader_CheckNameCapacity_m_6912017_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::CreateNameString()
extern "C"  String_t* DTDReader_CreateNameString_m1252119675_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AppendValueChar(System.Int32)
extern "C"  void DTDReader_AppendValueChar_m1219042272_0 (DTDReader_t1657520850_0 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::CreateValueString()
extern "C"  String_t* DTDReader_CreateValueString_m_1357771483_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ClearValueBuffer()
extern "C"  void DTDReader_ClearValueBuffer_m_184272956_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadDefaultAttribute()
extern "C"  String_t* DTDReader_ReadDefaultAttribute_m_1203366988_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::PushParserInput(System.String)
extern "C"  void DTDReader_PushParserInput_m_640238385_0 (DTDReader_t1657520850_0 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::PopParserInput()
extern "C"  void DTDReader_PopParserInput_m_1640168102_0 (DTDReader_t1657520850_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::HandleError(System.Xml.Schema.XmlSchemaException)
extern "C"  void DTDReader_HandleError_m_475795724_0 (DTDReader_t1657520850_0 * __this, XmlSchemaException_t201864511_0 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
