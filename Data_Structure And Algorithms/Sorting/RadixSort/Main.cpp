#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 10;
    int arr[10] = {132, 224, 42, 437, 324, 240, 43, 52, 1, 3423};

    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
    }

    for (int exp = 1; mx / exp > 0; exp *= 10)
    {

        vector<int> count_arr(mx + 1, 0), output;

        for (int i = 0; i < n; i++)
        {
            count_arr[(arr[i] / exp) % 10]++;
        }

        for (int i = 1; i < 10; i++)
        {
            count_arr[i] += count_arr[i - 1];
        }

        for (int i = 0; i < n; i++)
        {
            output[--count_arr[(arr[i] / exp) % 10]] = arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << output[i] << " ";
        }
    }

    return 0;
}