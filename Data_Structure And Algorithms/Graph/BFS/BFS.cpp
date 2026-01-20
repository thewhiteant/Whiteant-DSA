#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

vector<vector<int>> graph(10000);

void bfs(int starting,int n){
        
        vector<bool> visisted(n,false);
        queue<int> myqueue;
        vector<int> deep(n),parent(n);

        cout<<"BFS: ";
        myqueue.push(starting);
        visisted[starting] = true;
        parent[starting] = -1;
        while(!myqueue.empty()){
            int collected = myqueue.front();
            myqueue.pop();
             cout<<collected<<" ";
            for(int x:graph[collected]){
                if(!visisted[x]){
                    visisted[x]= true;
                    myqueue.push(x);
                    deep[x] = deep[collected] + 1;
                    parent[x] = collected;
                }
            }
        }

    cout<<endl;
    for(int i=0;i<parent.size();i++){
        cout<<i<<" Parent is "<<parent[i]<<endl;
    }
    cout<<endl;

    cout<<endl;
    for(int i=0;i<deep.size();i++){
        cout<<" 0-"<<i<<" edge gap between them is "<<deep[i]<<endl;
    }
    cout<<endl;
}

int main(){


    int n,s;
    cout<<"Vertex: ";
    cin>>n;
    cout<<"Number of Edge: ";
    int edge;
    cin>>edge;
    for(int i = 0;i<edge;i++){
        int u,v;
        cout<<"Connected u-v: ";
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);    
    }

    cout<<"Starting Node: ";
    cin>>s;
    bfs(s,n);
    

    return 0;
}