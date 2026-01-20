#include<iostream>
using namespace std;
 
void bubbleSort(int arr[] ,int n){

    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
}



int main(){

    int arr[4] = {3,2,5,3};
    bubbleSort(arr,4);
    cout<<"Sorted Array : ";
    for(int i =0;i<4;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}