#include "server_socket.hpp"
#include <chrono>
#include <thread>
int main(){
    ServerSocket server;
    bool ret;
    ret = server.init_server_socket();
    if (ret == -1){
        std::cout << "Server is init\n";
    }
    ret = server.bind_to_specific_port();
    if (ret == -1){
        std::cout << "bind_to_specific_port\n";
    }
    ret = server.listening_the_socket();
    if (ret == -1){
        std::cout << "listening_the_socket\n";
    }
    server.accept_the_connection();
    while(1){
        server.receive_data_from_client();
        std::string buffer;
        std::cout << "Enter The Message : ";
        getline(std::cin, buffer); 
        server.send_data_to_client(buffer);
    }
}