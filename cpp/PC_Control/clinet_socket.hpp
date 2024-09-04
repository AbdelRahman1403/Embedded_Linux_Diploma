
/* File Name : client_socket */
/* The Author is : AbdelRahman Ahmed Yassin */
/* The Date Of The File : 2024-09-04 */
#ifndef CLIENT_SOCKET_HPP
#define CLIENT_SOCKET_HPP
#include <array>
#include<iostream>
#include <string.h>
#include <cstring>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
class ClientSocekt{
private:
int client_IB;
sockaddr_in socket_adrr;
public:
ClientSocekt() = default;
    bool init_client_IB();
    bool connect_to_the_server();
    void send_string_to_the_server();
    void receive_string_from_the_server();
    void close_client_socket();
~ClientSocekt() {
    //close(client_IB);
}
};
#endif