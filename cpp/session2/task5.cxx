//Task5

#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

bool find_even(int x);
bool find_odd(int x);

int main(){
    std::vector<int>res {1,2,3,4,5,6,7,8,9,10};
    std::vector<int>odd , even;

    for(int i = 0; i < res.size(); i++){
        if(find_even(res[i])){ 
            even.push_back(res[i]);
            }
        else {
            odd.push_back(res[i]);
        } 
    }
    std::cout << "Even Numbers : ";
    std::for_each(even.begin(),even.end() , [](int i){
        std::cout << i << " ";
    });
    std::cout << std::endl;
    std::cout << "Odd Numbers  : ";
    std::for_each(odd.begin(),odd.end() , [](int i){
        std::cout << i << " ";
    });

    std::cout << std::endl;
}
bool find_odd(int x){
    return x % 2;
}

bool find_even(int x){
    return !(find_odd(x));
}