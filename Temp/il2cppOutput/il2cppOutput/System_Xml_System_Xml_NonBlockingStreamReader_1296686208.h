#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;
// System.Text.Encoding
struct Encoding_t453909881_0;
// System.Text.Decoder
struct Decoder_t_2100355234_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.Text.StringBuilder
struct StringBuilder_t586045924_0;

#include "mscorlib_System_IO_TextReader1262698173.h"

// System.Xml.NonBlockingStreamReader
struct  NonBlockingStreamReader_t_1296686208_0  : public TextReader_t1262698173_0
{
	// System.Byte[] System.Xml.NonBlockingStreamReader::input_buffer
	ByteU5BU5D_t_1238178395_0* ___input_buffer_2;
	// System.Char[] System.Xml.NonBlockingStreamReader::decoded_buffer
	CharU5BU5D_t_1225802637_0* ___decoded_buffer_3;
	// System.Int32 System.Xml.NonBlockingStreamReader::decoded_count
	int32_t ___decoded_count_4;
	// System.Int32 System.Xml.NonBlockingStreamReader::pos
	int32_t ___pos_5;
	// System.Int32 System.Xml.NonBlockingStreamReader::buffer_size
	int32_t ___buffer_size_6;
	// System.Text.Encoding System.Xml.NonBlockingStreamReader::encoding
	Encoding_t453909881_0 * ___encoding_7;
	// System.Text.Decoder System.Xml.NonBlockingStreamReader::decoder
	Decoder_t_2100355234_0 * ___decoder_8;
	// System.IO.Stream System.Xml.NonBlockingStreamReader::base_stream
	Stream_t463444077_0 * ___base_stream_9;
	// System.Boolean System.Xml.NonBlockingStreamReader::mayBlock
	bool ___mayBlock_10;
	// System.Text.StringBuilder System.Xml.NonBlockingStreamReader::line_builder
	StringBuilder_t586045924_0 * ___line_builder_11;
	// System.Boolean System.Xml.NonBlockingStreamReader::foundCR
	bool ___foundCR_12;
};
