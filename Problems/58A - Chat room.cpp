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
  string s;
  cin >> s;
  string hello = "hello";
  int x = 0;

  for (size_t i = 0; i < s.size(); i++) {
    if (s[i] == hello[x]) {
      x++;
    }
  }

  if (x == 5) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
