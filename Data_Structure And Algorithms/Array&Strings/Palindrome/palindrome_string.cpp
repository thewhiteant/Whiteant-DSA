#include <iostream>

using namespace std;

int palindrom(string s){
    int l = 0;
    int h = s.length()-1;
    while(l<h){
        if(s[l++]!=s[h--]) return -1;
    }
    return 0;

}

int main() {

    cout<<palindrom("abbba")<<endl;


	return 0;

}
