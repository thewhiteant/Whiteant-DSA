#include<iostream>
using namespace std;


int PS[100];

void prefixSUm(int arr[],int n){
    PS[0] = arr[0];
    for(int i = 1;i<n;i++){   
        PS[i] = arr[i] + PS[i-1];
    }
}

int RQ(int s,int e){

    if(s==0) return PS[e];
    return (PS[e] - PS[s-1]); 
}


int main(){
    
    int arr[] = {1,2,3,4,5};
    int n = 5;
    prefixSUm(arr,n);
    cout<<"Range: ";
    int k;
    cin>>k;
    for(int i = 0 ;i<k;i++)
    {

        int a,b;
        cout<<"A - B: ";
        cin>>a>>b;
        cout<<RQ(a,b)<<endl;
    }
}

