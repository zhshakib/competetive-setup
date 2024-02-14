#include <bits/stdc++.h>
using namespace std;

int profit = 0;

void solve();

int main() {
  int T = 1;
  cin >> T;  // Toggle for testCases!
  while (T--) {
    solve();
  }

  cout << profit << endl;
  return 0;
}

void solve() {
  string s;
  int bed_room, bathrooms;

  cin >> s;
  cin >> bed_room >> bathrooms;

  if (s == "standard") {
    int cost = 50 * bed_room + 100 * bathrooms;
    profit += cost;
  } else {
    int cost = 50 * bed_room + 100 * bathrooms + 100;
    profit += cost;
  }
}