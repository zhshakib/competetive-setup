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
  for (int i = 1; i <= 10; ++i) {
    cout << i + 1 << endl;
  }
}