#ifndef COMMAND_HPP
#define COMMAND_HPP
#include <iostream>
#include <cstdio>
#include <string>


class set_command{
private:
public:
set_command() = default;
~set_command() = default;
std::string open_calculator();
void open_terminal();
//std::string open_calculator();
std::string open_chorme();
std::string open_vs_code();

std::string open_linkedin();
std::string open_youtube();
};


#endif