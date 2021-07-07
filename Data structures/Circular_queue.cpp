#include<iostream>
#include<cstdlib>
using namespace std;

class CircularQueue{
private:
    int fro, rear, a[5];
public:
    CircularQueue(){
        fro = -1;
        rear = -1;
        for(int i = 0; i < 5; i++){
            a[i] = 0;
        }
    }


    bool isEmpty(){
        if(fro && rear == -1)
            return true;
        else
            return false;
    }

    bool isFull(){
        if(rear == 4)
            return true;
        else
            return false;
    }

    int count(){
        if(isEmpty()){
            //cout << "There is nothing to remove \n";
            return 0;
        }
        else if(fro && rear == 0){
            /*a[rear] = 0;
            rear--;
            fro--;*/
            return 1;
        }
        else{
            /*a[fro] = 0;
            fro++;*/
            return (rear + 1) - fro;
        }
    }

    void enqueue(int v){
        /*if(isFull()){
            cout << "Queue is Full \n";
            rear = 0;
            fro = 0;
            a[rear] = v;
        }*/
        if(isFull() && (a[0] == 0)){
            cout << "Queue is Full, jumped \n";
            rear = 0;
            //fro = 0;
            a[rear] = v;
        }
        else if(isFull()){
            cout << "Queue is Full \n";
            rear = 0;
            fro = 0;
            a[rear] = v;
        }
        else if(isEmpty()){
            fro++;
            rear++;
            //cout << rear << fro << "elseif" << endl;
            a[rear] = v;
        }
        else if(a[rear + 1] == 0){
            a[rear + 1] = v;
            rear++;
            //cout << rear << fro << endl;
        }
        else
            cout << "No space! \n";
    }

    void dequeue(){
        if(isEmpty()){
            cout << "There is nothing to remove \n";
        }
        else if(fro && rear == 0){
            a[rear] = 0;
            rear--;
            fro--;
        }
        else{
            a[fro] = 0;
            fro++;
        }
    }

    void display(){
        cout << "The queue is : \n";
        for(int i = 0; i < 5; i++){
            cout << a[i] << endl;
        }
        cout << endl;
    }
};

int main(){
    CircularQueue q;
    int n = 1;
    int v;

    while(n != 0){
        cout << "Select the option : \n";
        cout << " 1. Display \n 2. Enqueue \n 3. Dequeue \n 4. Count \n 5. Clear\n\n";
        cin >> n;
        switch(n){
        case 1:
            q.display();
            break;

        case 2:
            cout << "Enter the element to put in queue : \n";
            cin >> v;
            q.enqueue(v);
            /*q.enqueue(10);
            q.enqueue(20);
            q.enqueue(30);
            q.enqueue(40);
            q.enqueue(50);*/
            break;

        case 3:
            q.dequeue();
            cout << "Removed the first element in queue \n";
            break;

        case 4:
            cout << "The count is : " << q.count() << endl;
            break;

        case 5:
            system("cls");
            break;

        default:
            break;
        }
    }
}
