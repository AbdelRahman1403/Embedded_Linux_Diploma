#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>

int main(){
    int num;
    std::cout << "Enter The Number : ";
    std::cin >> num;

    auto fun = [](int num)->int{
        return std::pow(num , 3);
    };

    std::cout << "The result is : " << fun(num) << std::endl;
    
}