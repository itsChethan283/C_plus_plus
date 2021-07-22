#include<iostream>
#include<cstdlib>
using namespace std;

class Node{
public:
    int key;
    int value;
    Node* next;
    Node* prev;

    Node(){
        key = 0;
        value = 0;
        next = NULL;
        prev = NULL;
    }
    Node(int k, int v){
        key = k;
        value = v;
    }
};

class DoublyLinkedList{
public:
    Node* head;

    DoublyLinkedList(){
        head = NULL;
    }
    DoublyLinkedList(Node* node){
        head = node;
        //cout << "This is the head Node! \n";
    }

    Node* nodeExists(int k){
        Node* temp = NULL;
        Node* ptr = head;
        while(ptr != NULL){
            if(ptr->key == k){
                temp = ptr;
            }
            ptr = ptr->next;
        }
        return temp;
    }

    void appendNode(Node* n){
        cout << "This is appending a node! \n";
        if(nodeExists(n->key) != NULL){
            cout << "There is already a node with same key! \n";
        }
        else{
            if(head == NULL){
                head = n;
                cout << "This node is the head! \n";
            }
            else{
                Node* ptr = head;
                while(ptr->next != NULL){
                    ptr = ptr->next;
                }
                ptr->next = n;
                n->prev = ptr;
                cout << "The node has been appended in the list! \n";
            }
        }
    }

    void prependNode(Node* n){
        if(nodeExists(n->key) != NULL){
            cout << "There is already a node with same key! \n";
        }
        else{
            if(head == NULL){
                head = n;
                cout << "The is prepended! \n";
            }
            else{
                head->prev = n; //Node* ptr = head;
                //n->prev = NULL;
                n->next = head;
                //ptr->prev = n;
                head = n;
                cout << "Node has been prepended in the list! \n";
            }
        }
    }

    void insertNode(int k, Node* n){
        Node* ptr1 = nodeExists(k);
        if(ptr1 == NULL){
            cout << "Node with the key is not there in the list! \n";
        }
        else{
            if(nodeExists(n->key) != NULL){
                cout << "There is already a node with a same key! \n";
            }
            else{
                Node* temp = ptr1->next;
                if(temp->next == NULL){
                    ptr1->next = n;
                    n->prev = ptr1;
                    cout << "Node inserted at end! \n";
                }
                n->next = temp;
                temp->prev = n;
                n->prev = ptr1;
                ptr1->next = n;
                cout << "The Node has been inserted in the List! \n";
            }
        }
    }

    void deleteNode(int k){
        Node* ptr1;
        ptr1 = nodeExists(k);
        if(ptr1 == NULL){
            cout << "The node is not there in the list! \n";
        }
        else{
            if(head->key == k){
                head = head->next;
                cout << "The head node removed form the list! \n";
            }
            else{
                //Node* temp = NULL;
                /*Node* preptr = head;
                Node* currentptr = head->next;
                while(currentptr != NULL){
                    if(currentptr->key == k){
                        temp = currentptr;
                        currentptr = NULL;
                    }
                    else{
                        preptr = preptr->next;
                        currentptr = currentptr->next;
                    }
                }
                if(temp != NULL){
                    Node* nextis = temp->next;
                    preptr->next = temp->next;
                    nextis->prev = preptr;
                    cout << "Node removed from the list! \n";
                }
                else{
                    cout << "Node doesn't ptr1! \n";
                }*/
                Node* nextNode = ptr1->next;
                Node* prevNode = ptr1->prev;
                if(nextNode == NULL){
                    prevNode->next = NULL;
                    cout << "Node deleted at the end! \n";
                }
                else{
                    nextNode->prev = prevNode;
                    prevNode->next = nextNode;
                    cout << "Node deleted inbetween! \n";
                }
            }
        }
    }

    void updateNode(int k, int v){
        Node* ptr1;
        ptr1 = nodeExists(k);
        if(ptr1 != NULL){
            ptr1->value = v;
            cout << "Node updated with new value! \n";
        }
        else{
            cout << "Node does not ptr1 in the list! \n";
        }
    }

    void printList(){
        if(head == NULL){
            cout << "The list is empty! \n";
        }
        else{
            Node* ptr = head;
            cout << "The Doubly Linked List is : ";
            while(ptr != NULL){
                cout << " <--> (" << ptr->key << ", " << ptr->value << ")";
                ptr = ptr->next;
            }
        }
    }
};

int main(){
    DoublyLinkedList d;
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
            d.appendNode(node);
            break;
        case 2:
            cout << "Enter the node key and value to prepend \n";
            cin >> key1;
            cin >> value1;
            node -> key = key1;
            node -> value = value1;
            d.prependNode(node);
            break;
        case 3:
            cout << "Enter the node key and value to insert \n";
            cin >> key1;
            cin >> value1;
            node -> key = key1;
            node -> value = value1;
            cout << "Enter the key after which this has to be inserted \n";
            cin >> k1;
            d.insertNode(k1, node);
            break;
        case 4:
            cout << "Enter the key number of the node to be deleted \n";
            cin >> key1;
            d.deleteNode(key1);
            break;
        case 5:
            cout << "Enter the key and data to be updated \n";
            cin >> key1;
            cin >> value1;
            d.updateNode(key1, value1);
            break;
        case 6:
            d.printList();
            break;
        case 7:
            system("cls");
            break;
        default:
            cout << "Enter the proper option \n";
        }
        cout << "Nothing";
    }
}
