#include<bits/stdc++.h>

using namespace std;

vector<int> deleteNth(vector<int> arr, int n) {
    map<int, int> m;
    vector<int> ans;
    for (int i : arr) {
      if (m.count(i) > 0) {
          m.at(i)++;
          if (m.at(i) <= n)
              ans.push_back(i);
      } else {
          m.insert({i, 1});
          ans.push_back(i);
      }
    }
    return ans;
    
}
