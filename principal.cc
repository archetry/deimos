#pragma once

#include "including.hh"

int main(int argc, const char* argv[])
{
	srand(time(NULL)); // reset

	if (argc < 2)
		helper::log_err(msg___not_enough_args);

	helper::log("hey! loading\n");
	actions::load(argv[1]);

	return 0;
}