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
// System.IO.Stream
struct Stream_t463444077_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Xml.XmlException
struct XmlException_t_403700483_0;

#include "mscorlib_System_IO_Stream463444077.h"

// System.Xml.XmlInputStream
struct  XmlInputStream_t371774744_0  : public Stream_t463444077_0
{
	// System.Text.Encoding System.Xml.XmlInputStream::enc
	Encoding_t453909881_0 * ___enc_3;
	// System.IO.Stream System.Xml.XmlInputStream::stream
	Stream_t463444077_0 * ___stream_4;
	// System.Byte[] System.Xml.XmlInputStream::buffer
	ByteU5BU5D_t_1238178395_0* ___buffer_5;
	// System.Int32 System.Xml.XmlInputStream::bufLength
	int32_t ___bufLength_6;
	// System.Int32 System.Xml.XmlInputStream::bufPos
	int32_t ___bufPos_7;
};
struct XmlInputStream_t371774744_0_StaticFields{
	// System.Text.Encoding System.Xml.XmlInputStream::StrictUTF8
	Encoding_t453909881_0 * ___StrictUTF8_2;
	// System.Xml.XmlException System.Xml.XmlInputStream::encodingException
	XmlException_t_403700483_0 * ___encodingException_8;
};
