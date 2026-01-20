#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{



        int n;
        cin>>n;
        int arr[n];
        set<int> p;
        vector <int> ans;
        for (int i =0; i<n; i++)
        {
            cin>>arr[i];
        }

        for (int i =n-1; i>=0; i--)
        {
            // if(p.find(arr[i])==p.end()){
            //   ans.push_back(arr[i]);
            //    p.insert(arr[i]);  
            // }
            cout << p.find(arr[i]) == p.end()<<endl;

        }

        reverse(ans.begin(),ans.end());
        cout<<p.size()<<endl;
        // for (int i = 0; i <p.size(); ++i )
        // {
        //     cout<<ans[i]<<" ";
        // }
        cout<<endl;

    
    return 0;
}