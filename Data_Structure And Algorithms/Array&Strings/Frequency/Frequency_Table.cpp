#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

void freqtable(int arr[],int n){

    unordered_map<int,int> htab;
    for (int i = 0; i < n; i++)
    {
        htab[arr[i]]++;
    }
    
    for (auto i : htab)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    

}



void freq_with_VEC(int arr[],int n)
{
    vector<int> tb(n,0);
    for (int i = 0; i < n; i++)
    {
        tb[arr[i]]++;
    }
    
    for (int i = 1; i < n; i++)
    {
        cout<<i<<" "<<tb[i]<<endl;
    }
    
}


int main(int argc, char const *argv[])
{

    int arr[10] =  {1,2,3,4,5,5,6};
    int n = 7;
    // freqtable(arr,n);
    freq_with_VEC(arr,n);
    
    return 0;
}
