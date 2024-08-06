/* File Name : backtrace.hpp */
/* The Author is : AbdelRahman Ahmed Yassin */
 /* The Date Of The File : 2024-07-30 */
#include<iostream>
#include <algorithm>
#include <vector>
#include<map>



#define EnterFn std::cout << "Enter To [ " << __FUNCTION__ << " ]" <<std::endl;v.push_back(__FUNCTION__);

#define PRINT_BT for(int i = 0 ; i < v.size(); i++) std::cout <<  i << " - " <<v[i] << std::endl;

#define ExitFn  std::cout << "Exit To [ " << __FUNCTION__ << " ]" <<std::endl

std::vector<std::string> v;

