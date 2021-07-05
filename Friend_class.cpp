#include<iostream>
#include<string.h>
using namespace std;

class One{
    friend class Two;
private:
    string car[5];
public:
    One(){
        car[0] = 'B';
    }
};

class Two{
public:
    void show(One obj){
        cout << obj.car[0] << endl;
    }
};

int main(){
    One obj1;
    Two obj2;
    obj2.show(obj1);
    return 0;
}
