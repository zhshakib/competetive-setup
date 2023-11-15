// https://github.com/zhshakib/competitive-programming
// CountSort.cpp

#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n) {
  int k = arr[0];
  // find the largest element in the array
  for (int i = 0; i < n; i++) {
    k = max(k, arr[i]);
  }
  int count[k + 1] = {0};
  // store the count of each element
  for (int i = 0; i < n; i++) {
    count[arr[i]]++;
  }
  // cumulative sum of the count
  for (int i = 1; i <= k; i++) {
    count[i] += count[i - 1];
  }
  int output[n];
  // store the sorted elements
  for (int i = n - 1; i >= 0; i--) {
    output[--count[arr[i]]] = arr[i];
  }
  // copy the sorted elements to the original array
  for (int i = 0; i < n; i++) {
    arr[i] = output[i];
  }
}
int main() {
  int arr[] = {4, 2, 2, 8, 3, 3, 1, 5, 6, 7, 3, 2, 1, 0};
  int n = sizeof(arr) / sizeof(arr[0]);
  countSort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
