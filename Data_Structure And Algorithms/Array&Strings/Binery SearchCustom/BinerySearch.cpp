#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int find;
    cin>>find;
    
    int lo = 0; 
    int hi = n-1;
    int mid;
    while(hi-lo>1){
        mid = (hi+lo)/2;
        if(arr[mid]<find){
            lo = mid+1;
        }
        else {
            hi = mid;
        }
    }

    if(arr[lo]==find || arr[hi]==find) cout<<" pawa gese"<<endl;
    else cout<<"NOpe"<<endl;


    

    return 0;
}