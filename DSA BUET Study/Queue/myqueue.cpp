#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
};

class Queue
{
    private:
        Node* front;
        Node* rear;
        int size;

    public:
        Queue(): front(nullptr), rear(nullptr) ,size(0) {};
        void enqueue(int data);
        int dequeue();
        bool isEmpty();
        int get_size();

};

void Queue::enqueue(int data){
    Node *new_node = new Node(data);
     
    if(size==0){
         front = rear =  new_node;
        }
    else{
        rear->next = new_node;
        rear = new_node;
    }
    size++;
}


int Queue::dequeue(){
    
    if (size==0)
    {
        cout<<" No Item Exist to return";
        return -1;
    }
    
    Node * temp = front;
    int data = temp->data;
    front = front->next;

    if (front == nullptr)
    {
        rear = nullptr;
    }
    delete temp;
    size--;
    return data;
}


int Queue::get_size(){
        return size;
}


int main()
{
  
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();   
    cout<<q.get_size();





    return 0;
}