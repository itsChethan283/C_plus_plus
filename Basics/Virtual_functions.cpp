#include<iostream>
using namespace std;

class A{
public:
    void display(){
        cout << "This is class A \n";
    }
};

class B{
public:
    void display(){
        cout << "This is class B \n";
    }
};

class AB : public A, public B{
public:
    void display(){
        A :: display();
    }
};

int main(){
    AB c;
    c.display();
    return 0;
}
