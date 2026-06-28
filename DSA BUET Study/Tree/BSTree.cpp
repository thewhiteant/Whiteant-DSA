#include<iostream>
using namespace std;

struct BSTNode{
    int data;
    BSTNode * left;
    BSTNode * right;

    BSTNode(int data):data(data),left(nullptr),right(nullptr){}
};


class BST{
    private:
    BSTNode * root;    
    public:

    BST(): root(nullptr){}
    BSTNode*  insertBST(BSTNode* root, int data);
    bool search(BSTNode* root,int data);
    void inOrder();
    void insert(int data){
       root = insertBST(root,data);
    }
    bool SearchItem(int data){
        return search(root,data);
    }
    BSTNode * minnode(BSTNode * root);
    BSTNode * MinNode(){
        return minnode(root);
     }

    BSTNode * deleteNode(BSTNode*root,int data);
    void DeleteNode(int data){
       root =  deleteNode(root,data);
    }

};


BSTNode * BST::deleteNode(BSTNode*root, int data){

    if(!root) return nullptr;

    if(root->data > data)
        root->left = deleteNode(root->left,data);
    else if(root->data< data) 
        root->right = deleteNode(root->right,data);
    else{
        //leaf node 
        if(!root->left&& !root->right) {

            delete root;
            return nullptr;

        }

        //One node

        if(!root->left){
            BSTNode * temp = root->right;
            delete root;
            return temp;

        }

        if(!root->right){
            BSTNode * temp = root->left;
            delete root;
            return temp;
        }

        //Multiple nodes or substree

        BSTNode * replaces = minnode(root->right);
        root->data = replaces->data;
        root->right = deleteNode(root->right,replaces->data);

    }
    return root;

}   



BSTNode * BST::minnode(BSTNode* root){
    if(!root) return nullptr;

    while(root->left){
        root = root->left;
    }

    return root;

}


bool BST::search(BSTNode* root,int data){
    if(!root)  return false;
    if(root->data==data) return true;
    else if(root->data>data) return search(root->left,data);
    return search(root->right,data);
}


BSTNode* BST::insertBST(BSTNode*root, int data){
    if(!root){ 
        return new  BSTNode(data);
    }
    if(root->data > data){
       root->left =  insertBST(root->left,data);    

    }else if(root->data<data){
         root->right = insertBST(root->right,data);
    }
    return root;
}






int main(){

    cout<<"Treee"<<endl;
    BST s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(50);
    if(s.SearchItem(30)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    s.DeleteNode(30);
    if(s.SearchItem(30)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}