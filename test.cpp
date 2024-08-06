#include <iostream>
#include <ostream>
#include <vector>
#include <algorithm>

class Integer {
public:
    Integer() = default;
    Integer(int num) : number(num) {}
    Integer& operator=(const Integer &x){
        number = x.number;
        return *this;
    }

    explicit operator int(){
        return number;
    }
    friend std::ostream& operator<<(std::ostream& out, const Integer& X);
    friend int operator*(const Integer &x ,const Integer &y);
    friend bool operator<(const Integer &x , const Integer &y);

private:
    int number;
};

int operator*(const Integer &x ,const Integer &y){
    return x.number * y.number;
}

bool operator<(const Integer &x , const Integer &y){
    return x.number < y.number;
}

std::ostream& operator<<(std::ostream& out, const Integer& X) {
    out << X.number;
    return out;
}

int main() {
    int temp = 10;
    int &x = temp;
    int l = x;

    l = 4;
    x = 20;
    std::cout << l << std::endl;
    std::cout << x << std::endl;
    std::cout << temp << std::endl;
    return 0;
}
