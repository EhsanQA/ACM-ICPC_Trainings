#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100000;

int a[MAXN];

int getSum(int r, int l) {
//   cout << "GET SUM: R: " << a[l + 1] << " L: " << a[r - 1] << endl;
  return a[r + 1] - a[l - 1];
}


int maxSequence(const vector<int> arr){
  for (int i : arr) {
    cout << i << endl;
  }
  int arrSize = arr.size();
  if (arrSize == 0)
    return 0;
  int theMax = getSum(1, 1);
//   cout << "FIRST MAX: " << theMax << endl;
  a[1] = arr.at(0);
  for (int i = 2; i < arrSize; i++) {
    a[i] = a[i - 1] + arr.at(i - 1);
  }
  for (int i = 1; i < arrSize; i++) {
    for (int j = i; j < arrSize; j++) {
      if (getSum(i, j) > theMax) {
        theMax = getSum(i, j);
        cout << "i: " << i << " j: " << j << endl;
      }
    }
  }
//   for (int i : a) {
//     if (i != 0)
// //       cout << "THE AS: " << i << endl;
//   }
//   cout << "THE MAX: " << theMax << endl;
  if (theMax < 0)
    return 0;
  return theMax;
}
