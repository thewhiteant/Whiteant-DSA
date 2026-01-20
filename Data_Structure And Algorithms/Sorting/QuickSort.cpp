#include<iostream>
using namespace std;


int pert(int arr[],int low,int high)
{
    int pivot = arr[high];
    int i = low-1;
    for (int  j = low; j <high; j++)
    {
        if(pivot > arr[j]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);

    return (i+1);
}

void QkSort(int arr[],int low,int high){


    if(low<high){

        int pivot = pert(arr,low,high);
        QkSort(arr,low,pivot-1);
        QkSort(arr,pivot+1,high);

    }


}


int main(){
    

    int arr[10] = {4,3,5,2,3,2,444,10,9,10};
    QkSort(arr,0,9);


    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;

}