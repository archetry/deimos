#pragma once

#include "including.hh"
#include <stdarg.h>

namespace helper {
	void log_err(const char* _param);
	void log_ok(const char* _param);
	void log(const char* _param);
}