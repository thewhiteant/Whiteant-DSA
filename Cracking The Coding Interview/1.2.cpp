//Given Two strings write a method to decide if one is a permutation of other 
//Simple login if Evry digit Map once then its permutation

#include<iostream>
#include<map>
using namespace std;


bool Ispermulations(string s,string k){


    map<char,char> permap;

    for(int i = 0;i<s.size();i++){

        if(permap[s[i]]) return false;

        permap[s[i]] = k[i];

    }

        return true;

}


int main(){

    string a = "hello";
    string b = "abcde";

    if(Ispermulations(a,b)) cout<<"Permutation";
    else cout<<"Wrong Permutation";

    

    return 0;
}