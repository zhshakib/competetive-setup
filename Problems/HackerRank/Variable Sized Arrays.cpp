#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
  int T = 1;
  // cin >> T;  // Toggle for testCases!
  while (T--) {
    solve();
  }
  return 0;
}

void solve() {
  int n, q;
  cin >> n >> q;
  vector<vector<int>> v;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    vector<int> temp;
    for (size_t i = 0; i < x; i++) {
      int y;
      cin >> y;
      temp.push_back(y);
    }
    v.push_back(temp);
  }

  for (int i = 0; i < q; ++i) {
    int x, y;
    cin >> x >> y;
    cout << v[x][y] << endl;
  }
}