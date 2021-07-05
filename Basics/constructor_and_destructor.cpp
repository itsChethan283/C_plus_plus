#include<iostream>
#include<string>
using namespace std;

class Person{
private:
    string name;
    int age;
public:
    Person(){
        name = "Chethan";
    }
    Person(int a, string str){
        age = a;
        name = str;
    }
    Person(Person &obj){
        name = obj.name;
        age = obj.age;
    }

    void setData(string, int);
    void display(){
        cout << name << age << endl;
    }

    ~Person(){
        cout << "Destructor";
    }
};

/*void Person :: setData(){
    //cout << "Name : " << str << "\n Age : " << age;
    /*cout << "Enter the name and age \n";
    cin >> name >> age;
    cout << "Name : " << name << "\n Age : " << age;
}*/

void Person :: setData(string str, int a){
    name = str;
    age = a;
    //cout << name << age;
}

int main(){
    Person p1, p2(20, "Chethan");
    Person p3 = p2;
    //p1.setData();
    //p2.setData("Chethan", 20);
    p2.display();
    p1.display();
    p3.display();
    return 0;
}
