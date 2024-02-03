#include <stdio.h>
#include <string.h>

int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    int count[26] = {0};
    char str[1000];
    scanf(" %[^\n]", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
      if (str[i] >= 'a' && str[i] <= 'z') {
        count[str[i] - 'a']++;
      }
    }
    for (int i = 0; i < 26; i++) {
      if (count[i] > 0) {
        printf("%c = %d\n", i + 'a', count[i]);
      }
    }
    printf("\n");
  }
  return 0;
}