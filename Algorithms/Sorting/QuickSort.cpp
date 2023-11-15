#include <bits/stdc++.h>
using namespace std;

/**
 * Partition the given array using the last element as the pivot.
 *
 * @param arr The array to be partitioned.
 * @param low The starting index of the array.
 * @param high The ending index of the array.
 *
 * @return The index of the pivot element after partitioning.
 *
 * @throws None.
 */
int partition(int arr[], int low, int high) {
  int pivot = arr[high];
  int i = (low - 1);
  for (int j = low; j <= high - 1; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);
  return (i + 1);
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

int main() {
  int arr[] = {10, 7, 8, 9, 1, 5, 3, 2, 4, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Call the quickSort function
  quickSort(arr, 0, n - 1);

  // printing the sorted array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}