#include <iostream>
#include<vector>
using namespace std;


int bin_dec(vector<int> arr){
    int num = 0;
    for (int i = 0; i < 32; i++)
    {
        num+=(arr[i]*(1<<i));
    }
    return num;
}


int main(){
   int arr[20] = {1,1,1,2,2,2,3,3,3,5};


    vector<int> ftfb(32,0);
    for(int x:arr){
    for (int i = 0; i < 32; i++)
    {
        int lastBIt = x&(1<<i);
        if(lastBIt){
            ftfb[i]++;
        }
    }
    
    }

    for (int i = 0; i < 32; i++){
                ftfb[i] = ftfb[i]%3;

    }


    cout<<bin_dec(ftfb)<<endl;
    


    

    return 0;  
}