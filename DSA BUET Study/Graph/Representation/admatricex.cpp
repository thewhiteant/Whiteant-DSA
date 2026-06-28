#include<iostream>
#include<vector>
using namespace std;


class GraphAdjacencyMatrix{

    private:    
        int vertices;
        vector<vector<int>> matrix;
    public:
    GraphAdjacencyMatrix(int v): vertices(v){
        matrix.assign(v,vector<int>(v,0));
    };

    void addEdge(int u,int v,int weight = 1){
        matrix[u][v] = weight;
        matrix[v][u] = weight;
    }

    void AddDirectedEdge(int u,int v,int weight=1){
         matrix[u][v] = weight;
    }

    bool hasedge(int u,int v){
        return matrix[u][v] != 0;
    }

    int getWeight(int u,int v){
        return matrix[u][u];
        }

    vector<int> getNeighbors(int u){
        vector<int> neigbors;
        for (int v = 0; v < vertices; v++)
        {
            if(matrix[u][v] != 0){
                neigbors.push_back(v);
            }
        }   
        return neigbors;
    }   

    void display(){
        for(int i = 0;i<vertices;i++){
            for (int j = 0; j < vertices; j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }

    }

};

int main(){

    GraphAdjacencyMatrix A(11);
    A.addEdge(1,2);
    A.addEdge(3,4);
    A.addEdge(4,5);
    A.addEdge(5,6);
    A.addEdge(6,7);
    A.addEdge(8,9);
    A.addEdge(10,1);
    
    vector<int> result = A.getNeighbors(4);
    for (int i = 0; i <result.size(); i++)
    {
        cout<<result[i]<<" ";
    }

    cout<<"Has EDGE:"<<A.hasedge(1,7)<<endl;
    
    // A.display();
    

    return 0;
}