#if !defined(PROGRAM_H)
#define PROGRAM_H
#define Log(msg) Program::log(msg)
#include <string>

namespace Program {
    void log(std::string msg);
}

#endif