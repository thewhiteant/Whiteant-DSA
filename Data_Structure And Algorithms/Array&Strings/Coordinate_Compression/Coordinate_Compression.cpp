#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;


void Coodinate_Compression(int arr[],int n){

    unordered_map<int,int> unmap;

    int temp[n+1];
    memcpy(temp,arr,n*sizeof(int));
    sort(temp,temp+n);
    int value = 0;
    for (int i = 0; i < n; i++)
    {
        unmap[temp[i]] = value++;
    }
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = unmap[arr[i]];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    
}


int  main(){

    int arr[7] = {100,2,3,5,4,6};
    int n = 6;
    Coodinate_Compression(arr,n);

    return 0;
}