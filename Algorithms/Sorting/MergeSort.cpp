#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> &left, vector<int> &right) {
  vector<int> sorted;
  int i = 0, j = 0;
  while (i < left.size() && j < right.size()) {
    if (left[i] < right[j]) {
      sorted.push_back(left[i]);
      i++;
    } else {
      sorted.push_back(right[j]);
      j++;
    }
  }

  while (i < left.size()) {
    sorted.push_back(left[i]);
    i++;
  }
  while (j < right.size()) {
    sorted.push_back(right[j]);
    j++;
  }

  return sorted;
}

vector<int> merge_sort(vector<int> &arr) {
  int n = arr.size();
  if (n <= 1) {
    return arr;
  }
  int mid = n / 2;
  vector<int> first(arr.begin(), arr.begin() + mid);
  vector<int> second(arr.begin() + mid, arr.end());
  first = merge_sort(first);
  second = merge_sort(second);
  return merge(first, second);
}

int main() {
  vector<int> array = {6, 5, 12, 10, 9, 1};
  vector<int> sorted = merge_sort(array);

  for (auto i : sorted) {
    cout << i << " ";
  }
  cout << endl;
}