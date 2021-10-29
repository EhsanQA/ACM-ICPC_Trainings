#include <bits/stdc++.h>
using namespace std;

int find_even_index (const vector<int> n) {
  for (int i = 0; i < n.size(); i++) {
    int left = 0;
    int right = 0;
    for (int j = 0; j < i; j++) {
      left += n.at(j);
    }
    for (int j = i + 1; j < n.size(); j++) {
      right += n.at(j);
    }
    if (left == right) {
      return i;
    }
  }
  return -1;
}
