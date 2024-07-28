//task1
#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

int find_max_array(std::vector<int>&v){
    int maxx = INT_MIN;
    for(int i = 0 ; i < v.size(); i++){
        maxx = std::max(maxx , v[i]);
    }
    return maxx;
}
int main(){
    //Task with Lamda
/*     int size;
    std::cout << "Enter The Size Of The Array : ";
    std::cin >> size;

    std::vector<int> v(size);
    int maxx = INT_MIN;
    std::for_each(v.begin(),v.end() , [&maxx](int ele){
        std::cout << "Enter The elemnt : ";
        std::cin >> ele;
        maxx = std::max(maxx , ele);
    });
    std::cout << "The Result is : " <<maxx << std::endl; */

    //Task with Function
    int size;
    std::cout << "Enter The Size Of The Array : ";
    std::cin >> size;
    std::vector<int> v(size);
    for(int i = 0 ; i < size; i++) std::cin >> v[i];
    std::cout << "The Result is : " << find_max_array(v) << std::endl;

}