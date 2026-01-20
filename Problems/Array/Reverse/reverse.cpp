#include<iostream>
#include<vector>
using namespace std;

  

    void reverse(int arr[],int n){
        for(int i = 0,j = n-1;i<j;i++,j--){
            swap(arr[i],arr[j]);
        }
        
    }


int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int  d = 3;

    reverse(arr,7);

    for(int i =0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    



    
    return 0;
}