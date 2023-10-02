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
  string input;

  int led = 0;
  cin >> input;
  int len = input.length();
  for (int i = 0; i < len; i++) {
    if (input[i] == '0' || input[i] == '9' || input[i] == '6') led += 6;
    if (input[i] == '2' || input[i] == '3' || input[i] == '5') led += 5;
    if (input[i] == '1') led += 2;
    if (input[i] == '4') led += 4;
    if (input[i] == '7') led += 3;
    if (input[i] == '8') led += 7;
  }
  cout << led << " leds" << endl;
}