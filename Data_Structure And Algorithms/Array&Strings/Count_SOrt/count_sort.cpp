#include<iostream>
#include<vector>
using namespace std;

void Count_sort(int arr[],int n){

    int mx = arr[0];
    for (int i = 1; i < n; i++)
         mx = max(mx,arr[i]);

    vector<int> chiki(mx+1,0);

    for (int  i = 0; i < n; i++)
         chiki[arr[i]]++;

    for (int i = 1; i <= mx; i++)
         chiki[i] += chiki[i - 1];

    int output[n];
    for (int i = n-1; i >= 0; i--)
         output[--chiki[arr[i]]] = arr[i];

    for (int i = 0; i < n; i++)
        arr[i] = output[i];
    

}

int main(){

    int arr[10] = {12,3,2,4,5,6,4,3};
    int n = 8;
    Count_sort(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}
