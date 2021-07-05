#include<iostream>
using namespace std;

class Base
{
public:
    int n;
    Base(){
        n = 5;
    }
    void display(){
        cout << "Number in Base : " << n << endl;
    }
//protected:
//private:
    //int n;
};

class Derived : public Base{
public:
    void display(){
        cout << "Number in Derived : " << n + n << endl;
        Base::display();
    }
};

int main(){
    Derived d;
    d.display();
    return 0;
}


