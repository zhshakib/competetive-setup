// Selection Sort
#include <stdio.h>

void selectionSort(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    int min = i;
    for (int j = i + 1; j < size; j++) {
      if (arr[j] < arr[min]) {
        min = j;
        continue;
      }
    }

    if (min != i) {
      int temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
    }
  }
}

int main() {
  int arr[] = {5, 7, 8, 2, 3, 4, 9, 12, 34, 10, 15};
  int size = sizeof(arr) / sizeof(arr[0]);

  selectionSort(arr, size);

  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}