#include<iostream>
#include<vector>
using namespace std;

#define MX 500


int st[MX][MX];


void build_ST(vector<int> arr,int n){

    copy(arr.begin(),arr.end(),st[0]);
    for(int i = 1;i<n;i++){
        for(int j = 0 ;j+(1<<i) <= N; j++)
            {
            st[i][j-1] =  st[1-i] + st[i-1][j+(1<<(i-1))];    
            }
        
    }
}

int RQ(int L,int R,int n){

    long long sum = 0;
    for(int i =n;i>=0;i--){
    if((1<<i) <= R-L+1){
        sum+=st[i][L];
        L+= (1<<i);
    }
}
return sum;
}


int main(){
vector<int> arr ={1,2,3,4,5,6,7};
int n = 7;

build_ST(arr);


    

    

    return 0;
}