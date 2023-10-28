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
  int n;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(), v.end());

  for (int i = 0; i < n; i++) {
    if ((v[i] == v[i + 1]) || v[i] == v[i - 1]) continue;
    cout << v[i] << endl;
  }
}
