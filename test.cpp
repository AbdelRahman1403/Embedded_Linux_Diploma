#include <iostream>
#include <ostream>
#include <sys/cdefs.h>
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

class Shape{
public:
    virtual void Draw()  =0;
};
class Circle :public Shape{
public:
    void Draw () override{std::cout << "This is Circle shape" << std::endl;}
};

class Rectangle :public Shape{
public:
    void Draw () override{std::cout << "This is Rectangle shape" << std::endl;}
};

int main() {
    int &&x = 10;
    std::cout << &x << std::endl;
    int *a = &x;
    *a = 50;
    std::cout << x << std::endl;
    return 0;
}
