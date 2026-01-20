#include <iostream>
using namespace std;

long long BE(long long a, long long n)
{

    if (n == 0)
        return 1;

    long long result = BE(a, n / 2);
    if (n % 2 == 1)
        return result * result * a;
    else
        return result * result;
}

int main()
{

    cout << BE(2, 3) << endl;
    return 0;
}
