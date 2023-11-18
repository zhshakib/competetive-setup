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

#define MAX 1000050
bool isPrime[MAX];
vector<long long> primes;

void sieve(int n) {
  isPrime[1] = false;
  isPrime[2] = true;
  for (int i = 0; i < n; i++) {
    isPrime[i] = true;
  }
  for (int i = 2; i < n; i++) {
    for (int j = 2; i * j < n; j++) {
      isPrime[i * j] = false;
    }
  }

  for (int i = 2; i < n; i++) {
    if (isPrime[i]) primes.push_back((long long)i);
  }
}

void solve() {
  sieve(1000005);
  for (int i = 0; i < primes.size(); i++) {
    primes[i] *= primes[i];
  }
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    long long a;
    cin >> a;
    bool found = binary_search(primes.begin(), primes.end(), a);
    if (found) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
}
