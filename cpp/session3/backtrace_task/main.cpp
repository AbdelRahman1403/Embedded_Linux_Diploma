/* File Name : task3.cpp */
/* The Author is : AbdelRahman Ahmed Yassin */
/* The Date Of The File : 2024-07-30 */
#include "backtrace.hpp"
#include <cinttypes>
void fun1(int x);
void fun2(int x);
void fun3(int x);
int main(){
    EnterFn;

    fun1(2);
    ExitFn;

}

void fun1(int x){
    EnterFn;

    fun2(3);
    ExitFn;

}
void fun2(int x){
    EnterFn;

    fun3(3);
    ExitFn;
}
void fun3(int x){
    EnterFn;
    PRINT_BT
    ExitFn;
}