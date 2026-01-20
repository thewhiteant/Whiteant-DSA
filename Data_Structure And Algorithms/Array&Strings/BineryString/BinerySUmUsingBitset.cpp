#include<iostream>
#include<bitset>
using namespace std;


int main(){

    string x = "0101010100101";
    string y = "0101010101010";


        bitset<16> fbit(x);
        bitset<16> sbit(y);

        bitset<16> sum = fbit.to_ulong()+sbit.to_ulong();

        cout<<sum<<endl;







    return 0;
}