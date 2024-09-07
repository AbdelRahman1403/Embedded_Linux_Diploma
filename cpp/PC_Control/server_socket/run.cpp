#include "server_socket.hpp"
#include <chrono>
#include <thread>
int main(){
    ServerSocket server;
    bool ret;
    ret = server.init_server_socket();
    ret = server.bind_to_specific_port();
    ret = server.listening_the_socket();
    server.accept_the_connection();
    while(1){
        server.receive_data_from_client();
        std::string buffer;
        std::cout << "Enter The Message : ";
        getline(std::cin, buffer); 
        server.send_data_to_client(buffer);
    }
}