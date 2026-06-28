#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = nullptr;
    }
};

class Stack{

    private:
    Node* top;
    int size;

    public:
    Stack(){
        top = nullptr;
        size = 0;
    }

    void push(int data);
    int pop();
    int peek();
    bool isEmpty();
    int getSize();


};

void Stack::push(int data){
    Node* nnode = new Node(data);
    nnode->next = top;
    top = nnode;   
    size++;

}


int Stack::pop(){
    if(isEmpty()){
        return -1;
    }

    int data = top->data;
    Node* temp = top;
    top = top->next;
    delete temp;
    size--;
    return data;

}

int Stack::peek(){
    if(isEmpty()){
        return -1;
    }
   return top->data;
}

bool Stack::isEmpty(){
    return size == 0;
}

int main(){


    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.isEmpty()<<endl;
    



    return 0;
}