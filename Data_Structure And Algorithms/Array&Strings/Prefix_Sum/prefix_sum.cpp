#include<iostream>
using namespace std;


void prefS(int arr[],int n,int p[]){
    p[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        p[i] = p[i-1] + arr[i];
    }
    
}


int main(int argc, char const *argv[])
{
    
    int ar[10] = {2,7,1,5,2};
    int pr[10];
    int n = 5;
    prefS(ar,n,pr);

    for (int i = 0; i < n; i++)
    {
        cout<<pr[i]<<" ";
    }
    
    return 0;
}
