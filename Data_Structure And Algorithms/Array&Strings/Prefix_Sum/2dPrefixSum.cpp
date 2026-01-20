#include<iostream>
using namespace std;
#define row 3
#define column 3

void p2refsum(int arr[][column], int ok[row][column]){

    int brr[row][column];
    brr[0][0] = arr[0][0];
    for (int i = 1; i < column; i++)
    {
        brr[0][i] = brr[0][i-1] + arr[0][i]; 
    }
    
    for (int i = 1; i < row; i++)
    {
        brr[i][0] = brr[i-1][0] + arr[i][0]; 
    }


    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < column; j++)
        {
            brr[i][j] = brr[i-1][j] + brr[i][j-1] - brr[i-1][j-1] + arr[i][j];
        }
        
    }
    
for (int  i = 0; i < row; i++)
{
    for (int j = 0; j < column; j++)
    {
          cout<<brr[i][j]<<" ";
    }
    cout<<endl;
}


}



int main(int argc, char const *argv[])
{


    int arr[row][column] = { {10,20,30},{5,10,20},{2,4,6}};
    int ps[row][column];

    p2refsum(arr,ps);

    // for (int  i = 0; i < row; i++)
    // {
    //     for (int  j= 0; j < column; j++)
    //     {
      
    //     }
        
    //     cout<<endl;
    // }
    




    return 0;
}
