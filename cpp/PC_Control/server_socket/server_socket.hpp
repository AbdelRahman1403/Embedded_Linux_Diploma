#ifndef SERVER_SOCKET_HPP
#define SERVER_SOCKET_HPP
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

public:
ServerSocket() = default;
~ServerSocket() = default;
short listening_the_socket();
};
#endif