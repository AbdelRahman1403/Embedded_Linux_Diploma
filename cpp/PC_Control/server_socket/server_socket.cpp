#include "server_socket.hpp"
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
ServerSocket::ServerSocket(){

}
ServerSocket::~ServerSocket(){
    
};
bool ServerSocket::init_server_socket(){
    std::cout << __FUNCTION__ << std::endl;
    bool ret = 1;
    server_IB = socket(AF_INET, SOCK_STREAM, 0);
    if(server_IB < 0){
        std::cerr << "Cannot init server IB" << std::endl;
        ret = -1;
    }
    return ret;
}
 
bool ServerSocket::bind_to_specific_port(){
    std::cout << __FUNCTION__ << std::endl;
    bool ret = 1;
    sockaddr_in sock_addr;
    sock_addr.sin_port = htons(8888);
    sock_addr.sin_family = AF_INET;
    inet_pton(AF_INET, "127.0.0.1", &sock_addr.sin_addr);
    if(bind(server_IB , (sockaddr*)&sock_addr , sizeof(sock_addr)) < 0){
        std::cerr << "Cannot bind to the port" << std::endl;
        ret = -1;
    }
    return ret;
}
 
bool ServerSocket::listening_the_socket(){
    std::cout << __FUNCTION__ << std::endl;
    bool ret = 1;
    if(listen(server_IB, 2) < 0){
        std::cerr << "Cannot listen" << std::endl;
        ret = -1;
    }
    return ret;
}
 
bool ServerSocket::accept_the_connection(){
    std::cout << __FUNCTION__ << std::endl;
    bool ret = 1;
    sockaddr_in client;
    socklen_t size_client = sizeof(client);
    client_IB = accept(server_IB, (sockaddr*)&client, &size_client);
    if(client_IB < 0){
        ret = -1;
        std::cerr << "Cannot accept the client" << std::endl;
    }
    return ret;
}
 
void ServerSocket::send_data_to_client(const std::string &message){
    std::cout << __FUNCTION__ << std::endl;
    send(client_IB , message.data() , message.length() , 0);
}
 
void ServerSocket::receive_data_from_client(){
    std::cout << __FUNCTION__ << std::endl;
    ssize_t return_string = recv(client_IB, static_cast<void*>(buffer.data()), buffer.size(), 0);

    if(return_string < 0){
        std::cout << "Error , not receive\n";
    }
    else if (return_string == 0){
        std::cout << "The user close the connection\n";
    }
    else{
        std::string buffer_recive(buffer.data() , return_string);
        std::cout << "The return data is : " << buffer_recive << std::endl;
    }
}
 
void ServerSocket::close_socket(){
    std::cout << __FUNCTION__ << std::endl;
}
 