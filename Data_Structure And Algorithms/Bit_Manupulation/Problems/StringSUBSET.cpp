#include<iostream>
#include<math.h>
using namespace std;


void singleStringMaker(string k,int n){

    int count = 0;
    while (n>0)
    {   
        int lbit = (n&1);
        if(lbit) cout<<k[count];
        count++;
        n = (n>>1);
    }
    cout<<endl;

}

void printsubset(string s){

    for (int i = 0; i < (1<<s.length()); i++)
    {
       singleStringMaker(s,i);
    }
    
}

int main(){

    printsubset("abc");





    return 0;

}