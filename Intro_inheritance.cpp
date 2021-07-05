
#include<iostream>
using namespace std;

class Cars{
private:
    int one;
protected:
    int two;
public:
    int three;
    Cars(){
        one = 1;
        two = 2;
        three = 3;
    }
};

class privateDerived : private Cars{
public:
    void display(){
        cout << "Private : " << two << three << endl;
    }
};

class protectedDerived : protected Cars{
public:
    void display(){
        cout << "Protected : " << two << three << endl;
    }
};

class publicDerived : public Cars{
public:
    void display(){
        cout << "Public : " << two << three << endl;
    }
};

void data(privateDerived obj){
    obj.display();
}

int main(){
    Cars c;
    /*protectedDerived c1;
    c1.display();
    publicDerived c2;
    c2.display();
    privateDerived c3;
    c3.display();*/

    privateDerived c2;

    data(c2);

   // c.three;
    return 0;
}
