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
// System.IO.StreamReader
struct StreamReader_t1933514640_0;

#include "mscorlib_System_IO_TextReader1262698173.h"

// System.IO.StreamReader
struct  StreamReader_t1933514640_0  : public TextReader_t1262698173_0
{
	// System.Byte[] System.IO.StreamReader::input_buffer
	ByteU5BU5D_t_1238178395_0* ___input_buffer_2;
	// System.Char[] System.IO.StreamReader::decoded_buffer
	CharU5BU5D_t_1225802637_0* ___decoded_buffer_3;
	// System.Int32 System.IO.StreamReader::decoded_count
	int32_t ___decoded_count_4;
	// System.Int32 System.IO.StreamReader::pos
	int32_t ___pos_5;
	// System.Int32 System.IO.StreamReader::buffer_size
	int32_t ___buffer_size_6;
	// System.Int32 System.IO.StreamReader::do_checks
	int32_t ___do_checks_7;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t453909881_0 * ___encoding_8;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t_2100355234_0 * ___decoder_9;
	// System.IO.Stream System.IO.StreamReader::base_stream
	Stream_t463444077_0 * ___base_stream_10;
	// System.Boolean System.IO.StreamReader::mayBlock
	bool ___mayBlock_11;
	// System.Text.StringBuilder System.IO.StreamReader::line_builder
	StringBuilder_t586045924_0 * ___line_builder_12;
	// System.Boolean System.IO.StreamReader::foundCR
	bool ___foundCR_14;
};
struct StreamReader_t1933514640_0_StaticFields{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t1933514640_0 * ___Null_13;
};
