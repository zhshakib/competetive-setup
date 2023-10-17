#include <bits/stdc++.h>
using namespace std;
#define fastIO()                      \
  {                                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);                      \
  }

void solve();

int main() {
#ifndef ONLINE_JUDGE
  freopen("io/input.txt", "r", stdin);
  freopen("io/output.txt", "w", stdout);
#endif
  fastIO();

  int T = 1;
  // cin >> T;  // Toggle for testCases!
  while (T--) {
    solve();
  }
  return 0;
}

void solve() {
  int n;
  cin >> n;
  int x, y, z;
  x = y = z = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; ++j) {
      int temp;
      cin >> temp;
      if (j == 0) x += temp;
      if (j == 1) y += temp;
      if (j == 2) z += temp;
    }
  }
  if (x == 0 && y == 0 && z == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
