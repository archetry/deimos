#include "helper.hh"

void helper::log_err(const char* _param)
{
	printf("[err] %s", _param);
	
}

void helper::log_ok(const char* _param)
{
	printf("[ok] %s", _param);
}

void helper::log(const char* _param)
{
	printf("[msg] %s", _param);
}