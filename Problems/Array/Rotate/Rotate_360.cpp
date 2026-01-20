#include<iostream>
#include<vector>
using namespace std;

  

    void rot(int arr[],int n,int d){
        for(int l = 0;l<d;l++){
        int k = arr[0];
        for(int i = 0;i<n;i++){
            arr[i] = arr[i+1];
        }
        arr[n-1] = k;
    }
    }


int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int  d = 3;

    rot(arr,7,d);

    for(int i =0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    



    
    return 0;
}