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
  int n, number;
  vector<int> even, odd;
  cin >> n;
  for (size_t i = 1; i <= n; ++i) {
    cin >> number;
    if (number % 2 == 0) {
      even.push_back(i);
    } else {
      odd.push_back(i);
    }
  }
  if (even.size() == 1) {
    cout << even[0] << endl;
  } else {
    cout << odd[0] << endl;
  }
}
