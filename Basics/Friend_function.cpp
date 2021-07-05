#include<iostream>
using namespace std;

class Distance{
private:
    int meters;
public:
    int m;
    Distance(){
        m = 10;
        meters = 0;
    }
    /*void display(){
        cout << "Distance : " << meters << endl;
    }*/
    friend void change(Distance &d);
    friend void display(Distance d);
    ~Distance(){
        cout << "Destructor \n";
    }
};

void change(Distance &d){
    d.meters = d.meters + 10;
}

void display(Distance d){
    cout <<  d.m;
}

int main(){
    Distance d1;
    //d1.display();

    //change(d1);
    //d1.display();
    display(d1);
    return 0;
}

// I changed
