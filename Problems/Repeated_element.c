#include <stdio.h>

int main() {
  int arr[] = {2, 2, 2, 5, 5, 5, 3, 3, 3, 3};
  int size = sizeof(arr) / sizeof(arr[0]);  // Counting Size of this array!
  int count, checked;

  for (int i = 0; i < size; i++) {
    count = 0;
    checked = 0;

    for (int j = i + 1; j < size; j++) {
      if (arr[i] == arr[j]) {
        checked = 1;
        break;
      }
    }
    if (checked == 1) continue;

    for (int j = 0; j < size; j++) {
      if (arr[i] == arr[j]) count++;
    }
    printf("%d Occurs %d \n", arr[i], count);
  }
}
