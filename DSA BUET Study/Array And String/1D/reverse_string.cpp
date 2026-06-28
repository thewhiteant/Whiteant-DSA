#include<iostream>
using namespace std;


string ans  = "";

void reverseString(string s){

    if(s.empty()) return;
    reverseString(s.substr(1));
    ans += s[0];
}

void noglobalRec(string s){
    
}

int main(){

    string s = "ABCDE";
    reverseString(s);
    cout<<ans<<" ";


    return 0;
}