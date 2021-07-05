#include<iostream>
using namespace std;

int main(){
    int size, s;
    int *ptr;
    cout << "Enter the size of the array \n";
    cin >> size;
    ptr = new int[size];

    cout << "Enter the sum \n";
    cin >> s;

    cout << "Enter the array elements \n";
    for(int i = 0; i < size; i++){
        cin >> ptr[i];
    }

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(ptr[i] + ptr[j + 1] == s){
                cout << "First " << ptr[i] << "  Second " << ptr[j] << endl;
            }
        }
    }
}
