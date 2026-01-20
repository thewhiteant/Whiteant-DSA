#include<iostream> 
using namespace std;


void insertionSort(int arr[],int n){
        int i,key,j;
        for(i = 1;i<n;i++){
            key = arr[i];
            j = i-1;
            
            while(j>=0 && arr[j]>key){
                arr[j+1] = arr[j];
                j= j-1;
            }
            arr[j+1] = key;

        }
}

int main(){
    int arr[4] = {3,2,5,3};
    insertionSort(arr,4);
    cout<<"Sorted Array : ";
    for(int i =0;i<4;i++){
        cout<<arr[i]<<" ";
    }





}