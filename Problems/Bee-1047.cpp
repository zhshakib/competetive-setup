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
  int starHour, startMinute, endHour, endMinute;

  cin >> starHour >> startMinute >> endHour >> endMinute;

  if (starHour > endHour) endHour += 24;
  int Hours = endHour - starHour;

  if (startMinute > endMinute && Hours >= 0) {
    if (Hours == 0)
      Hours = 23;
    else
      Hours--;
  }

  if (startMinute > endMinute) endMinute += 60;

  int Minutes = endMinute - startMinute;

  if (Hours == 0 && Minutes == 0)
    cout << "O JOGO DUROU " << 24 << " HORA(S) E " << 0 << " MINUTO(S)" << endl;
  else {
    cout << "O JOGO DUROU " << Hours << " HORA(S) E " << Minutes << " MINUTO(S)"
         << endl;
  }
}