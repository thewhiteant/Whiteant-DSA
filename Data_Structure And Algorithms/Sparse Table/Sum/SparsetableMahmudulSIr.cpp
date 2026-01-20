#include <bits/stdc++.h>
using namespace std;


    int maxSize = 16;
    int st[7][16];
   


int rangeSUM(int L ,int R){
    int sum = 0;
    int k = maxSize;

    for(int i  = k;i>=0;i--){
            if((1<<i) <= (R-L+1)){
                sum+= st[i][L];
                L+= (1<<i);
            }
        
    }

    return sum;
}

void build_ST(int arr[],int n){

    for (int j = 0; j < n; j++)
             st[0][j] = arr[j];
 
    for (int i = 1; i <= 7; i++){
        for (int j = 0; j + (1<<i) <= maxSize; j++)
            st[i][j] = st[i - 1][j] + st[i - 1][j + (1<<i-1)];
    }

}

void printST(){
    
    for (int i = 0; i <= 7; i++)
    {
        printf("i-> %d row ---> ", i);
        for (int j = 0; j + pow(2, i) <= maxSize; j++)
        {
            printf("%3d", st[i][j]);
        }
        printf("\n");
    }

}


int main()
{

    int arrSize;
    int arr[100];
    scanf("%d", &arrSize);
    for (int i = 0; i < arrSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    build_ST(arr,arrSize);
    printST();

    cout << endl
         << endl;

    int a,b;
    cout<<"Enter Ranges:"<<endl;
    while(cin>>a>>b){
        cout<<a<<" to "<<b<<" Sum is "<<rangeSUM(a,b)<<endl;       
    }


    return 0;
}

/*
9
1 5 3 -4 20 5 3 10 6

*/


    