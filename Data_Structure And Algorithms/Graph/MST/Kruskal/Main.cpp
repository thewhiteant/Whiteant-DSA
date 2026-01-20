#include <iostream>
#include <climits>
using namespace std;

#define V 5

int Parent[V];
int finalCost = 0; // Corrected the variable name

int find(int x) {
    if (x == Parent[x]) return Parent[x];
    return find(Parent[x]);
}

void Union(int i, int j) {
    if (i != j) Parent[j] = i;
}

void kruskal(int arr[V][V], int st) {
    for (int i = 0; i < V; i++) Parent[i] = i;

    int number_of_edge = 0;
    int minCst;
    int a = -1;
    int b = -1;

    while (number_of_edge < V - 1) {
        minCst = INT_MAX;

        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (find(i) != find(j) && arr[i][j] < minCst) {
                    minCst = arr[i][j];
                    a = i;
                    b = j;
                }
            }
        }

        Union(find(a), find(b));

        cout << "Edge " << number_of_edge + 1 << ": (" << a << ", " << b << ") cost: " << minCst << "\n";
        finalCost += minCst;

        number_of_edge++;
    }

    cout << "Minimum Cost = " << finalCost << endl;
}

int main() {
int cost[][V] = {
        { INT_MAX, 2, INT_MAX, 6, INT_MAX },
        { 2, INT_MAX, 3, 8, 5 },
        { INT_MAX, 3, INT_MAX, INT_MAX, 7 },
        { 6, 8, INT_MAX, INT_MAX, 9 },
        { INT_MAX, 5, 7, 9, INT_MAX },
    };
    kruskal(cost, 0);

    return 0;
}
