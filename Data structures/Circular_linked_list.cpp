#include<iostream>
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
    }
};

class CircularLinkedList{
public:
    Node* head;

    CircularLinkedList(){
        head = NULL;
    }

    CircularLinkedList(Node* n){
        head = n;
    }

    Node* nodeExist(int k){
        Node* ptr = head;
        Node* temp = NULL;
        if(head == NULL){
            temp = NULL;
        }
        else{
            do{
                if(ptr->key == k){
                    temp = ptr;
                }
                ptr = ptr->next;
            }while(ptr != head);
        }
        return temp;
    }

    void appendNode(Node* n){
        if(nodeExist(n->key) != NULL){
            cout << "The node already exists! \n";
        }
        else{
            if(head == NULL){
                head = n;
                head->next = head;
                cout << "Node appended as head! \n";
            }
            else{
                Node* ptr = head;
                Node* temp = head;
                while(temp != NULL){
                    if(ptr->next == head){
                        if(head->next == head){
                            head->next = n;
                            n->next = head;
                            temp = NULL;
                            cout << "Node appended to the list! -After head- \n";
                        }
                        else{
                            n->next = head;
                            ptr->next = n;
                            temp = NULL;
                            cout << "Node appended to the list! -Before head- \n";
                        }
                    }
                    ptr = ptr->next;
                }
            }
        }
    }

    void prependNode(Node* n){
        if(nodeExist(n->key) != NULL){
            cout << "There is already a node with same key! \n";
        }
        else{
            if(head == NULL){
                head = n;
                head->next = head;
                cout << "Node is prepended as head node! \n";
            }
            else{
                Node* ptr = head;
                do{
                    if(ptr->next == head){
                        Node* temp = head;
                        n->next = head;
                        head = n;
                        ptr->next = head;
                    }
                    ptr = ptr->next;
                }while(ptr != head);
                cout << "Node Prependede to the list! \n";
            }
        }
    }

    void insertNode(int k, Node* n){
        Node* ptr = nodeExist(k);
        if(ptr == NULL){
            cout << "The node with the key is not present in the list! \n";
        }
        else{
            if(nodeExist(n->key) != NULL){
                cout << "The Node already exist and cannot be inserted! \n";
            }
            else{
                if(ptr->next == head){
                    n->next = head;
                    ptr->next = n;
                }
                else{
                    Node* temp = ptr->next;
                    n->next = temp;
                    ptr->next = n;
                    cout << "Node inserted into the list! \n";
                }
            }
        }
    }

    void deleteNode(int k){
        Node* ptr = nodeExist(k);
        if(ptr == NULL){
            cout << "The node is not present in the list! \n";
        }
        else{
            if(ptr == head){
                while(ptr != NULL){
                    if(ptr->next == head){
                        ptr->next = head->next;
                        ptr = NULL;
                    }
                    ptr = ptr->next;
                }
                cout << "Node is a head node and is deleted from the list! \n";
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
    void updateNode(int k, int v){
        Node* ptr = nodeExist(k);
        if(ptr == NULL) {
            cout << "There is no Node with this key! \n";
        }
        else{
            ptr->value = v;
            cout << "The node has been updated! \n";
        }
    }
    void printNode(){
        if(head == NULL){
            cout << "There is nothing to print! \n";
        }
        else{
            cout << "The circular linked list is : ";
            Node* ptr = head;
            cout << "(" << ptr->key << ", " << ptr->value << ") --> ";
            do{
                ptr = ptr->next;
                cout << "(" << ptr->key << ", " << ptr->value << ") --> ";
            }while(ptr->next != head);
        }
    }
};

int main(){
    CircularLinkedList c;
    int n = 6;
    int key1, value1, k1;
    while(n != 0){
        cout << "\n Select one of the option! \n";
        cout << "1. Append \n" << "2. Prepend \n" << "3. Insert \n" << "4. Delete \n" << "5. Update \n" << "6. Print List \n" << "7. Clear" << "0. To break \n";
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
            c.appendNode(node);
            break;
        case 2:
            cout << "Enter the node key and value to prepend \n";
            cin >> key1;
            cin >> value1;
            node -> key = key1;
            node -> value = value1;
            c.prependNode(node);
            break;
        case 3:
            cout << "Enter the node key and value to insert \n";
            cin >> key1;
            cin >> value1;
            node -> key = key1;
            node -> value = value1;
            cout << "Enter the key after which this has to be inserted \n";
            cin >> k1;
            c.insertNode(k1, node);
            break;
        case 4:
            cout << "Enter the key number of the node to be deleted \n";
            cin >> key1;
            c.deleteNode(key1);
            break;
        case 5:
            cout << "Enter the key and data to be updated \n";
            cin >> key1;
            cin >> value1;
            c.updateNode(key1, value1);
            break;
        case 6:
            c.printNode();
            break;
        case 7:
            system("cls");
            break;
        default:
            cout << "Enter the proper option \n";
        }
    }
}
