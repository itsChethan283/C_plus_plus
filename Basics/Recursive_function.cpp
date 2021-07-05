#include<iostream>
using namespace std;

int sum(int m){
    if (m > 1){
        return m * sum(m - 1);
    }
    /*else
        return 0;*/
}

int main(){
    int n;
    cin >> n;
    cout << "The sum is : " << sum(n) << endl;
}
