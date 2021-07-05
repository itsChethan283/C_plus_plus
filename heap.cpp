#include<iostream>
using namespace std;

int main(){
    int a = 2, b = 3, c = 4;
    int *x = &a, *y = &b, *z = &c;

    *y = *z;
    cout << a << endl << b << endl << c << endl << *x << endl << *y << endl << *z << endl;

    int *p, *q;
    p = new int;
    q = p;
    *q = 8;   //*p = 8
    cout << *p << endl;

    q = new int;
    *q = 9;
    cout << *q << endl;  //9
    cout << *p << endl;   //8

    int *m;
    int size = 3;
    m = new int[size];
    for(int i = 0; i < size; i++) {
        x[i] = i + 3;
        cout << x[i] << endl;
    }
    delete[] x;

    return 0;
}
