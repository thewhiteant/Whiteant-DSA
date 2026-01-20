#include<iostream>
using namespace std;


int get_bits(int n,int ip){
    int mask = (1<<ip);
    return (n&mask)>0?1:0; 
}

void set_bit(int &n , int i){
    int mask = (1<<i);\
    n = (n|mask);
}


void clearBit(int &n,int i){
    int mask = ~(1<<i);
    n = (n&mask);
}


void updatebit(int &n,int i,int v){
    clearBit(n,i);
    int mask = (v<<i);
    n = (n|mask);
}


void cleartolast(int &n,int i){
    int mask = (-1<<i);
    n = (n&mask);     
}

void clearRange(int &n,int i,int j){
    int a = (~0)<<(j+1);
    int b = (1<<i) - 1;
    int mask = a|b;
    n = (n&mask);


}

void ReplaceBit(int &n,int i,int j,int m){
        clearRange(n,i,j);
        int mask  = (m<<i);
        n = n|mask;
}

int isPOWEROFTWO(int n){
    return (n&(n-1))==0?0:1;
}

int countBit(int n){
    int count = 0;
    while(n>0){
        int lbit  = (n&1);
        count++;
        n = (n>>1);
    } 
    return count; 

}
int CountBit_Hack(int n){
    int ans = 0;
    while(n>0){
        n = n & (n-1);
        ans++;
    }
    return ans;

}
int Convert_TO_BIN(int n){
    int ans = 0;
    int p = 1; 
    while(n>0){
        ans+=(p*(n&1));
        n = (n>>1);
        p = p*10;
    }
    return ans;
}



int main(){

    return 0;
}
//I am a Inventor If I stop Inventing  I become Follower