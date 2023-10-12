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
  string s1, s2;
  cin >> s1 >> s2;
  int len1 = s1.size();
  int len2 = s2.size();

  if (s1 == s2) {
    cout << "=" << endl;
  } else if (s1[len1 - 1] == s2[len2 - 1]) {
    if (s1[len1 - 1] == 'L') {
      if (len1 > len2)
        cout << ">" << endl;
      else
        cout << "<" << endl;
    } else {
      if (len1 > len2)
        cout << "<" << endl;
      else
        cout << ">" << endl;
    }
  } else if (s1[len1 - 1] > s2[len2 - 1])
    cout << "<" << endl;
  else
    cout << ">" << endl;
}