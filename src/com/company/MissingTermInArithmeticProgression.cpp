#include <bits/stdc++.h>

using namespace std;


static long findMissing(vector<long> list){
    int lSize = list.size();
    long a[lSize - 1];
    
    for (int i = 0; i < lSize - 1; i++) {
        a[i] = list.at(i + 1) - list.at(i);
    }
    long diff = a[0];
    long index = 0;
    long tempDiff = a[0];
    for (int i = 0; i < lSize - 1; i++) {
      if (abs(a[i]) > abs(diff)) {
        index = i;
        tempDiff = diff;
        diff = a[i];
        return list.at(i) + tempDiff;
      } else if (abs(a[i]) < abs(diff)) {
        return list.at(index) + a[i];
      }
    }
}
