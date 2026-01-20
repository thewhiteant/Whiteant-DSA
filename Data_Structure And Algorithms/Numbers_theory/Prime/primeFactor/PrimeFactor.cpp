#include <iostream>
#include <vector>
using namespace std;

void PrimeFactor(int n)
{

    for (int i = 2; i * i <= n; i++)
    {
        if (n == 0)
            return;
        if (n % i == 0)
        {
            int counter = 0;
            while (n % i == 0)
            {
                n /= i;
                counter++;
            }
            cout << i << "^" << counter << endl;
        }
    }
    if (n > 1)
    {
        cout << n << "^" << 1 << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    PrimeFactor(n);

    return 0;
}