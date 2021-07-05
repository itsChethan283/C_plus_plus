#include<iostream>
using namespace std;

class Base{
public:
    int a;
    static int count;

    Base(){
        a = 2;
        count = count + 1;
        //cout << count << endl;
    }

    static void display(){

        cout << "Only static : " << count << endl;
    }
};

int Base :: count = 0;

int main(){
    Base b1, b2, b3;
    b3.display();
    return 0;
}
