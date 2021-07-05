#include<iostream>
using namespace std;

int main(){
int a = 5;
int *b ;
b = &a;
cout<<b<<endl<<&b<<endl;
*b = 10;
cout<<a<<endl;
char d = 'q';
char *c;
c = &d;
cout<<c<<endl;
cout<<c + 1<<endl;
int i = 10;
int *j;
j = &i;
cout<<j<< endl;
cout<<j+1 << endl;
cout<<*(j+1) << endl;
int x = 5;
x = x^3;
cout<<x;
}
