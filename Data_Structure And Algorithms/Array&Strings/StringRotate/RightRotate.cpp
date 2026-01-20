#include<iostream>
#include<algorithm>
using namespace std;


void rotateLeft(string &x,int ghor){

    reverse(x.begin(),x.begin()+ghor);
    reverse(x.begin()+ghor,x.end());
    reverse(x.begin(),x.end());


}

void rotateRigt(string &x, int ghor){
    
    ghor = x.size()-ghor;

    reverse(x.begin(),x.begin()+ghor);
    reverse(x.begin()+ghor,x.end());
    reverse(x.begin(),x.end());
}


int main(){

    string x = "abcdefg";
    rotateRigt(x,2);
    rotateLeft(x,2);

    cout<<x<<endl;
    


    return 0;
}