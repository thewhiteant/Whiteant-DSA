#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;




void countFreq(int arr[],int n){
        sort(arr,arr+n);
        for (int i = 0; i < n; i++)
        {

        
        int f_indx = lower_bound(arr,arr+n,arr[i])-arr;
        int s_index = upper_bound(arr,arr+n,arr[i])-arr-1;
        i = s_index;

        int frequency_items = s_index-f_indx+1;
        cout<<arr[i]<<" = "<<frequency_items<<endl;


        }
}

int main(){

    int arr[20] = {1,1,2,2,2,2,3,3,3,4,4,4,56,6,6,6,56};
    int n = 17;
    countFreq(arr,17);

    return 0;
}