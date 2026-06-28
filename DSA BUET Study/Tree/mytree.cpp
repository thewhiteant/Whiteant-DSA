#include<iostream>
#include<queue>
using namespace std;

struct Node{

    Node * left;
    Node * right;
    int data;

    Node(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BineryTree{

private:
    Node * root;

public:

    BineryTree() : root(nullptr){}

    void insert(int data);
    void traverse(Node * root);
    void delete_node(int data);
    int lengthcount(Node * root);
    void inorder(){
        traverse(root);
    }

    int counter(){
        return  lengthcount(root);
    }


};



int BineryTree:: lengthcount(Node * root){
    if(!root) return 0;
    return 1+lengthcount(root->left)+lengthcount(root->right);
}


void BineryTree::traverse(Node * root){

    if(!root) return;

    traverse(root->left);
    cout << root->data << " ";
    traverse(root->right);
}

void BineryTree::delete_node( int data){

    queue<Node *>q;
    q.push(root);
    Node * curre;
    while (!q.empty())
    {
        curre = q.front();
        q.pop();


        if(curre->data == data){
            delete(curre);
            curre = nullptr;
            return;
        }

        if(curre->right){
            if(curre->right->data == data){
            delete(curre->right);
            curre->right = nullptr;
            return;
        }


        } q.push(curre->right);

        if(curre->left){

            if(curre->left->data == data){
            delete(curre->left);
            curre->left = nullptr;
            return; }
        
        } q.push(curre->left);

}
}


void BineryTree::insert(int data){

    Node * new_node = new Node(data);

    if(!root){
        root = new_node;
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        Node * current = q.front();
        q.pop();

        if(!current->left){
            current->left = new_node;
            return;
        }else{
            q.push(current->left);
        }

        if(!current->right){
            current->right = new_node;
            return;
        }else{
            q.push(current->right);
        }
    }
}

int main(){

    BineryTree Tree;

    Tree.insert(1);
    Tree.insert(2);
    Tree.insert(3);
    Tree.insert(4);
    Tree.delete_node(3);
    Tree.inorder();


    cout<<"length"<<" "<<Tree.counter();

    


    return 0;
}