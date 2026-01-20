#include<iostream>
using namespace std;



void merge(int arr[],int low,int mid, int high){

    int i = low;
    int j = mid+1;
    int k = low;

    int reuslt[high+1];


    while(i<=mid && j<= high){

        if(arr[i]<arr[j]){
            reuslt[k] = arr[i];
            i++;
            k++;
        }else{
            reuslt[k] = arr[j];
            j++;
            k++;
        }

    }
    
    while(i<=mid){
         reuslt[k] = arr[i];
            i++;
            k++;
    }

    while(j<=high){
            reuslt[k] = arr[j];
            j++;
            k++;
    }

    for (int ik = low; ik <= high; ik++)
    {
        arr[ik] = reuslt[ik];
    }
    
}




void MergeSort(int arr[],int l,int r)
{   

    if(l<r){


    int mid = (l+r)/2;
    MergeSort(arr,l,mid);
    MergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);

    }  

}



int main(){


    int arr[8] = {4,10,2,4,2,6,4,8};

    MergeSort(arr,0,7);

    for (int i = 0; i <8; i++)
    {
      cout<<arr[i]<<" ";
    }
    


    return 0;

}