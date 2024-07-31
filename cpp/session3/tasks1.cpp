/* File Name : tasks1.cpp */
/* The Author is : AbdelRahman Ahmed Yassin */
/* The Date Of The File : 2024-07-28 */
#include<iostream>
#include <algorithm>
#include <vector>
bool is_even(int x){
    return !(x % 2);
}


int main(){
    
    //task_1
    char ch = '3';
    if(std::isdigit(ch)){
        std::cout << "Yes is digit" << std::endl;
    }
    else{
        std::cout << "No" << std::endl;
    } 
    
    //task_2
     std::vector<int> vec {5 , 10 , 3 , 4 , 15 , 40 , 43};

    
    for (auto i : vec){
        if(!(is_even(i))){
            std::cout << "The digit : " << i << " is not even" << std::endl;
            break;
        }
    } 
    //task_3 
    for (auto i : vec){
        if((is_even(i))){
            std::cout << "The digit : " << i << " is even" << std::endl;
        }
    }  

}