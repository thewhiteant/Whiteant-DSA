#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> divisors; // Renamed from 'data' to 'divisors'

void s(int n) {
    // Resize the divisors vector to hold n+1 elements for 1-based indexing
    divisors.resize(n + 1);

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            divisors[j].push_back(i);
        }
    }
}

int main() {
    s(10);

    for (int i = 1; i < divisors.size(); i++) {
        cout << i << ": ";
        for (int j = 0; j < divisors[i].size(); j++) {
            cout << divisors[i][j];
            if (j < divisors[i].size() - 1) { // Add a space only if it's not the last element
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
