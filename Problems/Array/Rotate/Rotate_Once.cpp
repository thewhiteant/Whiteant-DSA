#include<iostream>
#include<vector>
using namespace std;

  

    void rot(int arr[],int n,int d){

        vector<int> tem;
        for(int i = d; i < n;i++) {
            tem.push_back(arr[i]);
        }
        
        for(int k = 0;k<d;k++){
                tem.push_back(arr[k]);
        }

       for(int i =0;i<n;i++){
        arr[i] = tem[i];
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