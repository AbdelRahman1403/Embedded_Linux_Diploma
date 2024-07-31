#include <csignal>
#include<iostream>
#include <algorithm>
#include <vector>
#include <array>
#include<numeric>

void signal_intrrupt(int number){
    std::cout << "Good bye ya nemsss" << std::endl;

    exit(number);
}
int &f(){
    static int x , y;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    return x;
}
int main(){
    //f() must return a reference to a modifiable (non-const) variable. 
/*     f() = 10;
    f() = 5;
    f(); */
    //task_1
    /* signal(SIGABRT, signal_intrrupt);
    while(1){
        std::cout << "Hello World" << std::endl;
    } */


    
    //task_3
     /* std::array<int, 5> arr{0};
     int i = 0;
    arr.fill(5);
    for(auto a : arr){
        std::cout << a << ' ';
    }
    std::cout << std::endl;  */

    //task_5
    std::string s = "1+2+3+4+5+6+7+8+9";
    int res = std::accumulate(s.begin() , s.end() , 0, [](int acc , char c){
        return c == '+' ? acc : acc + (c - '0');
    });

    std::cout << "Sum of numbers in the string: " << res << std::endl;

    //task_4
    int y = 10;
    if(y > 5 and y < 15){
        std::cout << "Yes" << std::endl;
    }
    return 0;
}