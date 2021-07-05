#include<iostream>
using namespace std;

class Increment{
private:
    int num;
public:
    Increment(){
        num = 3;
    }

    Increment operator --(){
        Increment t;
        t.num = --num;
        return t;
    }

    Increment operator --(int){
        Increment t;
        t.num = num--;
        return t;
    }

    void display(){
        cout << "Incremented : " << num << endl;
    }
};

int main(){
    /*Increment i;
    ++i;
    i.display();
    i++;
    i.display();*/

    Increment obj, obj1;
    obj.display();
    obj1.display();
    obj1 = --obj;
    obj1.display();
}
