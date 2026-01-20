#include<iostream>
#define  v 5
using namespace std;



int PQ(int arr[v], bool visited[v]){
    int Mn = INT_MAX;
    int INdex_holder = 0;
    for(int i =0;i<v;i++){
        if(!visited[i] && arr[i]<Mn){
            Mn = arr[i];
            INdex_holder = i;
        }
    }

    return INdex_holder;

}
 
void prims(int arr[v][v],int sr){

  
    int store[v];
    bool visited[v];
    int output[v];

    for(int i=0;i<v;i++){
        visited[i] = false;
        store[i] = INT_MAX;
    }
    
    store[sr] = 0;
    output[sr] = -1;
    
    for(int l = 0;l<v;l++){

        int u = PQ(store,visited);
        visited[u] = true;
        
        for(int k=0;k<v;k++){

            if(!visited[k]&& arr[u][k]&& store[k] > arr[u][k]){
                store[k] = arr[u][k];
                output[k] = u;
                
            }
            
        }

    }


    cout <<"SHortest paths :";
    for(int i =0;i<v;i++)
    cout<<store[i]<<" ";
    

}


int main(){

int graph[v][v] = { { 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 } 
                };
prims(graph,0);

    return 0;
}