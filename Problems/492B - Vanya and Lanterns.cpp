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
  long long l;
  cin >> n >> l;
  vector<long long> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  double d = v[0];
  for (int i = 1; i < n; i++) {
    d = max(d, (v[i] - v[i - 1]) / 2.0);
  }
  double r = l - v[n - 1];
  d = max(d, r);

  // print 10 decimal places
  cout << fixed << setprecision(10) << d << endl;
}