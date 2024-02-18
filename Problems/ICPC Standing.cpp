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
  int testCases;
  cin >> testCases;
  for (int i = 1; i <= testCases; i++) {
    int problem, solved, ranking;
    cin >> problem >> solved >> ranking;
    if (problem == solved && ranking != 1) {
      cout << "Case " << i << ": ";
      cout << "No" << endl;
    } else {
      cout << "Case " << i << ": ";
      cout << "Yes" << endl;
    }
  }
}