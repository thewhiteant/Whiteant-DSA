#include<iostream>
using namespace std;


struct Node{

    int data;
    Node * next;
    
    Node(int data): data(data),next(nullptr){}
};

class LinkedList{

    public:
        Node *head;
        LinkedList(): head(nullptr){};


    void insetBegining(int data){
            if (!head) 
            head =  new Node(data);
            else{
            Node * nnode = new Node(data);            
            nnode->next = head;
            head = nnode;
    }
}
    
    void AddMid(int data,int index){
        if(index == 0) insetBegining(data);
        else{
        Node * nnode = new Node(data);
        Node *traversal = head;
        for (int i = 1; i < index; i++)
        {   
            traversal=traversal->next;
        }
        
        Node * hold = traversal->next;
        traversal->next = nnode;
        nnode->next = hold;
        }
    }

    void PrintAllNodes(){
        Node * treverser = head;
        while(treverser!=nullptr){
            cout<<treverser->data<<" ";
            treverser = treverser->next;
     }
        }


    void reverseLL(){
        Node * prev = nullptr;
        Node * curr = head;
        Node * next = nullptr;

        while(curr!=nullptr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;

    }


        void makeLoop(int fromPos, int toPos){

        Node *fromNode = head;
        Node *toNode = head;

        for(int i = 0; i < fromPos && fromNode; i++)
            fromNode = fromNode->next;

        for(int i = 0; i < toPos && toNode; i++)
            toNode = toNode->next;

        if(!fromNode || !toNode){
            cout << "Invalid Position\n";
            return;
        }

        fromNode->next = toNode;

        cout << "Loop created: Position "
             << fromPos << " -> Position "
             << toPos << endl;
    }

    bool CycleDetect(){
        Node  * slow = head;
        Node * fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;

            if(fast == slow){
                return true;
            }

        }

        return false;
    }

    void RR(){
        head = RecusiveReverse(head);
    }

    Node *  RecusiveReverse(Node * headd){
            if (headd == nullptr || headd->next == nullptr) 
                return headd;

            Node * nnode = RecusiveReverse(headd->next);

            headd->next->next = headd;
            headd -> next = NULL; 

            return nnode;
    }


    Node * findMid(Node * root){
        Node * slow = root;
        Node * fast = root;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;

    }


};

int main(){

    LinkedList A;
    A.insetBegining(1);
    A.insetBegining(2);
    A.insetBegining(3);
    A.AddMid(10,2);
    A.AddMid(20,4);
    A.PrintAllNodes();
    // A.reverseLL();
    A.RR();
    cout<<endl;
    A.PrintAllNodes();
    // A.makeLoop(4,2);
    
    cout<<"Cycle Found: ";
    if(A.CycleDetect()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}