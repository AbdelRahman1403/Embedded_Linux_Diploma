#ifndef COMMAND_HPP
#define COMMAND_HPP
#include <iostream>
#include <cstdio>


class set_command{
private:
public:
set_command() = default;
~set_command() = default;
void open_calculator();
std::string open_terminal();
//std::string open_calculator();
std::string open_chorme();
std::string open_vs_code();
};


#endif