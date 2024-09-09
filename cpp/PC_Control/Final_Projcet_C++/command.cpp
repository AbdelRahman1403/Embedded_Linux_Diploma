#include "command.hpp"
#include <cstdio>
#include <cstdlib>

void set_command::open_terminal(){
    int result = system("terminator");
    if (result == -1) {
        std::cerr << "Failed to execute terminator command" << std::endl;
    } else {
        std::cout << "Terminator command executed successfully" << std::endl;
    }
    /*FILE *fp;
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
    return result;*/
}
 
std::string set_command::open_calculator(){
    FILE *fp;
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
    return result;
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

std::string set_command::open_linkedin(){
    FILE *fp;
    fp = popen("xdg-open https://www.linkedin.com/in/abdelrahman-yassin-1ba916255/", "r");
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

std::string set_command::open_youtube(){
    FILE *fp;
    fp = popen("xdg-open https://www.youtube.com/", "r");
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