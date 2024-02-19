#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
  char hex[100];
  printf("Enter hex number: ");
  scanf(" %[^\n]", hex);
  int len = strlen(hex);
  int num = 0, count = len;
  for (int i = 0; i < len; i++) {
    if (hex[i] >= '0' && hex[i] <= '9') {
      num += (hex[i] - '0') * pow(16, --count);
    }
    if (hex[i] >= 'A' && hex[i] <= 'F') {
      num += (hex[i] - 'A' + 10) * pow(16, --count);
    }
  }

  printf("Decimal Value of %s : %d\n", hex, num);
}
