#include<bits/stdc++.h>

using namespace std;

int solve(string st){
	set<char> s = {'a', 'e', 'o', 'u', 'i', 'u'};
  int t_max = -1;
  int i = 0;
  int j = 0;
  for (; j < (int) st.size();) {
    if (s.count(st.at(j))) {
      j++;
    } else {
      if (t_max < j - i - 1) {
        t_max = j - i - 1;
      }
      i = j;
      j++;
    }
  }
  if (t_max < j - i - 1)
      t_max = j - i - 1;
  return t_max;
}
