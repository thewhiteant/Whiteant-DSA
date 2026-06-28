#include<iostream>
using namespace std;

struct Node{

    int data;
    Node *left;
    Node *right;
    int height;

    Node(int data)
        : data(data), left(nullptr), right(nullptr), height(1) {}
};

class AVLTree{

    Node *root;

public:

    AVLTree(): root(nullptr) {}

    Node* insert(Node *node, int data);

    bool search(Node *node, int data);

    void insertAVL(int data){
        root = insert(root, data);
    }

    bool searchAVL(int data){
        return search(root, data);
    }

    Node * dltNode(Node * node,int data);
    void deleteNode(int data){
        root = dltNode(root,data);
    }

    bool searchAVL(int data){
        return search(root,data);
    }

};



int getHeight(Node *node){
    return node ? node->height : 0;
}

int getBalance(Node *node){
    return node ?
           getHeight(node->left) - getHeight(node->right)
           : 0;
}

void updateHeight(Node *node){

    if(node){

        node->height =
            1 + max(getHeight(node->left),
                    getHeight(node->right));
    }
}

Node* rotateRight(Node *y){

    Node *x = y->left;
    Node *extra = x->right;

    // Rotation
    x->right = y;
    y->left = extra;

    // Update heights
    updateHeight(y);
    updateHeight(x);

    return x;
}

Node* rotateLeft(Node *x){

    Node *y = x->right;
    Node *extra = y->left;

    // Rotation
    y->left = x;
    x->right = extra;

    // Update heights
    updateHeight(x);
    updateHeight(y);

    return y;
}

Node* AVLTree::insert(Node *node, int data){

    // Normal BST insertion
    if(!node)
        return new Node(data);

    if(data < node->data){

        node->left = insert(node->left, data);

    }else if(data > node->data){

        node->right = insert(node->right, data);

    }else{

        // Duplicate not allowed
        return node;
    }

    // Update height
    updateHeight(node);

    // Get balance factor
    int balance = getBalance(node);

    // LEFT LEFT (LL)
    if(balance > 1 && data < node->left->data){

        return rotateRight(node);
    }

    // RIGHT RIGHT (RR)
    if(balance < -1 && data > node->right->data){

        return rotateLeft(node);
    }

    // LEFT RIGHT (LR)
    if(balance > 1 && data > node->left->data){

        node->left = rotateLeft(node->left);

        return rotateRight(node);
    }

    // RIGHT LEFT (RL)
    if(balance < -1 && data < node->right->data){

        node->right = rotateRight(node->right);

        return rotateLeft(node);
    }

    return node;
}

bool AVLTree::search(Node *node, int data){

    if(!node)
        return false;

    if(data < node->data){

        return search(node->left, data);

    }else if(data > node->data){

        return search(node->right, data);
    }

    return true;
}

Node * AVLTree::dltNode(Node * node,int data){

        if(!node) return nullptr;

        if(node->data>data){
            node->left = dltNode(node->left,data);
        }else if(node->data<data)
            node->right =  dltNode(node->right,data);
        else{
            //no children

            if(!node->left&& !node->right){
                delete node;
                return nullptr;
            }
            //one node 

            if(!node->right){
                Node * temp = node->left;
                delete node;
                return temp;
            }


            if(!node->left){
                Node * temp = node->right;
                delete node;
                return temp;
            }




        }

        return node;

}




int main(){

    AVLTree tree;

    tree.insertAVL(10);
    tree.insertAVL(20);
    tree.insertAVL(243);
    tree.insertAVL(30);
    tree.deleteNode(30);

    if(tree.searchAVL(30))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}