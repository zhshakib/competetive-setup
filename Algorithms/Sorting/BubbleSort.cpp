#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
  int size = n - 1;
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size - i; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

int main() {
  int arr[] = {4, 2, 2, 8, 3, 3, 1, 5, 6, 7, 3, 2, 1, 0};
  int n = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}