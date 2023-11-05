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
  char c;

  bool flag = true;

  int n = s.length();

  for (int i = 1; i < n; i++) {
    if (islower(s[i])) {
      flag = false;
    }
  }

  if (flag) {
    for (int i = 0; i < n; i++) {
      if (islower(s[i])) {
        c = toupper(s[i]);
        cout << c;
      } else {
        c = tolower(s[i]);
        cout << c;
      }
    }
  } else {
    cout << s << endl;
  }
}
