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
  int n, game;
  cin >> n;
  ;

  set<int> levels;
  int x, y;
  cin >> x;
  int level;
  for (int i = 0; i < x; ++i) {
    cin >> level;
    levels.insert(level);
  }

  cin >> y;
  for (int i = 0; i < y; ++i) {
    cin >> level;
    levels.insert(level);
  }
  if (levels.size() == n)
    cout << "I become the guy." << endl;
  else
    cout << "Oh, my keyboard!" << endl;
}