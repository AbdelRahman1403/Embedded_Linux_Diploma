#include "server_socket.hpp"
#include <algorithm>
#include <arpa/inet.h>
#include <cctype>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
ServerSocket::ServerSocket(){

}
ServerSocket::~ServerSocket(){
    
};
bool ServerSocket::init_server_socket(){
    bool ret = 1;
    server_IB = socket(AF_INET, SOCK_STREAM, 0);
    if(server_IB < 0){
        std::cerr << "Cannot init server IB" << std::endl;
        ret = -1;
    }
    return ret;
}
 
bool ServerSocket::bind_to_specific_port(){
    bool ret = true;  // Initial assumption is success

    sockaddr_in sock_addr;
    sock_addr.sin_family = AF_INET;          // IPv4
    sock_addr.sin_port = htons(8888);        // Port 8888 in network byte order
    sock_addr.sin_addr.s_addr = INADDR_ANY;  // Accept connections from any IP address

    // Bind the socket to the IP and port
    if (bind(server_IB, (sockaddr*)&sock_addr, sizeof(sock_addr)) < 0) {
        std::cerr << "Cannot bind to the port" << std::endl;
        ret = false;  // Binding failed
    }

    return ret;  // Return success or failure
}

 
bool ServerSocket::listening_the_socket(){
    bool ret = 1;
    if(listen(server_IB, 2) < 0){
        std::cerr << "Cannot listen" << std::endl;
        ret = -1;
    }
    return ret;
}
 
bool ServerSocket::accept_the_connection(){
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
    send(client_IB , message.data() , message.length() , 0);
}
 
std::string ServerSocket::receive_data_from_client(){
    // Receive data from client, return_string holds the number of bytes received
    ssize_t return_string = recv(client_IB, static_cast<void*>(buffer.data()), buffer.size(), 0);

    // Check for error in receiving data
    if (return_string < 0) {
        std::cerr << "Error, data not received" << std::endl;
        return "ERROR";
    }
    // Check if the client has closed the connection
    else if (return_string == 0) {
        std::cerr << "Client closed the connection" << std::endl;
        return "CLOSED";
    }
    
    // Create a string from the received buffer
    std::string buffer_receive(buffer.data(), return_string);
    
    // Print the received data for debugging
    std::cout << "The return data is: " << buffer_receive << std::endl;
    
    return buffer_receive;
}

 
void ServerSocket::close_socket(){
    client_IB = -1;
    if(client_IB != -1){
        close(client_IB);
    }
}
void ServerSocket::close_listening(){
        close(server_IB);
}

void ServerSocket::trim(std::string &str){
    str.erase(std::find_if(str.rbegin() , str.rend() ,[](unsigned char ch){
       return !std::isspace(ch); 
    }).base() , str.end());
}