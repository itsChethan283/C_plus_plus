#include<iostream>
using namespace std;

template <typename T, typename U>
T add(T x, U y){
    cout << y << endl;
    return (x * y);
}

int main(){
    cout << "Sum : " << add<float, int>(2.3, 3.23);
    return 0;
}
