//Implement an algorithm to determine if a string has all 
// unique character. What if you cannot use additional data
//  structure;

#include<iostream>
using namespace std;

int main(){

    bool istrue = true;
    string x = "Hello";
    for(int i = 0;i<x.size();i++){
        for(int j = i+1;j<x.size();j++){
            if(x[i]!=x[j]) istrue = false;
        }
    }

    if(istrue) cout<<"Duplicate Not Found!!";
    else cout<<"Duplicate Found!!";


    return 0;

}