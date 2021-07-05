#include<iostream>
using namespace std;

int main(){
    int n, d, a;
    cout << "Enter the numerator and denomerator \n";
    cin >> n >> d;
    //cout << n / d;
    try{
        if(d == 0){
            throw d;
        }
        a = n / d;
    }
    catch(int ex){
        cout << "Dinomenator is zero \n";
    }
    cout << a;
}
