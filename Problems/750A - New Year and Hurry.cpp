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
  int n, k;
  cin >> n >> k;
  int sp = 0, mToSolve = 240 - k, mins = 0;
  for (int i = 1; i <= n; i++) {
    mins += 5 * i;
    if (mins <= mToSolve) {
      sp++;
    } else {
      break;
    }
  }
  cout << sp << endl;
}