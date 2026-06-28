#include<iostream>
#include<vector>
using namespace std;

    vector<int> rotate_left(vector<int> &arr,int k){
    int n = arr.size();
    k%=n;

    vector<int> result;
    for (int i = k; i < n; i++) result.push_back(arr[i]);
    for (int i = 0; i < k; i++) result.push_back(arr[i]);
        
        return result;
    }

int main(){

    vector<int> arr = {1,2,3,4,5};
    vector<int> a = rotate_left(arr,3);
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}