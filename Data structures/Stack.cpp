#include<iostream>
using namespace std;

class Stack{
private:
    int top;
    int a[5];
public:
    Stack(){
        top = -1;
        for(int i = 0; i < 5; i++){
            a[i] = 0;
        }
    }

    bool isEmpty(){
        if(top == -1)
            return true;
        else
            return false;
    }

    bool isFull(){
        if(top == 4)
            return true;
        else
            return false;
    }

    void push(int v){
        if(isFull())
            cout << "Stack is full \n";
        else{
            top++;
            a[top] = v;
            }
    }

    int pop(){
        if(isEmpty())
            cout << "Stack is Empty";
        else{
            int popped = a[top];
            //cout << "Popped : " << a[top] << endl;
            a[top] = 0;
            top--;
            return popped;
        }
    }

    int countIs(){
        return top + 1;
    }

    int peekPos(int p){
        if(isEmpty())
            cout << "Stack is Empty";
        else{
            return a[p];
        }
    }

    int change(int p, int v){
        //cout << "Changed the value \n";
        a[p] = v;
        return a[p];
    }

    void display(){
        cout << "Displaying \n";
        for(int i = 4; i >= 0; i--){
            cout << a[i] << endl;
        }
        cout << endl;
    }
};

int main(){
    Stack s;
    //s.display();

    s.push(20);
    s.push(65);
    s.push(43);

    cout << "Count is : " << s.countIs() << endl;

    s.push(10);
    s.push(340);
    //s.push(25);

    cout << "Peeked! " << s.peekPos(0) << endl; //65

    cout << "Changed the value to : " << s.change(0, 4567) << endl;

    cout << "Count is : " << s.countIs() << endl;

    //s.pop();

    s.display();
    return 0;
}
