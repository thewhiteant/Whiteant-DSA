#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int n = 100000;
const int k = 17;
int ST [k][n];
void build_St(int arr[],int p){
    for(int i = 0;i<=p;i++){
        ST[0][i] = arr[i];
    }    
    for(int i=1 ; (1<<i)<=p;i++){
        for(int j = 0;(j+(1<<i)-1)<p;j++)
            ST[i][j] = min(ST[i-1][j],ST[i-1][j+(1<<(i-1))]);
    }

}


int RQ(int L,int R){
    int i = log2(R-L+1);
    return min(ST[i][L],ST[i][R-(1<<i)+1]);

}   

int main(){
    int p;
    cin>>p;
    int arr[p];
    for(int i =0;i<p;i++)
        cin>>arr[i];


    build_St(arr,p);
    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        cout<<RQ(a,b)<<endl;
    
    }

    

    return 0;
}