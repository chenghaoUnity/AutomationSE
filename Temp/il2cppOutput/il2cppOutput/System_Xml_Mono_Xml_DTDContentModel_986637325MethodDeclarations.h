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

// Mono.Xml.DTDContentModel
struct DTDContentModel_t_986637325_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// System.String
struct String_t;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t1055429361_0;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t225234017_0;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t_1542573965_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDOccurence853286356.h"
#include "System_Xml_Mono_Xml_DTDContentOrderType_1355489422.h"

// System.Void Mono.Xml.DTDContentModel::.ctor(Mono.Xml.DTDObjectModel,System.String)
extern "C"  void DTDContentModel__ctor_m248936723_0 (DTDContentModel_t_986637325_0 * __this, DTDObjectModel_t_2044825337_0 * ___root, String_t* ___ownerElementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModelCollection Mono.Xml.DTDContentModel::get_ChildModels()
extern "C"  DTDContentModelCollection_t1055429361_0 * DTDContentModel_get_ChildModels_m1642723597_0 (DTDContentModel_t_986637325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDContentModel::get_ElementDecl()
extern "C"  DTDElementDeclaration_t225234017_0 * DTDContentModel_get_ElementDecl_m1388326301_0 (DTDContentModel_t_986637325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDContentModel::get_ElementName()
extern "C"  String_t* DTDContentModel_get_ElementName_m461002204_0 (DTDContentModel_t_986637325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_ElementName(System.String)
extern "C"  void DTDContentModel_set_ElementName_m_15037833_0 (DTDContentModel_t_986637325_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDOccurence Mono.Xml.DTDContentModel::get_Occurence()
extern "C"  int32_t DTDContentModel_get_Occurence_m_491658367_0 (DTDContentModel_t_986637325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_Occurence(Mono.Xml.DTDOccurence)
extern "C"  void DTDContentModel_set_Occurence_m1938639474_0 (DTDContentModel_t_986637325_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentOrderType Mono.Xml.DTDContentModel::get_OrderType()
extern "C"  int32_t DTDContentModel_get_OrderType_m_1911977392_0 (DTDContentModel_t_986637325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_OrderType(Mono.Xml.DTDContentOrderType)
extern "C"  void DTDContentModel_set_OrderType_m2020937195_0 (DTDContentModel_t_986637325_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::GetAutomata()
extern "C"  DTDAutomata_t_1542573965_0 * DTDContentModel_GetAutomata_m2141566264_0 (DTDContentModel_t_986637325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::Compile()
extern "C"  DTDAutomata_t_1542573965_0 * DTDContentModel_Compile_m_1076437499_0 (DTDContentModel_t_986637325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::CompileInternal()
extern "C"  DTDAutomata_t_1542573965_0 * DTDContentModel_CompileInternal_m_184909406_0 (DTDContentModel_t_986637325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::GetBasicContentAutomata()
extern "C"  DTDAutomata_t_1542573965_0 * DTDContentModel_GetBasicContentAutomata_m501448067_0 (DTDContentModel_t_986637325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::Sequence(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  DTDAutomata_t_1542573965_0 * DTDContentModel_Sequence_m1958675541_0 (DTDContentModel_t_986637325_0 * __this, DTDAutomata_t_1542573965_0 * ___l, DTDAutomata_t_1542573965_0 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::Choice(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  DTDAutomata_t_1542573965_0 * DTDContentModel_Choice_m606966453_0 (DTDContentModel_t_986637325_0 * __this, DTDAutomata_t_1542573965_0 * ___l, DTDAutomata_t_1542573965_0 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
