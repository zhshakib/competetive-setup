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
  int testCases;
  cin >> testCases;
  for (int i = 1; i <= testCases; i++) {
    int n;
    cin >> n;
    pair<string, int> arr[n];
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      arr[i].first = s;
      int x, y, z;
      cin >> x >> y >> z;
      int vol = x * y * z;
      arr[i].second = vol;
    }

    // sort pairs by second

    sort(arr, arr + n, [](pair<string, int> a, pair<string, int> b) {
      return a.second > b.second;
    });

    if (arr[0].second != arr[n - 1].second) {
      cout << "Case " << i << ": ";
      cout << arr[0].first << " took chocolate from ";
      cout << arr[n - 1].first << endl;
    } else {
      cout << "Case " << i << ": ";
      cout << "no thief" << endl;
    }
  }
}