#include<iostream>
using namespace std;


int RQ(int arr[],int s,int e){

    int sum = 0;
    for(int i = s;i<=e;i++)
    {
        sum+=arr[i];
    }
    
    return sum;
}

int main(){

    int arr[] = {2,3,4,15};
    
    int n;
    cout<<"Enter Range: ";
    cin>>n;
    for(int i = 0;i<n;i++){
        int x,y;
        cin>>x>>y;
        cout<<"Range of"<<x<<" "<<y<<" IS "<<RQ(arr,x,y)<<endl;
    }
    
    

    return 0;
}