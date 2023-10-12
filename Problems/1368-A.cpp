#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
#ifndef ONLINE_JUDGE
  freopen("io/input.txt", "r", stdin);
  freopen("io/output.txt", "w", stdout);
#endif

  int T = 1;
  cin >> T;  // Toggle for testCases!
  while (T--) {
    solve();
  }
  return 0;
}

void solve() {
  int a, b, n, count = 0, temp, result;
  cin >> a >> b >> n;
  if (a < b) {
    a = a + b;
    b = a - b;
    a = a - b;
  }
  while (n >= a) {
    result = a + b;
    b = a;
    a = result;
    count++;
  }

  cout << count << endl;
}