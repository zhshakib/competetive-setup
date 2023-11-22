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
  cin >> T;  // Toggle for testCases!
  while (T--) {
    solve();
  }
  return 0;
}

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  int countB = count(s.begin(), s.end(), 'B');
  if (countB == k) {
    cout << 0 << endl;
    return;
  }

  cout << 1 << endl;

  int op = 0;
  if (countB < k) {
    for (int i = 0; i < n; i++) {
      if (s[i] == 'A') op++;
      if (op == k - countB) {
        cout << i + 1 << " B" << endl;
        return;
      }
    }
  } else {
    for (int i = 0; i < n; i++) {
      if (s[i] == 'B') op++;
      if (op == countB - k) {
        cout << i + 1 << " A" << endl;
        return;
      }
    }
  }
}
