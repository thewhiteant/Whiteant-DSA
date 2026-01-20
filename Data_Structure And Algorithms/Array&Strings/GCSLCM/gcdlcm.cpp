#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{

    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;

    int gc = gcd(a, b);
    int lcm = (a * b) / gc;

    cout << "GCD: " << gc << " LCM: " << lcm;

    return 0;
}