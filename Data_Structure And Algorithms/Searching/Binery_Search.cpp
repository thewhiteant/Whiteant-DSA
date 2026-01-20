#include<iostream>
using namespace std;

int BS(int arr[],int n,int se){
    int l = 0;
    int h = n-1;
    int mid;
    while(l<h){
        mid = (l+h)/2;
        if(arr[mid] == se){
            return mid;
        }else if(arr[mid]<se) l = mid+1;
        else h = mid-1;
    }

return -1;
}

int main(){

    int  arr[5] = {2,4,5,6,10};
    cout<<BS(arr,5,4)<<endl;

    return 0;
}