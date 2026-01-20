#include <iostream>
using namespace std;

void buildTree(int arr[], int res[], int left, int right, int position) {
    if (left == right) {
        res[position] = arr[left];
        return;
    }
    int mid = (left + right) / 2;

    buildTree(arr, res, left, mid, position * 2);
    buildTree(arr, res, mid + 1, right, (position * 2) + 1);

    res[position] = min(res[position * 2], res[(position * 2) + 1]);
}

int RMQ_min(int res[], int left, int right, int SR, int ER, int position) {
    if (right < SR || ER < left)
        return INT_MAX;
    if (SR <= left && ER >= right) {
        return res[position];
    }

    int mid = (left + right) / 2;
    int leftMin = RMQ_min(res, left, mid, SR, ER, position * 2);
    int rightMin = RMQ_min(res, mid + 1, right, SR, ER, (position * 2) + 1);

    return min(leftMin, rightMin);
}

int main() {
    int n = 10;
    int arr[n] = {2, 1, 4, 5, 3, 6, 3, 6, 5, 9};

    int res[4 * n] = {0};

    buildTree(arr, res, 0, n - 1, 1);

    cout << "Minimum value in range  " << RMQ_min(res, 0, n - 1, 0, 9, 1) << endl;

    return 0;
}
