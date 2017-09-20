#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.Encoding
struct Encoding_t453909881_0;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.IO.TextWriter
struct TextWriter_t1418103405_0;
// System.IO.StringWriter
struct StringWriter_t_694287599_0;
// System.String
struct String_t;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1115255140_0;
// System.Xml.XmlTextWriter/XmlNodeInfo[]
struct XmlNodeInfoU5BU5D_t525538892_0;
// System.Collections.Stack
struct Stack_t_1068416332_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t_1305703446_0;

#include "System_Xml_System_Xml_XmlWriter1784569477.h"
#include "System_Xml_System_Xml_XmlTextWriter_XmlDeclState539893165.h"
#include "System_Xml_System_Xml_NewLineHandling1572518292.h"
#include "System_Xml_System_Xml_WriteState_2121906121.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"
#include "System_Xml_System_Xml_NamespaceHandling_92000389.h"

// System.Xml.XmlTextWriter
struct  XmlTextWriter_t_646258414_0  : public XmlWriter_t1784569477_0
{
	// System.IO.Stream System.Xml.XmlTextWriter::base_stream
	Stream_t463444077_0 * ___base_stream_3;
	// System.IO.TextWriter System.Xml.XmlTextWriter::source
	TextWriter_t1418103405_0 * ___source_4;
	// System.IO.TextWriter System.Xml.XmlTextWriter::writer
	TextWriter_t1418103405_0 * ___writer_5;
	// System.IO.StringWriter System.Xml.XmlTextWriter::preserver
	StringWriter_t_694287599_0 * ___preserver_6;
	// System.String System.Xml.XmlTextWriter::preserved_name
	String_t* ___preserved_name_7;
	// System.Boolean System.Xml.XmlTextWriter::is_preserved_xmlns
	bool ___is_preserved_xmlns_8;
	// System.Boolean System.Xml.XmlTextWriter::allow_doc_fragment
	bool ___allow_doc_fragment_9;
	// System.Boolean System.Xml.XmlTextWriter::close_output_stream
	bool ___close_output_stream_10;
	// System.Boolean System.Xml.XmlTextWriter::ignore_encoding
	bool ___ignore_encoding_11;
	// System.Boolean System.Xml.XmlTextWriter::namespaces
	bool ___namespaces_12;
	// System.Xml.XmlTextWriter/XmlDeclState System.Xml.XmlTextWriter::xmldecl_state
	int32_t ___xmldecl_state_13;
	// System.Boolean System.Xml.XmlTextWriter::check_character_validity
	bool ___check_character_validity_14;
	// System.Xml.NewLineHandling System.Xml.XmlTextWriter::newline_handling
	int32_t ___newline_handling_15;
	// System.Boolean System.Xml.XmlTextWriter::is_document_entity
	bool ___is_document_entity_16;
	// System.Xml.WriteState System.Xml.XmlTextWriter::state
	int32_t ___state_17;
	// System.Xml.XmlNodeType System.Xml.XmlTextWriter::node_state
	int32_t ___node_state_18;
	// System.Xml.XmlNamespaceManager System.Xml.XmlTextWriter::nsmanager
	XmlNamespaceManager_t1115255140_0 * ___nsmanager_19;
	// System.Int32 System.Xml.XmlTextWriter::open_count
	int32_t ___open_count_20;
	// System.Xml.XmlTextWriter/XmlNodeInfo[] System.Xml.XmlTextWriter::elements
	XmlNodeInfoU5BU5D_t525538892_0* ___elements_21;
	// System.Collections.Stack System.Xml.XmlTextWriter::new_local_namespaces
	Stack_t_1068416332_0 * ___new_local_namespaces_22;
	// System.Collections.ArrayList System.Xml.XmlTextWriter::explicit_nsdecls
	ArrayList_t536890563_0 * ___explicit_nsdecls_23;
	// System.Xml.NamespaceHandling System.Xml.XmlTextWriter::namespace_handling
	int32_t ___namespace_handling_24;
	// System.Boolean System.Xml.XmlTextWriter::indent
	bool ___indent_25;
	// System.Int32 System.Xml.XmlTextWriter::indent_count
	int32_t ___indent_count_26;
	// System.Char System.Xml.XmlTextWriter::indent_char
	uint16_t ___indent_char_27;
	// System.String System.Xml.XmlTextWriter::indent_string
	String_t* ___indent_string_28;
	// System.String System.Xml.XmlTextWriter::newline
	String_t* ___newline_29;
	// System.Boolean System.Xml.XmlTextWriter::indent_attributes
	bool ___indent_attributes_30;
	// System.Char System.Xml.XmlTextWriter::quote_char
	uint16_t ___quote_char_31;
	// System.Boolean System.Xml.XmlTextWriter::v2
	bool ___v2_32;
};
struct XmlTextWriter_t_646258414_0_StaticFields{
	// System.Text.Encoding System.Xml.XmlTextWriter::unmarked_utf8encoding
	Encoding_t453909881_0 * ___unmarked_utf8encoding_0;
	// System.Char[] System.Xml.XmlTextWriter::escaped_text_chars
	CharU5BU5D_t_1225802637_0* ___escaped_text_chars_1;
	// System.Char[] System.Xml.XmlTextWriter::escaped_attr_chars
	CharU5BU5D_t_1225802637_0* ___escaped_attr_chars_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::<>f__switch$map3A
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24map3A_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::<>f__switch$map3B
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24map3B_34;
};
