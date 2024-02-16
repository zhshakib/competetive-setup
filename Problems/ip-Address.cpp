#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char address[15], temp[4];
  int counter = 0;
  printf("Enter An IP Address: ");
  scanf("%s", address);
  int len = strlen(address);

  // Loop through the address
  for (int i = 0; i < len; i++) {
    if (address[i] != '.') {
      temp[counter] = address[i];
      counter++;
    }
    if (address[i] == '.' || i == len - 1) {
      printf("%03d ", atoi(temp));
      counter = 0;
    }
  }
}