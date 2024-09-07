#ifndef SERVER_SOCKET_HPP
#define SERVER_SOCKET_HPP
#include <array>
#include<iostream>
#include <string.h>
#include <cstring>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>

class ServerSocket{
private:
int server_IB;
int client_IB;
sockaddr_in sockaddr_accept;
std::array<char, 5000>buffer; 
public:
ServerSocket();
~ServerSocket();
bool init_server_socket();
bool bind_to_specific_port();
bool listening_the_socket();
bool accept_the_connection();
void send_data_to_client(const std::string &message);
void receive_data_from_client();
void close_socket();
};
#endif