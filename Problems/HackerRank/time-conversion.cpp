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
  string s;
  cin >> s;

  int hour = stoi(s.substr(0, 2));
  string minute = s.substr(3, 2);
  string second = s.substr(6, 2);
  string ampm = s.substr(8, 2);

  if (ampm == "PM" && hour != 12) {
    hour += 12;
    cout << hour << ":" << minute << ":" << second << endl;
  } else if (ampm == "AM" && hour == 12) {
    hour = 0;
    cout << "0" << hour << ":" << minute << ":" << second << endl;
  } else {
    if (hour < 12) {
      cout << "0" << hour << ":" << minute << ":" << second << endl;
    } else {
      cout << hour << ":" << minute << ":" << second << endl;
    }
  }
}
