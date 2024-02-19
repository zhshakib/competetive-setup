// Insertion Sort

#include <stdio.h>

void insertionSort(int arr[], int size) {
  for (int i = 1; i < size; i++) {
    int temp = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > temp) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }
}

int main() {
  int arr[] = {5, 7, 8, 2, 3, 4, 9, 12, 34, 10, 15};
  int size = sizeof(arr) / sizeof(arr[0]);

  // Call the insertionSort function
  insertionSort(arr, size);
  // Print The Array
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}