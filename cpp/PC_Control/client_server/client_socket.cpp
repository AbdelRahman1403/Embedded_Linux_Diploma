/* File Name : client_socket */
/* The Author is : AbdelRahman Ahmed Yassin */
/* The Date Of The File : 2024-09-04 */
#include "clinet_socket.hpp"

bool ClientSocekt::init_client_IB(){
    client_IB = socket(AF_INET, SOCK_STREAM, 0);
    return client_IB;
}
//connect the client to the specific server
bool ClientSocekt::connect_to_the_server(){
    memset(&socket_adrr, 0, sizeof(socket_adrr));
    socket_adrr.sin_family = AF_INET;
    socket_adrr.sin_port = htons(8888);
    socket_adrr.sin_addr.s_addr = inet_addr("192.168.1.2");
    return connect(client_IB, (struct sockaddr*)&socket_adrr, sizeof(socket_adrr));
}

void ClientSocekt::send_string_to_the_server(){
    //char buffer[1024] = "Hello World\n";
    std::string buffer;
    std::cout << "Enter The Message : ";
    getline(std::cin, buffer); 
    //send(client_IB, buffer, buffer.size() , 0);
    send(client_IB, buffer.data(), buffer.size(), 1);
}

void ClientSocekt::receive_string_from_the_server(){
    char buffer[1024];
     memset(buffer , 0 , 1024); 
    recv(client_IB, buffer, 1024, 0);
    printf("The receive data is : %s\n" , buffer);
}

void ClientSocekt::close_client_socket(){
    close(client_IB);
}