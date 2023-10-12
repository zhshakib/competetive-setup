#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
#ifndef ONLINE_JUDGE
  freopen("io/input.txt", "r", stdin);
  freopen("io/output.txt", "w", stdout);
#endif

  int T = 1;
  // cin>>T; // Toggle for testCases!
  while (T--) {
    solve();
  }
  return 0;
}

void solve() {
  int n, time;
  string queue;
  cin >> n >> time;
  cin >> queue;

  for (size_t i = 0; i < time; i++) {
    for (size_t j = 0; j < n; j++) {
      if (queue[j] == 'B' && queue[j + 1] == 'G') {
        swap(queue[j], queue[j + 1]);
        j++;
      }
    }
  }
  cout << queue << endl;
}

void swap(char &a, char &b) {
  char temp = a;
  a = b;
  b = temp;
}