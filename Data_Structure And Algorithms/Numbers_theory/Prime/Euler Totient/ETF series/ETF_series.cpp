#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> phi(n + 1);
    int res = n;

    for (int i = 0; i <= n; i++)
    {
        phi[i] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        if (phi[i] == i)
        {
            for (int j = i; j <= n; j += i)
            {
                phi[j] -= phi[j] / i;
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << phi[i] << " ";
    }

    return 0;
}