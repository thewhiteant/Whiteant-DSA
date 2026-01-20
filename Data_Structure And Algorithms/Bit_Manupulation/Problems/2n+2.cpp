#include<iostream>
#include<array>
using namespace std;
int main(void) {
	
	
	array<int,20> arr = {1,4,1,1,1,4,5,6,7,7,6,5,3,8};
	int xr = 0;
	for (int i = 0; i <arr.size(); i++)
	{
		xr = xr^arr[i];
	}

	int pos = 0;
    int tem = xr;
    while((tem&1)==0)
    {
        pos++;
        tem = tem>>1;
    
    }
    int setA = 0;
    int setB = 0;
    int mask = (1<<pos);

    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]&mask>0) setA= setA^arr[i];
        else setB = setB ^ arr[i];
    }
    cout<<setA<<endl;
    cout<<setB<<endl;


	return 0;
}