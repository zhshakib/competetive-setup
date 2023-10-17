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
  string players;
  cin >> players;
  int size, countZero = 0, countOne = 0;
  size = players.size();

  for (int i = 0; i < size; i++) {
    if (players[i] == '0') {
      countZero++;
      if (countZero >= 7) {
        cout << "YES" << endl;
        return;
      } else
        countOne = 0;
    } else if (players[i] == '1') {
      countOne++;
      if (countOne >= 7) {
        cout << "YES" << endl;
        return;
      } else
        countZero = 0;
    }
  }
  cout << "NO" << endl;
}
