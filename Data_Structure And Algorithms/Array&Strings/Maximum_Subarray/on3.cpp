#include<iostream>
using namespace std;


int count_on3(int arr[],int n){
    int best = 0;
    for (int i = 0; i <n; i++)
    {   
  
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            best = max(best,sum);
        }

    }
    
    return best;
    

}   


int count_on2(int arr[],int n){

    int best = 0;
    for (int  i = 0; i < n; i++)
    {   
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[j];
            best  = max(sum,best);
        }    
        
    }
    return best;
}



int count_on(int arr[],int n){

    int best = 0,sum = 0;
    for (int  i = 0; i < n; i++)
    {
       sum = max(arr [i],sum + arr[i]);
       best = max(best,sum);
    }

    return best;
}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,-12,-20,25};
    int n = 10;



    cout<<count_on3(arr,n)<<endl;
    cout<<count_on2(arr,n)<<endl;
    cout<<count_on(arr,n)<<endl;


    return 0;
}