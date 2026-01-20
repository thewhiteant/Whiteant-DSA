#include<iostream>
using namespace std;


int naive_Freq_Find(int arr[],int s,int e,int element){
    int count = 0;
    for(int i =s;i<=e;i++){
        if(arr[i] == element) count++;
        
    }


    return count;
}


int main(){


    int arr[] = {1,1,1,1,2,4,3,36,2,7,9,7,7,3,2};

    int n = 15;

    cout<<naive_Freq_Find(arr,2,6,2);



    return 0;
}