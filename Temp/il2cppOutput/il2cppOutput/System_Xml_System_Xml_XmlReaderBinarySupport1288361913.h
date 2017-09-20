#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlReader
struct XmlReader_t1629164245_0;

#include "mscorlib_System_Object_887538054.h"
#include "System_Xml_System_Xml_XmlReaderBinarySupport_Comman282824380.h"

// System.Xml.XmlReaderBinarySupport
struct  XmlReaderBinarySupport_t1288361913_0  : public Object_t
{
	// System.Xml.XmlReader System.Xml.XmlReaderBinarySupport::reader
	XmlReader_t1629164245_0 * ___reader_0;
	// System.Int32 System.Xml.XmlReaderBinarySupport::base64CacheStartsAt
	int32_t ___base64CacheStartsAt_1;
	// System.Xml.XmlReaderBinarySupport/CommandState System.Xml.XmlReaderBinarySupport::state
	int32_t ___state_2;
	// System.Boolean System.Xml.XmlReaderBinarySupport::hasCache
	bool ___hasCache_3;
	// System.Boolean System.Xml.XmlReaderBinarySupport::dontReset
	bool ___dontReset_4;
};
