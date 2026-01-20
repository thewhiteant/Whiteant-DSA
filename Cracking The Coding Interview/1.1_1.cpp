#include<iostream>
using namespace std;

bool DuplicateString(string s){

    int chk = 0;
    
    for(int i = 0;i<s.size();i++){

        int value = s[i]-'a';
        if((chk & (1<<value)) >0 ){
            return false;
        }

        chk |= (1<<value);

    }


    return true;

}

int main(){

    string s = "Hadfo";
    if(DuplicateString(s)) cout<<"Duplicate Not Found";
    else cout<<"Duplicate Found!!";


    return 0;
}

