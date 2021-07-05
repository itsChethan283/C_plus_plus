#include<iostream>
#include<string>
using namespace std;

class ComplexNumber{
private:
    int r;
    float i;
public:
    ComplexNumber(){}
    ComplexNumber(int real, float imaginary){
        r = real;
        i = imaginary;
    }
    void display(){
        cout << "Complex Number : " << r << " + " << i << "i \n\n";
    }
    int realPart(){
        return r;
    }
    float imaginaryPart(){
        return i;
    }
};

ComplexNumber add(ComplexNumber n1, ComplexNumber n2){
    int r;
    float i;
    r = n1.realPart() + n2.realPart();
    i = n1.imaginaryPart() + n2.imaginaryPart();
    ComplexNumber temp(r, i);
    return temp;
}

int main(){
    ComplexNumber c1(2, -3), c2(4, 5), c3;
    c1.display();
    c2.display();
    c3 = add(c1, c2);
    cout << "Sum : ";
    c3.display();

    ComplexNumber *c;
    c = &c3;
    //c = add(c1, c2)
    c->display();
    return 0;
}
