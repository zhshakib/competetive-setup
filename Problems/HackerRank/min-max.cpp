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
  vector<int> number;
  for (int i = 0; i < 5; i++) {
    int temp;
    cin >> temp;
    number.push_back(temp);
  }

  sort(number.begin(), number.end());
  long long min = 0;
  long long max = 0;
  for (int i = 0, j = 1; i < 4, j < 5; ++i, ++j) {
    min += number[i];
    max += number[j];
  }

  cout << min << " " << max << endl;
}