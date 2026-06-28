#include<iostream>
#include<vector>
using namespace std;

class HeapTree{

    private:
    vector<int> heap;

    int parent(int idex) {return (idex-1)/2;}
    int lefchild(int index){return 2*index+1;}
    int rightchild(int index){return 2*index+2;}

    void bubbleUp(int index);
    void bubbleDown(int index);

    public:

    void insert(int value);
    void heapify(vector<int> &arr);
    void display();
    int extractMax();
};


void HeapTree::bubbleUp(int index){
    while (index>0)
    {
        int parentIndx = parent(index);

        if(heap[index]>heap[parentIndx]){
            swap(heap[index],heap[parentIndx]);
            index = parentIndx;
        }else{
            break;
        }
    }    
}

void HeapTree::insert(int value){
    heap.push_back(value);
    bubbleUp(heap.size()-1);
}

void HeapTree::bubbleDown(int index){
    while(true){
        int largest = index;
        int left = lefchild(index);
        int right = right(index);

        if(left < heap.size() && heap[left] > heap[largest] ){
            largest = left;
        }

        if(right<heap.size() && heap[right] > heap[largest]){
            largest = right;
        }  

        if(largest != index){
            swap(heap[index],heap[largest]);
            index = largest;
        }  else{
            break;
        }
    }
}

int HeapTree::extractMax(){

    if(heap.empty()) throw  underflow_error("Heap is empty");

    int max = heap[0];
    heap[0] = heap.back();
    heap.pop_back();

    if(!heap.empty()){
        bubbleDown(0);
    }

    return  max;
}


int main(){


    return 0;
}