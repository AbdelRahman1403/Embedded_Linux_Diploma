#include <iostream>
#include "command.hpp"
#include "../server_socket/server_socket.hpp"

int main() {
    ServerSocket server;
    set_command cmd;
    std::string buffer;

    if (server.init_server_socket()) {
        std::cerr << "Server initialization success" << std::endl;
        

    }
    else{
        std::cout << "Fieled init" << std::endl;
        return -1;
    }
    if(server.bind_to_specific_port()){
        std::cerr << "bind to specific port" << std::endl;
    }
    else{
        std::cout << "Fieled bind" << std::endl;
        return -2;
    }
    if (server.listening_the_socket()) {
        std::cerr << "Server listening success" << std::endl;
    }
    else{
        std::cout << "Fieled listen" << std::endl;
        return -2;
    }

    while (true) {
        std::cout << "Waiting for client connection..." << std::endl;
        if (server.accept_the_connection()) {
            std::cout << "Client connected." << std::endl;
            server.send_data_to_client("/--------------------/\n");
            server.send_data_to_client("menu\n");
            server.send_data_to_client("Enter a command or type 'exit' to quit\n");

            while (true) {
                buffer = server.receive_data_from_client();

                if (buffer == "exit") {
                    server.send_data_to_client("Exiting the server...\n");
                    server.close_socket();
                    std::cout << "Program finished." << std::endl;
                    return 0;
                }

                else if (buffer == "terminal") {
                    buffer = cmd.open_terminal();
                    //server.send_data_to_client(buffer);
                    buffer = "nothing"; // Reset buffer for next read
                }

                else if (buffer == "calc") {
                    cmd.open_calculator();
                    //server.send_data_to_client(buffer);
                    buffer = "nothing"; // Reset buffer for next read
                }
            }
        }
    }
}