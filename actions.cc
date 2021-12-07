#pragma once

#include "actions.hh"

int actions::load(const char* arg)
{
	// no switch case, sorry.
	// need to call strcmp

	if (strcmp(arg, "password"))
		std::cout << "Your freshly generated password -> " << password::make_fresh() << std::endl;

	if (strcmp(arg, "username"))
		std::cout << "Your freshly generated username -> " << username::make_fresh() << std::endl;

	if (strcmp(arg, "info"))
		printf("proudly made by chip :)\n");

	else
		printf(msg___param_invalid);

	return 0;
}