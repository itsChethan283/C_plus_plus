#include<iostream>>
#include<fstream>
using namespace std;

int main(){
    char a[20];
    cout << "Ente the name and age \n";
    cin.getline(a, 20);

    ofstream myfile("file_handling.txt", ios::app);
    //myfile.open("file_handling.txt");
    myfile << a;
    cout << "File is created and content is written \n";
    myfile.close();

    char b[20];
    ifstream obj("file_handling.txt");
    obj.getline(b, 40);
    cout << "The contents in file is: " << b << endl;
    obj.close();
}
