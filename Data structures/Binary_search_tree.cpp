#include<iostream>
#define SPACE 10
using namespace std;

class Node{
public:
    int value;
    Node* right;
    Node* left;

    Node(){
        value = 0;
        right = NULL;
        left = NULL;
    }

    Node(int v){
        value = v;
        cout << "Value assigned \n";
        right = NULL;
        left = NULL;
    }
};

class BST{
public:
    Node* root = NULL;

    bool isEmpty(){
        if(root == NULL){
            return true;
        }
        else
            return false;
    }

    void insertNode(Node* n){
        if(isEmpty()){
            cout << "No tree present! \n";
            root = n;
            cout << "This is the root node! \n";
        }
        else{
            Node* temp = root;
            while(temp != NULL){
                if(temp->value == n->value){
                    cout << "The values should not be same! \n";
                    temp = NULL;
                }
                else if((n->value < temp->value) && (temp->left == NULL)){
                    temp->left = n;
                    temp = NULL;
                    cout << "Inserted node in left! \n";
                }
                else if(n->value < temp->value){
                    temp = temp->left;
                    cout << "Traversed to left! \n";
                }
                else if((n->value > temp->value) && (temp->right == NULL)){
                    temp->right = n;
                    temp = NULL;
                    cout << "Inserted node in right! \n";
                }
                else if(n->value > temp->value){
                    temp = temp->right;
                    cout << "Traversed to right! \n";
                }
                else{
                    cout << "Something went wrong! \n";
                }
            }
        }
    }

    void preOrder(Node* n){
        if(n == NULL){
            return;
        }
        else{
            cout << n->value << " " ;
            preOrder(n->left);
            preOrder(n->right);
        }
    }

    void inOrder(Node* n){
        if(n == NULL){
            return;
        }
        else{
            inOrder(n->left);
            cout << n->value << " ";
            inOrder(n->right);
        }
    }

    void revesreInOrder(Node* n){
        if(n == NULL){
            return;
        }
        else{
            revesreInOrder(n->right);
            cout << n->value << " ";
            revesreInOrder(n->left);
        }
    }

    void postOrder(Node* n){
        if(n == NULL){
            return;
        }
        else{
            inOrder(n->left);
            inOrder(n->right);
            cout << n->value << " ";
        }
    }

    void print2D(Node * r, int space) {
        if (r == NULL) // Base case  1
          return;
        space += SPACE; // Increase distance between levels   2
        print2D(r -> right, space); // Process right child first 3
        cout << endl;
        for (int i = SPACE; i < space; i++) // 5
          cout << " "; // 5.1
        cout << r -> value << "\n"; // 6
        print2D(r -> left, space); // Process left child  7
    }
};

int main(){
    //Node n(10), ;
    BST b;
    //b.insertNode(&n);
    int q = 0;
    int m;
    while(m != 0){
        Node* n = new Node();
        cout << "Enter the choice! \n";
        cin >> q;
        if(q == 0){
            cout << "Enter the value! \n";
            cin >> m;
            n->value = m;
            b.insertNode(n);
            cout << "Inserted! \n";
        }
        else if(q == 1){
            cout << "preOrder! \n";
            b.preOrder(b.root);
        }
        else if(q == 2){
            cout << "inOrder! \n";
            b.inOrder(b.root);
        }
        else if(q == 3){
            cout << "postOrder! \n";
            b.postOrder(b.root);
        }
        else if(q == 4){
            cout << "reverseInOrder! \n";
            b.revesreInOrder(b.root);
        }
        else if(q == 5){
            b.print2D(b.root, 5);
        }
    }

    /*b.insertNode(n(1));
    b.insertNode(n(8));
    b.insertNode(n(6));
    b.insertNode(n(4));
    b.insertNode(n(15));*/
}
