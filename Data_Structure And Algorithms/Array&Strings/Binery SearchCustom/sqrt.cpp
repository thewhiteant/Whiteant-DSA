#include<iostream>
#include<iomanip>
using namespace std;


double dosomik = 1e-7;
int main(){

    double c ;
    cin>>c;

    double l = 1;
    double h = c;


    while(h-l>dosomik){
        double mid = (l+h)/2;
        if(mid*mid<c){
            l = mid;
        }else{
            h = mid;

        }
    }

    cout<<l<<endl;

    return 0;
} 