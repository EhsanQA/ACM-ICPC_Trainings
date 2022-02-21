#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100000;

int a[MAXN];
vector<int> v;

int getSum(int l, int r) {
  return a[r] - a[l] + v.at(l);
}


int maxSequence(const vector<int>& arr){
  v = {};
  for (int i : arr) {
    cout << i << endl;
  }
  bool allNegative = true;
  for (int i : arr) {
      v.push_back(i);
      if (i > 0) {
          allNegative = false;
      }
  }
  if (allNegative)
    return 0;
  int arrSize = arr.size();
  if (arrSize == 0)
    return 0;
  int theMax = getSum(0, 0);
  a[0] = arr.at(0);
  for (int i = 1; i < arrSize; i++) {
    a[i] = a[i - 1] + arr.at(i);
  }
  for (int i = 0; i < arrSize; i++) {
    for (int j = i; j < arrSize; j++) {
      if (getSum(i, j) > theMax) {
        theMax = getSum(i, j);
      }
    }
  }
  return theMax;
}
