// file\  main.cpp
// 
// brief\ executable simple engine console application
// date\  28.03.2025
// 
// Copyright\ Anikin Maskism

// |include
#include <iostream>
#include <istream>
#include <string>

#include "../kernel/core.hpp"
// |include

// |defines

// |defines

// function\ main
// brief\ program starts here
// retrival\ program end code
int main() {
    // brief\ hello text
    std::cout << "=========WELCOME=========" << std::endl;
    std::cout << "SIMPLE ENGINE CONSOLE APP" << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << "software_version: v0.0.0" << std::endl;
    std::cout << "author: Anikin Maksim" << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << "type \"help\" to get list of commands" << std::endl << std::endl;
    
    // brief\ local var
    std::string UserCommand;
    core_cl core;
    core_interface_cl cls_interface(&core);
    unsigned int command_id = 0;
    int command_status = 0;

    // brief\ infinity cycle
    for (;;) {
        std::cout << " > ";
        std::getline(std::cin, UserCommand);
        cls_interface.read_line_f(UserCommand, &command_id);
        command_status = cls_interface.run_command_f(command_id);
        std::cout << "Command retrival code: " << command_status << std::endl;

        if (command_status == CORE_EXIT) break;
    }
   
    return 0;
}
