#include<iostream>
using namespace std;

long long merge(int arr[], int l, int m, int h) {

      long long swap = 0;
      int i = l;
      int j = m + 1;
      int k = 0;
      int temp[h - l + 1];

      while (i <= m && j <= h) {
          if (arr[i] <= arr[j]) {
              temp[k++] = arr[i++];
          }
          else {
              temp[k++] = arr[j++];
              swap++; // Count the number of swaps made
          }
      }

      while (i <= m) {
          temp[k++] = arr[i++];
      }

      while (j <= h) {
          temp[k++] = arr[j++];
      }

      for (int i = l; i <= h; i++) {
          arr[i] = temp[i - l];
      }

      return swap;

  }

  long long MergeSort(int arr[], int low, int high) {

      long long swap = 0;
      if (low < high) {
          int mid = (low + high) / 2;
          swap += MergeSort(arr, low, mid); // Add the number of swaps made in the left half
          swap += MergeSort(arr, mid + 1, high); // Add the number of swaps made in the right half
          swap += merge(arr, low, mid, high); // Add the number of swaps made during the merge process
      }

      return swap;

  }

  int main() {

      int arr[6] = { 12, 11, 13, 5, 6, 7 };

      long long swaps = MergeSort(arr, 0, 5);

      cout << "Sorted array: ";
      for (int num : arr) {
          cout << num << " ";
      }
      cout << "\nNumber of swaps: " << swaps << endl;

      return 0;
  }
