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
  unsigned int test;
  cin >> test;

  for (size_t i = 1; i <= test; i++) {
    cout << "Case " << i << ": ";
    double k;
    cin >> k;

    double result = sqrt(((k * k) - 1) / (4 - (k * k)));

    cout << fixed << setprecision(4) << result << endl;
  }
}
