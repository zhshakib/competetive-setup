#include <bits/stdc++.h>
using namespace std;
#define fastIO()                      \
  {                                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);                      \
  }

void solve();

int solved = 0;
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
  cout << solved << endl;
  return 0;
}

void solve() {
  int sure = 0;
  for (int i = 0; i <= 2; i++) {
    int x;
    cin >> x;
    if (x == 1) {
      sure++;
    }
  }

  if (sure >= 2) {
    solved++;
  }
}
