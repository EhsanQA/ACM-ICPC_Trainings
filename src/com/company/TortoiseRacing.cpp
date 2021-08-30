#include<bits/stdc++.h>

using namespace std;

class Tortoise {
public:
    static vector<int> race(int v1, int v2, int g) {
      if (v2 <= v1) {
        return {-1, -1, -1};
      }
      vector<int> ans;
      double t = (double) g / (v2 - v1) * 3600;
      int tt = t;
      ans.push_back(tt / 3600);
      tt = tt % 3600;
      ans.push_back(tt / 60);
      tt = tt % 60;
      ans.push_back(tt);
      return ans;
    }
};
