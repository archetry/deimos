#include "username.hh"
#pragma once

std::string username::make_fresh()
{
	auto _string = generator::make_string(8);

	if (_string == "")
		return std::string();
	else
		return _string;
}
