// 230270106	Oct/28/2023 23:59UTC+6	test_me_up	B - Taxi	GNU C++17 (64)	Accepted	62 ms	400 KB

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
  int n, taxi = 0;
  cin >> n;
  vector<int> v(n);
  for (size_t i = 0; i < n; i++) {
    int x;
    cin >> x;
    v[i] = x;
  }
  int count4 = count(v.begin(), v.end(), 4);
  int count3 = count(v.begin(), v.end(), 3);
  int count2 = count(v.begin(), v.end(), 2);
  int count1 = count(v.begin(), v.end(), 1);
  taxi += count4;
  taxi += count3;
  taxi += (count2 / 2);

  if (count3 >= count1) count1 = 0;
  if (count3 <= count1) count1 -= count3;

  if (count2 % 2 == 1) {
    taxi++;
    count1 -= 2;
  }
  if (count1 > 0) taxi += ((count1 + 3) / 4);
  cout << taxi << endl;
}
