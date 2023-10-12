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
  int num;
  vector<int> numbers;
  for (size_t i = 0; i < 3; ++i) {
    cin >> num;
    numbers.push_back(num);
  }
  sort(numbers.begin(), numbers.end());

  if (numbers[0] + numbers[1] == numbers[2])
    cout << "YES" << endl;
  else if (numbers[1] == numbers[2] && numbers[0] % 2 == 0)
    cout << "YES" << endl;
  else if (numbers[0] == numbers[1] && numbers[2] % 2 == 0)
    cout << "YES" << endl;
  else if (numbers[0] == numbers[2] && numbers[1] % 2 == 0)
    cout << "YES" << endl;
  else if (numbers[0] == numbers[2] && numbers[1] % 2 == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}