#include <bits/stdc++.h>
using namespace std;

unordered_map<int, vector<int> > dk;

int findFrequency(int left,int right,int element)
{

    int fist = lower_bound(dk[element].begin() , dk[element].end() , left)  -  dk[element].begin();
    int snd  = upper_bound(dk[element].begin() , dk[element].end() , right)  -  dk[element].begin();

    return (snd - fist);

}

int main(){
    
    int arr[] = {2, 38, 6, 9, 8, 6, 8, 2, 11}; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    for(int i =0;i<n;i++){
        dk[arr[i]].push_back(i+1);
    }


    cout<<findFrequency(2,7,8);
    return 0;
}