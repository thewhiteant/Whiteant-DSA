#include<iostream>
#include<string>
using namespace std;

  



int main(){

    string x = "abcd";

    for(int i = 0;i<x.size();i++){  
        for(int j =1;j<= x.size()-i ;j++){
                cout<<x.substr(i,j)<<endl;
        }

    }


    
    return 0;
}