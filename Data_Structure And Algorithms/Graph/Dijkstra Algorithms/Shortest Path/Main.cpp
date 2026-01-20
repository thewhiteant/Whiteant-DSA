#include <iostream>
#include <vector>
#define Vertices 6
using namespace std;


int PQ(int arr[],bool visited[]){

    int Res = INT_MAX;
    int Index_holder;
    for(int i =0;i<Vertices;i++){

        if(arr[i]<Res && !visited[i]){
            Res = arr[i];
            Index_holder = i;
        }


    }

    return Index_holder;
}

void Dijkstra(int Graph[Vertices][Vertices], int starting){
    
    int Output_Array [Vertices];
    bool Visited[Vertices];

    for(int i =0;i<Vertices;i++){
        Visited[i] = false ;
        Output_Array[i] = INT_MAX;
    }

    Output_Array[starting] = 0;


    for(int i =0;i<Vertices;i++){

        int oldd = PQ(Output_Array,Visited);
        Visited[oldd] = true;
        for(int newd = 0; newd<Vertices; newd++){

            if(!Visited[newd] && Graph[oldd][newd] && Output_Array[oldd] != INT_MAX && Output_Array[oldd] + Graph[oldd][newd] < Output_Array[newd] )
            Output_Array[newd] = Output_Array[oldd] + Graph[oldd][newd];                        

        }

    }


    for(int i = 0;i<Vertices;i++){
        cout<<"0 to "<<i<<" distance :" <<Output_Array[i]<<endl;
    }

}


int main(){
   

int G[Vertices][Vertices] = {
    {0,0,0,5,9,0},
    {0,0,0,6,0,7},
    {0,0,0,0,1,3},
    {5,6,0,0,0,0},
    {9,0,1,0,0,2},
    {0,7,3,0,2,0}
};

Dijkstra(G,0);



    return 0;
}