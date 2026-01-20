#include<iostream>
#include<vector>
using namespace std;


void hipify(vector<int> &mp,int i){

    int size = mp.size();

    int parent = i;
    int left = 2*i+1;
    int rigt = 2*i+2;

    if(left<size && mp[parent]<mp[left]){
        parent = left;
    }
    if(rigt<size && mp[parent]<mp[rigt]){
        parent = rigt;
    }


    if(parent!=i){

        swap(mp[parent],mp[i]);
        hipify(mp,parent);

    }

}

void insertion(vector<int> &mp,int element){

    int lng = mp.size();

    if(lng==0) mp.push_back(element);
    else{

        mp.push_back(element);

        for (int i = lng/2 -1; i >=0; i--) 
        {
            hipify(mp,i);
        }     
    }

}



void printAll(vector<int> ok){
    
    for (int i = 0; i < ok.size(); i++)
    {
            cout<<ok[i]<<" ";
    }


}


int main(){

    vector<int> HeapMap;
    insertion(HeapMap,1);
    insertion(HeapMap,2);
    insertion(HeapMap,3);
    insertion(HeapMap,4);
    insertion(HeapMap,5);
    insertion(HeapMap,6);
    insertion(HeapMap,7);
    insertion(HeapMap,8);
    insertion(HeapMap,9);
    insertion(HeapMap,10);
    printAll(HeapMap);



 

return 0;

}





















