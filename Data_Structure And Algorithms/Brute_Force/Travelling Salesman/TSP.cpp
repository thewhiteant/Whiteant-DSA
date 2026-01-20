#include<iostream>
#include<vector>
#define v 5
using namespace std;


    bool visited[v];
    int Cost=0;
    vector<int> result;

void TSP(int arr[v][v],int start){

    int VRTX = -1;
    int Min_val = INT_MAX;


    visited[start] = true;
    result.push_back(start+1);

    for(int i =0;i<v;i++){

        if(visited[i] == false && arr[start][i]){

            if(arr[start][i]< Min_val)
             Min_val  = arr[start][i];

            VRTX = i;
        }

    }        
        if(Min_val!=INT_MAX) Cost+=Min_val;

        if(VRTX!=-1){
            result.push_back(0);
            Cost+= arr[start][0];
            return;
        }


    
    TSP(arr,VRTX);

    
}


int main(){
       

        for(int i =0;i<v;i++){
            visited[i] = false;
        }



int tsp_g[v][v] = {
   {12, 30, 33, 10, 45},
   {56, 22, 9, 15, 18},
   {29, 13, 8, 5, 12},
   {33, 28, 16, 10, 3},
   {1, 4, 30, 24, 20}
};


        TSP(tsp_g,0);

        cout<<"Cost "<<Cost<<endl;
        for(int i = 0;i<v;i++){
            cout<<result[i]<<" ";
        }


return 0;
    
}