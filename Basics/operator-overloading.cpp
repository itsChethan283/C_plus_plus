#include<iostream>
using namespace std;

class Complex{
private:
    int real, imag;
public:
    Complex(){
        real = 0;
        imag = 0;
    }
    Complex(int r, int  i){
        real = r;
        imag = i;
    }

    Complex operator +(Complex c){
     Complex t;
     t.real = real + c.real;
     t.imag = imag + c.imag;
     return t;
    }

    void display(){
        cout << "Result : " << real << " + " << imag << "i  \n\n";
    }
};

int main(){
    Complex c1(1, 2), c2(3, 4), c3(5, 6), c4;
    c4 = c1 + c2 + c3;

    c4.display();
    return 0;
}
