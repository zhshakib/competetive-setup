#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
#ifndef ONLINE_JUDGE
  freopen("io/input.txt", "r", stdin);
  freopen("io/output.txt", "w", stdout);
#endif

  int T = 1;
  // cin>>T; // Toggle for testCases!
  while (T--) {
    solve();
  }
  return 0;
}

void solve() {
  int n, i, count = 0;
  long long icecream;
  char c;
  cin >> n >> icecream;
  while (n--) {
    cin >> c >> i;
    if (c == '+') icecream += i;
    if (c == '-') {
      if (icecream >= i) {
        icecream -= i;
      } else
        count++;
    }
  }
  cout << icecream << " " << count << endl;
}