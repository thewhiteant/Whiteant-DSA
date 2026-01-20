#include<iostream>
using namespace std;

int HD(string x,string y){
    int count = 0;
    for(int i =0;i<x.size();i++){
        if(x[i]!=y[i])
            count++;
    }

    return count;
    
}


int main(){

    string data = "0101000101";
    string tata = "0101000000";

    cout<<HD(data,tata)<<endl;


    return 0;
}