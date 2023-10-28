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
  string number;
  cin >> number;
  int lucky = stoi(number);
  int n = number.size();
  if ((lucky % 4 == 0) || (lucky % 7 == 0)) {
    cout << "YES" << endl;
    return;
  }
  vector<int> digits = {44, 77, 47, 74, 444, 447, 474, 477, 744, 747, 774, 777};
  for (auto num : digits) {
    if (lucky % num == 0) {
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
}
