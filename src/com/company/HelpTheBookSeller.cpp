#include<bits/stdc++.h>

using namespace std;

class StockList {
public:
  static std::string stockSummary(vector<string> l, vector<string> m) {
      int lSize = l.size();
      int mSize = m.size();
      if (lSize == 0 || mSize == 0)
          return "";
      map<string, int> mp;
      for (string i : m)
          mp.insert({i, 0});
      for (int i = 0; i < lSize; i++) {
          for (int j = 0; j < l.at(i).size(); j++) {
              if (l.at(i).at(j) == ' ') {
                  string num = "";
                  for (int k = j + 1; k < l.at(i).size(); k++) {
                      num += l.at(i).at(k);
                  }
                  int n = stoi(num);
                  string cType;
                  cType = l.at(i).at(0);
                  if (mp.count(cType) > 0) {
                      mp.at(cType) += n;
                  }
                  break;
              }
          }
      }
      string ans = "";
      for (int i = 0; i < mSize; i++) {
          ans += "(";
          ans += m.at(i);
          ans += " : ";
          ans += to_string(mp.at(m.at(i)));
          ans += ")";
          if (i != mSize - 1)
              ans += " - ";
      }
      return ans;
  }
};
