
#include<iostream>
using namespace std;

int main(){
    int a[2][2] ,b[2][2];
    cout << "Enter the values of A" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Enter the values of B" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++) {
            cin >> b[i][j];
        }
    }
    //cout << a << endl << b;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl << "\n";
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++) {
            cout << a[i][j] + b[i][j] << "\t";
        }
        cout << "\n \n";
    }
}
