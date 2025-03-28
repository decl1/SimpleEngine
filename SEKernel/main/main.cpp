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

    // brief\ infinity cycle
    for (;;) {
        std::cout << " > ";
        std::getline(std::cin, UserCommand);
    }
   
    return 0;
}
