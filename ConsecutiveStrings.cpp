#include<bits/stdc++.h>

using namespace std;

class LongestConsec {
public:
    static string longestConsec(vector<string> strarr, int k) {
      int index = 0;
      int maxSize = 0;
      int vSize = strarr.size();
      if (vSize == 0 || k < 1 || k > vSize)
        return "";
      vector<int> lens;
      for (string i : strarr)
        lens.push_back(i.size());
      for (int i : lens)
        cout << i << endl;
      for (int i = 0; i < vSize - k + 1; i++) {
        int tSize = 0;
        for (int j = i; j < i + k; j++)
          tSize += lens.at(j);
        if (tSize > maxSize) {
          maxSize = tSize;
          index = i;
        }
      }
      string ans = "";
      for (int i = index; i < index + k; i++)
         ans += strarr.at(i);
      return ans;
    }
};
