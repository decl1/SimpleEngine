// file\  core.cpp
// 
// brief\ SIMPLE ENGINE CORE
// date\  28.03.2025
// 
// Copyright\ Anikin Maskism

// |include
#include <string>
#include "../kernel/core.hpp"
// |include

// function\ read_line_f
// brief\ cmd parcer
// retrival\ function status
int core_interface_cl::read_line_f(const std::string command_line, unsigned int& command_id) {
	int status = 0;

	if (command_line == "help") {
		command_id = CMD_HELP;
	}
	else if (command_line == "exit") {
		command_id = CMD_EXIT;
	}
	else {
		status = CORE_UNKNOWN_COMMAND;
	}

	return status;
}
