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
  vector<int> arr(100);
  int x;

  for (int i = 0; i < n; i++) {
    cin >> x;
    arr[x]++;
  }

  for (auto x : arr) {
    cout << x << " ";
  }

  cout << endl;
}
