#include<bits/stdc++.h>

using namespace std;

class Kata {
public:
    vector<int> sortArray(vector<int> array) {
        vector<int> odds;
        for (int i : array) {
          if (i % 2 == 1) {
            odds.push_back(i);
          }
        }
        sort(odds.begin(), odds.end());
        int aSize = array.size();
        int oddi = 0;
        for (int i = 0; i < aSize; i++) {
          if (array.at(i) % 2 == 1) {
            array.at(i) = odds.at(oddi);
            oddi++;
          }
        }
        return array;
    }
};
