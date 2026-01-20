#include<iostream>
#include<map>
using namespace std;



void rearrage(int arr[],int n){

        map<int,int> ko;
        
        for(int i = 0;i<n;i++) 
        {
            ko[arr[i]]++;
        }


    for(int i =0;i<n;i++){

        if(ko[i] != 0){
            cout<<i<<" ";
        }else{
            cout<<-1<<" ";
        }

    }

}



int main(){


    int arr[] = {19, 7, 0, 3, 18, 15, 12, 6, 1, 8,
              11, 10, 9, 5, 13, 16, 2, 14, 17, 4};
    int n = 20;
    rearrage(arr,n);


    return 0;
}