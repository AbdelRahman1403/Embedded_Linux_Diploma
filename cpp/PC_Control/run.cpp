#include "clinet_socket.hpp"

int main(){
    ClientSocekt cs;

    bool ret; 
    ret = cs.init_client_IB();
    if(ret != -1){
        std::cout << "IB successfull" << std::endl;
    }
    else{
        std::cerr << "not successfull\n";
    }
    ret = cs.connect_to_the_server();
    if(ret != -1){
        std::cout << "connect successfull" << std::endl;
    }
    else{
        std::cerr << "not suddefell\n";
    }
    cs.send_string_to_the_server();
    cs.receive_string_from_the_server();
}