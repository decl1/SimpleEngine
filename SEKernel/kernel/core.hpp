// file\  core.hpp
// 
// brief\ SIMPLE ENGINE CORE HEADER
// date\  28.03.2025
// 
// Copyright\ Anikin Maskism

#ifndef LIB_SE_CORE_H_
#define LIB_SE_CORE_H_

// | STATUS ENUM
typedef enum {
    CORE_OK = 0,
    CORE_ERROR,
    CORE_UNKNOWN_COMMAND
} core_errors_en;
// | STATUS ENUM

// | COMMANDS ENUM
typedef enum {
    CMD_HELP = 0,
    CMD_EXIT
} core_commands_en;
// | COMMANDS ENUM

// |include
#include <string>
// |include

// class\ core
// brief\ core class
class core_cl {
private:
    core_interface_cl interface;
public:
    core_cl() {
        interface = core_interface_cl();
    };

    ~core_cl() = default;
};

// class\ core_interface_cl
// brief\ core interface class
class core_interface_cl {
public:
    core_interface_cl() {};
    ~core_interface_cl() = default;

    // function\ readline_f
    // brief\ cmd parcer
    // retrival\ function status
    int read_line_f(const std::string commandline, unsigned int& com_id);
};
#endif  // LIB_SE_CORE_H_
