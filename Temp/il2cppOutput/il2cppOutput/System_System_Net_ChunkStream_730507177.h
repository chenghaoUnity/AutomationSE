#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.WebHeaderCollection
struct WebHeaderCollection_t_1532305783_0;
// System.Text.StringBuilder
struct StringBuilder_t586045924_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;

#include "mscorlib_System_Object_887538054.h"
#include "System_System_Net_ChunkStream_State1548555449.h"

// System.Net.ChunkStream
struct  ChunkStream_t_730507177_0  : public Object_t
{
	// System.Net.WebHeaderCollection System.Net.ChunkStream::headers
	WebHeaderCollection_t_1532305783_0 * ___headers_0;
	// System.Int32 System.Net.ChunkStream::chunkSize
	int32_t ___chunkSize_1;
	// System.Int32 System.Net.ChunkStream::chunkRead
	int32_t ___chunkRead_2;
	// System.Net.ChunkStream/State System.Net.ChunkStream::state
	int32_t ___state_3;
	// System.Text.StringBuilder System.Net.ChunkStream::saved
	StringBuilder_t586045924_0 * ___saved_4;
	// System.Boolean System.Net.ChunkStream::sawCR
	bool ___sawCR_5;
	// System.Boolean System.Net.ChunkStream::gotit
	bool ___gotit_6;
	// System.Int32 System.Net.ChunkStream::trailerState
	int32_t ___trailerState_7;
	// System.Collections.ArrayList System.Net.ChunkStream::chunks
	ArrayList_t536890563_0 * ___chunks_8;
};
