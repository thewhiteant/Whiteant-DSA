#include<iostream>
using namespace std;


int LsubsqSum(int arr[],int n){
    int max = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum  = sum+arr[i];
        if(max<sum) sum += arr[i];
    }

    if(sum<0) sum = 0;

    return sum;
    
}




int main(int argc, char const *argv[])
{
    int arr[10] = {-2,-3,4,-1,-2,1,5,-3};
    int n  = 8;
    cout<<LsubsqSum(arr,n)<<endl;

    return 0;
}
