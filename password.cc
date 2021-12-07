#include "password.hh"

std::string password::make_fresh()
{
	auto _string = generator::make_string(15);

	if (_string == "")
		return std::string();
	else
		return _string;
}