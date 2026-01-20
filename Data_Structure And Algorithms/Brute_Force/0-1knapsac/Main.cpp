#include<iostream>
#include<cstring> // Include this for memset
using namespace std;

const int N = 1e3;
int items[N], profits[N];


int knapsack(int item, int bagweight) {
    if (bagweight <= 0 || item <= 0) return 0;


    if (items[item - 1] > bagweight)
        return knapsack(item - 1, bagweight);
    
      return  max(knapsack(item - 1, bagweight), knapsack(item - 1, bagweight - items[item - 1]) + profits[item - 1]);

  
}

int main() {
    cout << "Enter Number of items: ";
    int w;
    cin >> w;

    cout << "Enter Items: ";
    for (int i = 0; i < w; i++) {
        cin >> items[i];
    }
    cout << "Enter Profits: ";
    for (int i = 0; i < w; i++) {
        cin >> profits[i];
    }

    cout << "Enter Bagsize: ";
    int n;
    cin >> n;

    cout << "Maximum profits: " << knapsack(w, n) << endl;

    return 0;
}
