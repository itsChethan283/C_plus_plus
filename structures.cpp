#include<iostream>
using namespace std;

struct Person{
    char name[20];
    int age;
};

int main(){
    Person p;
    cout << "Enter the name and age \n";
    //cin >> p.name >> p.age;
    //cout<< "The details are \n" << "Name : " << p[1].name << "\n Age : " << p[1].age << endl << "Name : " << p[2].name << "\n Age : " << p[2].age << endl;

    Person *ptr;
    ptr = &p;
    cin >> ptr ->name >> ptr ->age;
    cout << ptr ->name << endl << ptr->age << endl << ptr << endl << &p;

    return 0;
}
