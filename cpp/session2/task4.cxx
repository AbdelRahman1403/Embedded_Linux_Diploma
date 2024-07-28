//Task4

#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

std::vector<int> merge_2_arrays(std::vector<int>&v1 , std::vector<int>&v2){
    for(int i = 0 ; i < v2.size(); i++){
        v1.push_back(v2[i]);
    }
    return v1;
}

int main(){
    std::vector<int>v1 {3,4,5,6,7};
    std::vector<int>v2 {1,2,3,4};

    std::vector<int> res = merge_2_arrays(v2 , v1);

    std::for_each(res.begin(),res.end() , [](int i){
        std::cout << i << " ";
    });
    std::cout << std::endl;
}