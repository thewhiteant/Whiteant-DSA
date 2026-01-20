#include<iostream>
using namespace std;

int sliding_window(int arr[],int n,int k){

    int max_sum = INT_MIN;
    for (int i = 0; i <n-k+1; i++)
    {
        int currnet_SUM = 0;
        for (int j = 0; j < k ; j++)
        {
            currnet_SUM += arr[i+j];
        }
        max_sum = max(max_sum,currnet_SUM);
    }
    
    return max_sum;

}

int main()
{
    int arr[] = {1,4,2,10,2,3,1,0,20};
    int k = 4;
    int n = 9;
    cout << sliding_window(arr,n,k)<<endl;

        return 0;
}

