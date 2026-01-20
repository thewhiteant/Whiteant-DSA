#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ans;

    for (int i = 1; i * i < n; i++)
    {

        if (n % i == 0)
        {

            if (n / i == i)
                ans.push_back(i);
            else
            {
                ans.push_back(i);
                ans.push_back(n / i);
            }
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}