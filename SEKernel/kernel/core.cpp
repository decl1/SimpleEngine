// file\  core.cpp
// 
// brief\ SIMPLE ENGINE CORE
// date\  28.03.2025
// 
// Copyright\ Anikin Maskism

// |include
#include <string>
#include <iostream>
#include "../kernel/core.hpp"
// |include

// function\ read_line_f
// brief\ cmd parcer
// retrival\ function status
int core_interface_cl::read_line_f(const std::string command_line, unsigned int* command_id) {
	int status = 0;

	if (command_line == "help") {
		*command_id = CMD_HELP;
		status = CORE_OK;
	}
	else if (command_line == "exit") {
		*command_id = CMD_EXIT;
		status = CORE_OK;
	}
	else {
		status = CORE_UNKNOWN_COMMAND;
	}

	return status;
}

// function\ run_command_f
// brief\ command runner
// retrival\ function status
int core_interface_cl::run_command_f(unsigned int com_id) {
	int status = 0;

	switch (com_id)
	{
	case CMD_HELP: {
		status = core->run_help_f();
		break;
	}
	case CMD_EXIT: {
		status = core->initial_exit_f();
		break;
	}
	default:
		status = CORE_UNKNOWN_COMMAND;
		break;
	}

	return status;
}

// function\ run_help_f
// brief\ help command
// retrival\ function status
int core_cl::run_help_f(void) {
	int status = CORE_OK;

	std::cout << " ! help - prints help menu" << std::endl;
	std::cout << " ! exit - safety close simple engine core" << std::endl;

	return status;
}

// function\ initial_exit_f
// brief\ exit the program
// retrival\ function status
int core_cl::initial_exit_f(void) {
	int status = CORE_OK;

	std::cout << " ! initialize exit..." << std::endl;
	status = CORE_EXIT;

	return status;
}