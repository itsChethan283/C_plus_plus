#include<iostream>
using namespace std;

template <typename T>
class Base{
private:
    T rate;
public:
    Base(T r){
        rate = r;
    }
    T display(){
        return rate;
    }
};

int main(){
    Base <int>b1(3);
    cout << b1.display();
    return 0;
}
