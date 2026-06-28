#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class GraphicAdjList{

    private:
        int vertices;
        vector<vector<pair<int,int>>> AdjList;
    public:
        GraphicAdjList(int v): vertices(v){
            AdjList.resize(v);  
        };
        
        void addEdge(int u,int v,int weigh=1){
            AdjList[u].push_back({v,weigh});
            AdjList[v].push_back({u,weigh});
        }

        void AddDirectedEdge(int u,int v,int weight=1){
            AdjList[u].push_back({v,weight});
        }
        

        void display(){
            for(int i = 0; i < vertices; i++){
                cout << i << " -> ";

                for(const auto& edge : AdjList[i]){
                    cout << "(" << edge.first << ", " << edge.second << ") ";
                }

                cout << endl;
            }
        }


    void dfs(int v){
        stack<int> mystack;            
        vector<bool> visited(vertices+1 , false);
        mystack.push(v);
        visited[v] = true;

        while(!mystack.empty()){

            int front = mystack.top();
            cout<<front<<" ";
            mystack.pop();
            
            for ( auto & s : AdjList[front])
            {
                if(!visited[s.first]){
                     mystack.push(s.first);
                     visited[s.first] = true;
                }
            }  
        }
    }

    void dfsHelperStack(int v){
        vector<bool> visited(vertices,false);
        dfsStack(v, visited);
    }

    void dfsStack(int v,vector<bool> &visited){
        visited[v] = true;
        cout<<v<<" ";
        for (auto &s:AdjList[v])
        {
            int neighbor = s.first;
            if(!visited[neighbor]){
                dfsStack(neighbor,visited);
            }
        }
    }

    bool cycleDetect_Basic_visit(int v){
        stack<int> mystack;            
        vector<bool> visited(vertices+1 , false);
        mystack.push(v);
        visited[v] = true;
        
        while(!mystack.empty()){

            int front = mystack.top();
            cout<<front<<" ";
            mystack.pop();
            
            for ( auto & s : AdjList[front])
            {
                if(!visited[s.first]){
                     mystack.push(s.first);
                     visited[s.first] = true;
    
                }else {
                    return true;
                }
            }  
        }

    }
    return  false;
};

int main(){

    GraphicAdjList A(11);
    A.addEdge(1,2);
    A.addEdge(2,3);
    A.addEdge(3,4);
    A.addEdge(4,5);
    A.addEdge(5,6);
    A.addEdge(6,7);
    A.addEdge(8,9);
    A.addEdge(10,1);
    A.display();
    cout<<endl;
    A.dfs(2);
    cout<<endl;
    A.dfsHelperStack(2);
    cout<<endl;


    return 0;
}