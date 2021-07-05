
#include<iostream>
using namespace std;

int main(){
    int n, digit, num, rev = 0;
    cout << "Enter the number" << endl;
    cin >> num;
    n = num;
    //cout << n;
    while (num !=0){
        digit = num % 10; // 1, 2, 0
        rev = (rev * 10) + digit; // 1, 12,
        num = num / 10;   // 12, 1
    }

    if (n == rev){
        cout << n << " is a palindrome number";
    }
}
