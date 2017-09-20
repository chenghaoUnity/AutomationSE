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

// System.Xml.XmlWriter
struct XmlWriter_t1784569477_0;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlSpace_638931788.h"

// System.Void System.Xml.XmlWriter::.ctor()
extern "C"  void XmlWriter__ctor_m_1383058511_0 (XmlWriter_t1784569477_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::System.IDisposable.Dispose()
extern "C"  void XmlWriter_System_IDisposable_Dispose_m_1101167474_0 (XmlWriter_t1784569477_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlWriter::get_XmlLang()
extern "C"  String_t* XmlWriter_get_XmlLang_m_151938424_0 (XmlWriter_t1784569477_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlWriter::get_XmlSpace()
extern "C"  int32_t XmlWriter_get_XmlSpace_m767449337_0 (XmlWriter_t1784569477_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::Dispose(System.Boolean)
extern "C"  void XmlWriter_Dispose_m1200530597_0 (XmlWriter_t1784569477_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlWriter_WriteAttribute_m1597931729_0 (XmlWriter_t1784569477_0 * __this, XmlReader_t1629164245_0 * ___reader, bool ___defattr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m1129629501_0 (XmlWriter_t1784569477_0 * __this, String_t* ___localName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m1630990645_0 (XmlWriter_t1784569477_0 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___ns, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteElementString(System.String,System.String)
extern "C"  void XmlWriter_WriteElementString_m764708381_0 (XmlWriter_t1784569477_0 * __this, String_t* ___localName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlWriter_WriteNode_m817874929_0 (XmlWriter_t1784569477_0 * __this, XmlReader_t1629164245_0 * ___reader, bool ___defattr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String)
extern "C"  void XmlWriter_WriteStartElement_m_156011334_0 (XmlWriter_t1784569477_0 * __this, String_t* ___localName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
