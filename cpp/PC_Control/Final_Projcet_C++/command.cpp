#include "command.hpp"
#include <cstdio>
#include <cstdlib>

std::string set_command::open_terminal(){
    FILE *fp;
    fp = popen("gnome-terminal", "r");
    if(!fp){
        std::cerr << "The process is unsuccess" << std::endl;
        return "Error\n";
    }
    char buffer[128];
    std::string result;
    while((fgets(buffer, sizeof(buffer), fp)) != nullptr){
        result+=buffer;
    }
    pclose(fp);
    return result;
}
 
void set_command::open_calculator(){
    system("gnome-calculator");
    /*FILE *fp;
    fp = popen("gnome-calculator", "r");
    if(!fp){
        std::cerr << "The process is unsuccess" << std::endl;
        return "Error\n";
    }
    char buffer[128];
    std::string result;
    while((fgets(buffer, sizeof(buffer), fp)) != nullptr){
        result+=buffer;
    }
    pclose(fp);
    return result;*/
}
 
std::string set_command::open_chorme(){
    FILE *fp;
    fp = popen("google-chrome", "r");
    if(!fp){
        std::cerr << "The process is unsuccess" << std::endl;
        return "Error\n";
    }
    char buffer[128];
    std::string result;
    while((fgets(buffer, sizeof(buffer), fp)) != nullptr){
        result+=buffer;
    }
    pclose(fp);
    return result;
}
 
std::string set_command::open_vs_code(){
    FILE *fp;
    fp = popen("code", "r");
    if(!fp){
        std::cerr << "The process is unsuccess" << std::endl;
        return "Error\n";
    }
    char buffer[128];
    std::string result;
    while((fgets(buffer, sizeof(buffer), fp)) != nullptr){
        result+=buffer;
    }
    pclose(fp);
    return result;
}
 