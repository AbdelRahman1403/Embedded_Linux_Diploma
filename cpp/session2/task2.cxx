//Task2

#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

/* bool search_number(std::vector<int>&v ,int val){
    sort(v.begin() , v.end());
    int low = 0 , high = v.size();

    while(low<=high){
        int mid = low + (high-low)/2;

        if(v[mid] > val) high = mid - 1;
        else if(v[mid] < val) low = mid+1;
        else {
            
            return 1;
        }
    }
    return 0;
} */

int main(){
    int size;
    std::cout << "Enter The Size : ";
    std::cin >> size;

    std::vector<int>v(size);
    for(int i = 0 ; i < size ; i++) std::cin >> v[i];

    int num; 
    std::cout << "Enter The Number : ";
    std::cin >> num;
    sort(v.begin() , v.end());
    if(std::binary_search(v.begin(),v.end() , num)){
        std::cout << "The Element is Existing " << std::endl;
    }
    else{
        std::cout << "The Element is not Existing" << std::endl;;
    }
}