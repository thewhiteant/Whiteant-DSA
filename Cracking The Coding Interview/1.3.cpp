#include<iostream>
using namespace std;


string urlify(string x){
    string res = "";
    for(int i = 0;i<x.size();i++){

        if(x[i] ==' '){
            res+=("%20");
        }else{
            res+=x[i];
        }

    }
    return res;
}



int main(){

    string x = "Mr John Smith";
    cout<<urlify(x)<<endl;


    return 0;
}