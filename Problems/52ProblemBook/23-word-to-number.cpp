#include <stdio.h>
#include <string.h>

void solve();

int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    solve();
  }
}

void solve() {
  char str[100];
  scanf(" %[^\n]", str);
  int length = strlen(str);
  for (int i = 0; i < length; ++i) {
    int ans = (str[i] + 1) - 'A';
    printf("%d", ans);
  }
  printf("\n");
}