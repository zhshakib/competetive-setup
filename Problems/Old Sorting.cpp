#include <bits/stdc++.h>
using namespace std;
#define fastIO()                      \
  {                                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);                      \
  }

int selectionSort(int arr[], int size);
void solve();

int main() {
#ifndef ONLINE_JUDGE
  freopen("io/input.txt", "r", stdin);
  freopen("io/output.txt", "w", stdout);
#endif
  fastIO();
  solve();

  return 0;
}

int selectionSort(int arr[], int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    int min = i;
    for (int j = i + 1; j < size; j++) {
      if (arr[j] < arr[min]) {
        min = j;
        continue;
      }
    }

    if (min != i) {
      int temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;

      count++;
    }
  }

  return count;
}

void solve() {
  int test;
  cin >> test;
  for (int T = 1; T <= test; T++) {
    cout << "Case " << T << ": ";
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      v[i] = x;
    }

    int ans = selectionSort(v, n);
    cout << ans << endl;
  }
}