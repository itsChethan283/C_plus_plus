#include<iostream>
#include<cstdlib>
using namespace std;

class Node{
public:
    int key;
    int value;
    Node* next;
    Node(){
        key = 0;
        value = 0;
        next = NULL;
    }
    Node(int k, int v){
        key = k;
        value = v;
        next = NULL;
    }
};

class SinglyLinkedList{
public:
    Node *head;
    SinglyLinkedList(){
        head = NULL;
    }
    SinglyLinkedList(Node *n){
        head = n;
    }

    Node* nodeExists(int k){
        Node* temp = NULL;
        Node* ptr = head;

        while (ptr != NULL){
            if(ptr -> key == k)
                temp = ptr;
            ptr = ptr -> next;
        }
        return temp;
    }

    void appendList(Node* n){
        if(nodeExists(n -> key) != NULL){
            cout << "There is already a node with same key : " << n -> key << endl;
        }
        else{
            if(head == NULL){
                head = n;
                cout << "This is the head \n";
            }
            else{
                Node* ptr = head;
                while(ptr -> next != NULL){
                    ptr = ptr -> next;
                }
                ptr -> next = n;
                cout << "This is the next thing \n";
            }
        }
    }

    void prependList(Node* n){
        if(nodeExists(n -> key) != NULL){
            cout << "There is already a node with same key : " << n -> key << endl;
        }
        else{
            //Node* temp = head;
            Node* ptr = n;
            ptr -> next = head;
            head = n;
            cout << "Node preponed! \n";
        }
    }

    void insertNodeAfter(int k, Node* n){
        Node* ptr = nodeExists(k);
        if(ptr == NULL){
            cout << "No node with this key! \n";
        }
        else{
            if(nodeExists(n -> key) != NULL){
                cout << "There is already a node with same key : " << n -> key << endl;
            }
            else{
                n -> next = ptr -> next;
                ptr -> next = n;
                cout << "Node inserted! \n";
            }
        }
    }

    void deleteNodeAfter(int k){
        if(head == NULL){
            cout << "There is nothing to delete! \n";
        }
        else if(head != NULL){
            if(head -> key == k){
                head = head -> next;
                cout << "Node deleted! \n";
            }
            else{
                Node* temp = NULL;
                Node* prevptr = head;
                Node* currentptr = head -> next;
                while(currentptr != NULL){
                    if (currentptr -> key == k){
                        temp = currentptr;
                        currentptr = NULL;
                    }
                    else{
                        prevptr = prevptr -> next;
                        currentptr = currentptr -> next;
                    }
                }
                if(temp != NULL){
                    prevptr -> next = temp -> next;
                    cout << "Node deleted! \n";
                }
                else{
                    cout << "Node does not exist! \n";
                }
            }
        }
    }
    void updateNodeByKey(int k, int d){
        Node* ptr = nodeExists(k);
        if(ptr != NULL){
            ptr -> value = d;
            cout << "Node updated! \n";
        }
        else{
            cout << "Node does not exists! \n";
        }
    }
    void printList(){
        if (head == NULL){
            cout << "No Nodes present to print! \n";
        }
        else{
            Node* ptr = head;
            cout << "The singly Linked list is : \n";
            while(ptr != NULL){
                cout << "(" << ptr -> key << ", " << ptr -> value << ") --> ";
                ptr = ptr -> next;
            }
        }
    }
};

int main(){
    SinglyLinkedList s;
    int n = 6;
    int key1, value1, k1;
    while(n != 0){
        cout << "\n Select one of the option! \n";
        cout << "1. Append \n" << "2. Prepend \n" << "3. Insert \n" << "4. Delete \n" << "5. Update \n" << "6. Print List \n" << "0. To break \n";
        cin >> n;
        Node* node = new Node();
        switch(n){
        case 0:
            break;
        case 1:
            cout << "Enter the node key and value to append \n";
            cin >> key1;
            cin >> value1;
            node -> key = key1;
            node -> value = value1;
            s.appendList(node);
            break;
        case 2:
            cout << "Enter the node key and value to prepend \n";
            cin >> key1;
            cin >> value1;
            node -> key = key1;
            node -> value = value1;
            s.prependList(node);
            break;
        case 3:
            cout << "Enter the node key and value to insert \n";
            cin >> key1;
            cin >> value1;
            node -> key = key1;
            node -> value = value1;
            cout << "Enter the key after which this has to be inserted \n";
            cin >> k1;
            s.insertNodeAfter(k1, node);
            break;
        case 4:
            cout << "Enter the key number of the node to be deleted \n";
            cin >> key1;
            s.deleteNodeAfter(key1);
            break;
        case 5:
            cout << "Enter the key and data to be updated \n";
            cin >> key1;
            cin >> value1;
            s.updateNodeByKey(key1, value1);
            break;
        case 6:
            s.printList();
            break;
        case 7:
            system("cls");
            break;
        default:
            cout << "Enter the proper option \n";
        }
    }
}
