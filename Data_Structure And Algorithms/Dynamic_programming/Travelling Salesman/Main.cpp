#include<iostream>
#define v 4
using namespace std;

int res = 0;
bool Visited[v];



void TSP(int myG[v][v],int sn){

    int Verxtd = -1;
    int min = INT_MAX;

    Visited[sn] = true;
    cout<<sn<<"->";
    
    for(int j = 0;j<v;j++){
        
        if(myG[sn][j] && Visited[j] == false ){

            if(min> myG[sn][j]){
                min = myG[sn][j];
            }

            Verxtd = j;         

        }
    }



    if(min!=INT_MAX){
            res += min;
    }
    


    if(Verxtd == -1){
        cout<< 0;
        res+= myG[sn][0];

        return;
    }   


    TSP(myG,Verxtd);

 }





int main(){


    for(int i = 0;i<v;i++)
    { 
        Visited[i] = false;
    }




  int graph[v][v] = { { 0, 10, 15, 20 },
                       { 10, 0, 35, 25 },
                       { 15, 35, 0, 30 },
                       { 20, 25, 30, 0 } };

    TSP(graph,0);
    cout<<endl;
    cout<<"Cost "<<res<<endl;

    return 0;
}