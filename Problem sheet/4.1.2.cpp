#include<iostream>
using namespace std;

int main(){
    int n, count = 0;
    int s;
    int *ptr, *str;
    cout << "Enter the size of array : ";
    cin >> n;
    ptr = new int[n];
    str = new int[n];

    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            if(ptr[i] == ptr[j]){
                count++;
            }
        }str[i] = count;
        cout << count;
    }
}
