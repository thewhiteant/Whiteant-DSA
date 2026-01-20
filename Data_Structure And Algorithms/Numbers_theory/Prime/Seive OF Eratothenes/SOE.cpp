#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<bool> prime_mark(n + 1, true);
    prime_mark[0] = prime_mark[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (prime_mark[i] && (long long)i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime_mark[j] = false;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (prime_mark[i] == true)
            cout << i << " ";
    }

    return 0;
}