#include<iostream>
using namespace std;

int LS(int arr[],int n,int se){

    for(int i =0;i<n;i++){

        if(arr[i]==se){
            return i;
        }
    }

    return -1;

}

int main(){

    int  arr[4] = {2,4,5,6};
    cout<<"Search Result: "<<LS(arr,4,50)<<endl;
    


    return 0;

}