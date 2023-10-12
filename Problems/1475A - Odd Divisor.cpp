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
  long long int n;
  cin >> n;
  if (n & 1) {
    cout << "YES" << endl;
  } else {
    bool flag = false;
    long long div = n;
    while (div > 2) {
      div /= 2;
      if (div & 1) {
        if (n % div == 0) {
          flag = true;
          break;
        }
      }
    }

    if (flag)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
