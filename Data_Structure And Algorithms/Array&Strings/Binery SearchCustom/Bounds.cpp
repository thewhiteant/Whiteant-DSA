#include <iostream>
#include <vector>
using namespace std;



int lowebound(vector<int> &test, int findelemnt){

    int low = 0;
    int high = (int) test.size()-1;
    while(high-low>1){
        int mid = (high+low)/2;
        if(test[mid]< findelemnt){
            low = mid+1;
        }else {
            high = mid;
        }
      
    }
     if(test[low] >= findelemnt){
        return low;
        }
     if(test[high]>= findelemnt) 
     {
     return high;
     }


     return -1;
}



int upperbound(vector<int> &test, int findelemnt){

    int low = 0;
    int high = (int) test.size()-1;
    while(high-low>1){
        int mid = (high+low)/2;
        if(test[mid]< findelemnt){
            low = mid+1;
        }else {
            high = mid;
        }
      
    }
     if(test[low] > findelemnt){
        return low;
        }
     if(test[high]> findelemnt) 
     {
     return high;
     }


     return -1;
}


int main()
{
    vector <int> vc ;

    vc.assign({1,2,3,6,8,9});
    cout<<lowebound(vc,10)<<endl;
    cout<<upperbound(vc,6)<<endl;

    

    
    return 0;
}