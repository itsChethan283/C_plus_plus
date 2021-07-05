#include<iostream>
using namespace std;

inline int add(int, int);

int sub(int a, int b = 10){
    return a - b;
}

int main(){
    int s;
    s = add(20, 10);
    cout << s;
    int su;
    cout << sub(20, 11);
    cout << sub(0);
}
 inline int add(int a, int b){
    return a + b;
 }
