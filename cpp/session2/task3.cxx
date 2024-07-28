#include<iostream>
#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

int search_number(std::vector<int>&v ,int val){
    sort(v.begin() , v.end());
    int low = 0 , high = v.size();

    while(low<=high){
        int mid = low + (high-low)/2;

        if(v[mid] > val) high = mid - 1;
        else if(v[mid] < val) low = mid+1;
        else {
            
            return mid;
        }
    }
    return -1;
}

int main(){
    int size;
    std::cout << "Enter The Size Of The Array : ";
    std::cin >> size;
    std::vector<int> v(size);
    std::cout << "Enter The Elemntes : ";
    for(int i = 0 ; i < size; i++) std::cin >> v[i];

    std::cout << "Enter The Number You Would Remove it : ";
    int num; std::cin >> num;

    if(search_number(v, num)){
        v.erase(std::remove(v.begin(),v.end() , num) , v.end());

        for(int i = 0 ; i < v.size(); i++){
            std::cout << v[i] << ' ';
        }
        std::cout << std::endl;

    }
    else{
        std::cout << "The Number you entered is not existing" << std::endl;
    }
}