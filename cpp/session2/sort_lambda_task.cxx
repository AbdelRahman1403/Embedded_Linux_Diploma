#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <iterator>
#include <vector>

int main(){
    std::vector<int>v {5 , 10 , 2 , 3 , 8 , 9 , 1 , 12};

    std::cout << "The elements with non sorted : ";
    for(auto a : v){
        std::cout << a << ' ';
    }
    std::cout << std::endl;
    std::cout << "The elements with non sorted : ";

    std::sort(std::begin(v) , std::end(v) , [](int x , int y)->bool{
        return y > x;
    });
    for(auto a : v){
        std::cout << a << ' ';
    }
    std::cout << std::endl;    
}