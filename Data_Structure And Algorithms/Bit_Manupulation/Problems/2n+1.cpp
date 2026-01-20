#include<iostream>
#include<array>
using namespace std;


int F2nPO(int arr[],int n){  //2n+1

    int em = 0;
    for (int i = 0; i <n; i++)
    {
        em = em^arr[i];
    }
    
    return em;

}



int main(void) {
    int arr[10] = {1,1,5,2,2,3,3};
    cout<<F2nPO(arr,7)<<endl;  

	return 0;
}