
#include<iostream>
using namespace std;

int main(){
    int num, n, f = 0, s = 1;
    cout << "Enter the number" << endl;
    cin >> num;
    for (int i = 0; i <= num; i++){
        cout << f << endl;
        n = f + s;
        f = s;
        s = n;
    }
}
