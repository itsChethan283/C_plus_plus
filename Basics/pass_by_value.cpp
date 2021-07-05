#include<iostream>
using namespace std;

void passByValue(int a, int b){
    int t = a;
    a = b;
    b = t;
}

void passByReference(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}

void passByAddress(int *a, int*b){
    int t = *a;
    *a = *b;
    *b = t;
}

int main(){
    int x = 10, y = 20;
    cout << "Before " << x << y << endl;

    //passByValue(x, y);
    //passByReference(x, y);
    passByAddress(&x, &y);

    cout << "After " << x << y << endl;
}
